#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <RcppEigen.h>
#include "geodesic.h"

// [[Rcpp::depends(RcppEigen)]]
// [[Rcpp::plugins(cpp11)]]

/**
 * Fixed-rate uniform random walk in R^2
 * @tparam AnimalType
 * @tparam EnvironmentType
 */
template<typename AnimalType, typename EnvironmentType>
struct RandomMovement {
  void update(AnimalType & a, EnvironmentType & e) {
    a.x += R::runif(-M_PI,M_PI);
    a.y += R::runif(-M_PI,M_PI);
  }
};

/**
 * Locally Gibbs movement, following Michelot et al. (2019)
 *
 * The implementation is abstracted so that the proposal weights come from
 * an overloaded operator() function within EnvironmentType
 *
 * @tparam AnimalType
 * @tparam EnvironmentType
 */
template<typename AnimalType, typename EnvironmentType>
class ReweightedRandomWalk {
  
private:
  
  double stepsize_sq;
  std::size_t m;
  Eigen::MatrixXd proposals;
  Eigen::VectorXd weights; // Column vector
  
  // CDF sampling from weights, assuming they are already normalized
  // It is a type able to represent the size of any object in bytes: 
  // size_t is the type returned by the sizeof operator and is widely 
  // used in the standard library to represent sizes and counts.
  std::size_t sampleInd() {
    double u = R::runif(0,1);
    double q = 0;
    std::size_t k = 0;
    double *w = weights.data();
    while(q<u) {
      q += *(w++);
      ++k;
    }
    return k - 1;
  }
  
public:
  
  ReweightedRandomWalk(std::size_t n_proposals, double r) : stepsize_sq(r*r),
  m(n_proposals)
  {
    // Resize the containers
    proposals.resize(2, m);
    weights.resize(m);
  }
  
  void update(AnimalType & animal, EnvironmentType & environment) {
    double d, a, x0, y0, xn, yn;
    bool sampling = true;
    
    // double dens;
    
    // std::cout << animal.cohortID << ", ";
    // std::cout << environment.id << ", ";
    
    while(sampling) {
      
      // runif run here in scalar mode - generates a single value
      d = std::sqrt(R::runif(0,stepsize_sq));
      a = R::runif(-M_PI,M_PI);
      
      // Disc center
      x0 = animal.x + d * std::cos(a);
      y0 = animal.y + d * std::sin(a);
      
      // Sample m points in the circle, and compute their weights
      // Use asterisks to create pointers
      double *prop = proposals.data();
      double *w = weights.data();
      
      for(std::size_t i=0; i<m; ++i) {
        
        // Randomly sample a distance and angle
        d = std::sqrt(R::runif(0,stepsize_sq));
        a = R::runif(-M_PI,M_PI);
        
        // Calculate new x,y
        xn = x0 + d * std::cos(a);
        yn = y0 + d * std::sin(a);
        
        // Store x,y proposal
        *(prop++) = xn;
        *(prop++) = yn;
        
        // if(animal.cohortID == 5 && yn <= -12 && (environment.id <= 3 || environment.id >= 11)){
        //   std::cout << "in SEUS" << std::endl;
        // }
        
        // Retrieve density value (weight) at new x,y
        *(w++) = environment(xn, yn, 'D');
        
      }
      
      // Select one point
      double totalWeight = weights.sum();
      Rcpp::checkUserInterrupt();
      
      if(totalWeight > 0) {
        
        // weights /= totalWeight is equivalent to weights = weights / totalWeight
        weights /= totalWeight;
        std::size_t k = sampleInd();
        
        animal.x = proposals(0,k);
        animal.y = proposals(1,k);
        
        sampling = false;
        
      }
    }
  }
};

/**
 * Animal movement with individual movement coupled to latent animals.
 *
 * Each latent animal moves according to a single latent environment and
 * movement type.
 *
 * @tparam AnimalType
 * @tparam EnvironmentType
 * @tparam LatentMovementType
 */
template<typename AnimalType, 
         typename EnvironmentType,
         typename LatentMovementType, 
         typename LatentEnvironmentContainer>

class CoupledRandomWalk {
  
private:
  
  double stepsize_sq;
  std::size_t m;
  
  LatentMovementType & latent_mvmt;
  LatentEnvironmentContainer & latent_envs;
  
public:
  
  /**
   * @param base_mvmt Movement rule for updating latent animals
   * @param base_environments Environments for updating latent animals
   */
  CoupledRandomWalk(
    LatentMovementType & base_mvmt,
    LatentEnvironmentContainer & base_environments,
    std::size_t n_proposals,
    double r
  ) : stepsize_sq(r*r), m(n_proposals), latent_mvmt(base_mvmt),
  latent_envs(base_environments) { }
  
  void update(AnimalType & animal, EnvironmentType & environment) {
    
    // Update latent animals
    auto latent_env = latent_envs.begin();
    auto latent_animal = animal.latent.begin();
    auto latent_end = animal.latent.end();
    while(latent_animal != latent_end) {
      latent_mvmt.update(*(latent_animal++), *(latent_env++));
    }
    
    // Environment defines latent animal toward which movement is attracted
    auto active_latent = animal.latent[environment.id];
    
    // std::cout << animal.cohortID << ", ";
    // std::cout << environment.id << ", ";
    
    // If close enough, animal is coupled to the active latent animal
    double dist_to_latent = std::pow(animal.x - active_latent.x, 2) +
      std::pow(animal.y - active_latent.y, 2);
    
    if(dist_to_latent < stepsize_sq) {
      animal.x = active_latent.x;
      animal.y = active_latent.y;
      return;
    }
    
    // Otherwise, select point within stepsize closest to latent animal, unless
    // the simulated whale is a pregnant female migrating to the calving grounds
    // Calving season is between Nov and March (Krzystan et al. 2018)
    double d, a, x0, y0, xn, yn, xnew, ynew;
    double dmin = std::numeric_limits<double>::infinity();
    bool sampling = true;
    
    while(sampling) {
      
      d = std::sqrt(R::runif(0,stepsize_sq));
      a = R::runif(-M_PI,M_PI);
      
      // if(d < 25) animal.behavior = 1;
      // std::cout << animal.behavior << " ";
      
      // Disc center
      x0 = animal.x + d * std::cos(a);
      y0 = animal.y + d * std::sin(a);
      
      // Sample m points in the circle, keep closest valid point
      for(std::size_t i=0; i<m; ++i) {
        
        d = std::sqrt(R::runif(0,stepsize_sq));
        a = R::runif(-M_PI,M_PI);
        
        xn = x0 + d * std::cos(a);
        yn = y0 + d * std::sin(a);
        
        // Only consider proposals with non-zero mass
        if(latent_envs[environment.id](xn, yn, 'D') > 0) {
          
          // if(animal.cohortID == 5 && (environment.id <= 3 || environment.id >= 11) && yn <= -12){
          //   
          //   // std::cout << "in SEUS" << std::endl;
          //   xnew = xn;
          //   ynew = yn;
          //   
          // } else {
            
            dist_to_latent = std::pow(xn - active_latent.x, 2) +
              std::pow(yn - active_latent.y, 2);
            
            // Keep track of the point that gets closest to latent
            if(dist_to_latent < dmin) {
              xnew = xn;
              ynew = yn;
              dmin = dist_to_latent;
            }
          // }
          
        }
      }
      
      Rcpp::checkUserInterrupt();
      sampling = !std::isfinite(dmin);
    }
    animal.x = xnew;
    animal.y = ynew;
    
  }
  
};

#endif
