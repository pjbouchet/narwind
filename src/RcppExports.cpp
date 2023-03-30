// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// random_multivariate_normal
Rcpp::NumericVector random_multivariate_normal(const Eigen::MatrixXd mu, const Eigen::MatrixXd Sigma);
RcppExport SEXP _narwind_random_multivariate_normal(SEXP muSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(random_multivariate_normal(mu, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// response_threshold
double response_threshold(Rcpp::NumericVector db);
RcppExport SEXP _narwind_response_threshold(SEXP dbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type db(dbSEXP);
    rcpp_result_gen = Rcpp::wrap(response_threshold(db));
    return rcpp_result_gen;
END_RCPP
}
// rtnorm
double rtnorm(double location, double scale, double L, double U);
RcppExport SEXP _narwind_rtnorm(SEXP locationSEXP, SEXP scaleSEXP, SEXP LSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type location(locationSEXP);
    Rcpp::traits::input_parameter< double >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(rtnorm(location, scale, L, U));
    return rcpp_result_gen;
END_RCPP
}
// start_age
double start_age(int cohort);
RcppExport SEXP _narwind_start_age(SEXP cohortSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cohort(cohortSEXP);
    rcpp_result_gen = Rcpp::wrap(start_age(cohort));
    return rcpp_result_gen;
END_RCPP
}
// multinomial
int multinomial(Rcpp::NumericVector probs);
RcppExport SEXP _narwind_multinomial(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(multinomial(probs));
    return rcpp_result_gen;
END_RCPP
}
// entanglement_event
Rcpp::NumericVector entanglement_event(double p_entangled, double p_anterior, Rcpp::NumericVector p_severity);
RcppExport SEXP _narwind_entanglement_event(SEXP p_entangledSEXP, SEXP p_anteriorSEXP, SEXP p_severitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type p_entangled(p_entangledSEXP);
    Rcpp::traits::input_parameter< double >::type p_anterior(p_anteriorSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p_severity(p_severitySEXP);
    rcpp_result_gen = Rcpp::wrap(entanglement_event(p_entangled, p_anterior, p_severity));
    return rcpp_result_gen;
END_RCPP
}
// start_mouth
double start_mouth(int cohort, double age);
RcppExport SEXP _narwind_start_mouth(SEXP cohortSEXP, SEXP ageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cohort(cohortSEXP);
    Rcpp::traits::input_parameter< double >::type age(ageSEXP);
    rcpp_result_gen = Rcpp::wrap(start_mouth(cohort, age));
    return rcpp_result_gen;
END_RCPP
}
// start_bcondition
long double start_bcondition(double cohort, int month);
RcppExport SEXP _narwind_start_bcondition(SEXP cohortSEXP, SEXP monthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type cohort(cohortSEXP);
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    rcpp_result_gen = Rcpp::wrap(start_bcondition(cohort, month));
    return rcpp_result_gen;
END_RCPP
}
// start_bodycondition
Rcpp::NumericVector start_bodycondition(Rcpp::NumericVector cohort, int month);
RcppExport SEXP _narwind_start_bodycondition(SEXP cohortSEXP, SEXP monthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type cohort(cohortSEXP);
    Rcpp::traits::input_parameter< int >::type month(monthSEXP);
    rcpp_result_gen = Rcpp::wrap(start_bodycondition(cohort, month));
    return rcpp_result_gen;
END_RCPP
}
// age2length
double age2length(double age, Eigen::MatrixXd gompertz);
RcppExport SEXP _narwind_age2length(SEXP ageSEXP, SEXP gompertzSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type age(ageSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type gompertz(gompertzSEXP);
    rcpp_result_gen = Rcpp::wrap(age2length(age, gompertz));
    return rcpp_result_gen;
END_RCPP
}
// create_mat
Eigen::MatrixXd create_mat();
RcppExport SEXP _narwind_create_mat() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(create_mat());
    return rcpp_result_gen;
END_RCPP
}
// length2mass
double length2mass(double L, Eigen::MatrixXd param, bool lean);
RcppExport SEXP _narwind_length2mass(SEXP LSEXP, SEXP paramSEXP, SEXP leanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type param(paramSEXP);
    Rcpp::traits::input_parameter< bool >::type lean(leanSEXP);
    rcpp_result_gen = Rcpp::wrap(length2mass(L, param, lean));
    return rcpp_result_gen;
END_RCPP
}
// agL
Eigen::MatrixXd agL(double age, int n);
RcppExport SEXP _narwind_agL(SEXP ageSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type age(ageSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(agL(age, n));
    return rcpp_result_gen;
END_RCPP
}
// mL
Eigen::MatrixXd mL(int n);
RcppExport SEXP _narwind_mL(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(mL(n));
    return rcpp_result_gen;
END_RCPP
}
// feeding_threshold
double feeding_threshold(double min_prey, double D);
RcppExport SEXP _narwind_feeding_threshold(SEXP min_preySEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type min_prey(min_preySEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(feeding_threshold(min_prey, D));
    return rcpp_result_gen;
END_RCPP
}
// scale_effort
double scale_effort(double x, double A, double D, double B, double C, double S);
RcppExport SEXP _narwind_scale_effort(SEXP xSEXP, SEXP ASEXP, SEXP DSEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    Rcpp::traits::input_parameter< double >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(scale_effort(x, A, D, B, C, S));
    return rcpp_result_gen;
END_RCPP
}
// deg2radians
double deg2radians(double angle);
RcppExport SEXP _narwind_deg2radians(SEXP angleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    rcpp_result_gen = Rcpp::wrap(deg2radians(angle));
    return rcpp_result_gen;
END_RCPP
}
// gape_size
double gape_size(double L, double omega, double alpha);
RcppExport SEXP _narwind_gape_size(SEXP LSEXP, SEXP omegaSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(gape_size(L, omega, alpha));
    return rcpp_result_gen;
END_RCPP
}
// Econtent_cop
double Econtent_cop(double m, double rho, double E_digest, double E_hif);
RcppExport SEXP _narwind_Econtent_cop(SEXP mSEXP, SEXP rhoSEXP, SEXP E_digestSEXP, SEXP E_hifSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type E_digest(E_digestSEXP);
    Rcpp::traits::input_parameter< double >::type E_hif(E_hifSEXP);
    rcpp_result_gen = Rcpp::wrap(Econtent_cop(m, rho, E_digest, E_hif));
    return rcpp_result_gen;
END_RCPP
}
// filtration_rate
double filtration_rate(double A, double lambda_gape, double V, double E_capt, double lambda_capt);
RcppExport SEXP _narwind_filtration_rate(SEXP ASEXP, SEXP lambda_gapeSEXP, SEXP VSEXP, SEXP E_captSEXP, SEXP lambda_captSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type lambda_gape(lambda_gapeSEXP);
    Rcpp::traits::input_parameter< double >::type V(VSEXP);
    Rcpp::traits::input_parameter< double >::type E_capt(E_captSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_capt(lambda_captSEXP);
    rcpp_result_gen = Rcpp::wrap(filtration_rate(A, lambda_gape, V, E_capt, lambda_capt));
    return rcpp_result_gen;
END_RCPP
}
// milk_ingestion
double milk_ingestion(double E_milk, double M, double E_gland, double mu_female, double delta_female, double D);
RcppExport SEXP _narwind_milk_ingestion(SEXP E_milkSEXP, SEXP MSEXP, SEXP E_glandSEXP, SEXP mu_femaleSEXP, SEXP delta_femaleSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type E_milk(E_milkSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type E_gland(E_glandSEXP);
    Rcpp::traits::input_parameter< double >::type mu_female(mu_femaleSEXP);
    Rcpp::traits::input_parameter< double >::type delta_female(delta_femaleSEXP);
    Rcpp::traits::input_parameter< double >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(milk_ingestion(E_milk, M, E_gland, mu_female, delta_female, D));
    return rcpp_result_gen;
END_RCPP
}
// milk_assimilation
double milk_assimilation(double t, int T_lac, double a, double zeta);
RcppExport SEXP _narwind_milk_assimilation(SEXP tSEXP, SEXP T_lacSEXP, SEXP aSEXP, SEXP zetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    Rcpp::traits::input_parameter< int >::type T_lac(T_lacSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    rcpp_result_gen = Rcpp::wrap(milk_assimilation(t, T_lac, a, zeta));
    return rcpp_result_gen;
END_RCPP
}
// milk_supply
double milk_supply(double kappa, double target_condition, double M, double R, double zeta);
RcppExport SEXP _narwind_milk_supply(SEXP kappaSEXP, SEXP target_conditionSEXP, SEXP MSEXP, SEXP RSEXP, SEXP zetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type kappa(kappaSEXP);
    Rcpp::traits::input_parameter< double >::type target_condition(target_conditionSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type zeta(zetaSEXP);
    rcpp_result_gen = Rcpp::wrap(milk_supply(kappa, target_condition, M, R, zeta));
    return rcpp_result_gen;
END_RCPP
}
// mammary_mass
double mammary_mass(double M);
RcppExport SEXP _narwind_mammary_mass(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(mammary_mass(M));
    return rcpp_result_gen;
END_RCPP
}
// milk_production
double milk_production(double m);
RcppExport SEXP _narwind_milk_production(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(milk_production(m));
    return rcpp_result_gen;
END_RCPP
}
// RMR
double RMR(int function_ID, double M, double phi);
RcppExport SEXP _narwind_RMR(SEXP function_IDSEXP, SEXP MSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type function_ID(function_IDSEXP);
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(RMR(function_ID, M, phi));
    return rcpp_result_gen;
END_RCPP
}
// locomotor_costs
double locomotor_costs(double M, double Sroutine, Rcpp::NumericVector delta, Rcpp::NumericVector phi);
RcppExport SEXP _narwind_locomotor_costs(SEXP MSEXP, SEXP SroutineSEXP, SEXP deltaSEXP, SEXP phiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type Sroutine(SroutineSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type phi(phiSEXP);
    rcpp_result_gen = Rcpp::wrap(locomotor_costs(M, Sroutine, delta, phi));
    return rcpp_result_gen;
END_RCPP
}
// placental_maintenance
double placental_maintenance(double G);
RcppExport SEXP _narwind_placental_maintenance(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(placental_maintenance(G));
    return rcpp_result_gen;
END_RCPP
}
// heat_gestation
double heat_gestation(double birth_mass, double delta_m);
RcppExport SEXP _narwind_heat_gestation(SEXP birth_massSEXP, SEXP delta_mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type birth_mass(birth_massSEXP);
    Rcpp::traits::input_parameter< double >::type delta_m(delta_mSEXP);
    rcpp_result_gen = Rcpp::wrap(heat_gestation(birth_mass, delta_m));
    return rcpp_result_gen;
END_RCPP
}
// fetal_tissue_mass
double fetal_tissue_mass(double P_b, double L);
RcppExport SEXP _narwind_fetal_tissue_mass(SEXP P_bSEXP, SEXP LSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type P_b(P_bSEXP);
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    rcpp_result_gen = Rcpp::wrap(fetal_tissue_mass(P_b, L));
    return rcpp_result_gen;
END_RCPP
}
// fetal_blubber_mass
double fetal_blubber_mass(double L, double M_muscle, double M_viscera, double M_bones, double D_blubber, double D_muscle, double D_viscera, double D_bones);
RcppExport SEXP _narwind_fetal_blubber_mass(SEXP LSEXP, SEXP M_muscleSEXP, SEXP M_visceraSEXP, SEXP M_bonesSEXP, SEXP D_blubberSEXP, SEXP D_muscleSEXP, SEXP D_visceraSEXP, SEXP D_bonesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type L(LSEXP);
    Rcpp::traits::input_parameter< double >::type M_muscle(M_muscleSEXP);
    Rcpp::traits::input_parameter< double >::type M_viscera(M_visceraSEXP);
    Rcpp::traits::input_parameter< double >::type M_bones(M_bonesSEXP);
    Rcpp::traits::input_parameter< double >::type D_blubber(D_blubberSEXP);
    Rcpp::traits::input_parameter< double >::type D_muscle(D_muscleSEXP);
    Rcpp::traits::input_parameter< double >::type D_viscera(D_visceraSEXP);
    Rcpp::traits::input_parameter< double >::type D_bones(D_bonesSEXP);
    rcpp_result_gen = Rcpp::wrap(fetal_blubber_mass(L, M_muscle, M_viscera, M_bones, D_blubber, D_muscle, D_viscera, D_bones));
    return rcpp_result_gen;
END_RCPP
}
// fetal_mass
double fetal_mass(int days_to_birth, double mother_length, int bbc, double body_density);
RcppExport SEXP _narwind_fetal_mass(SEXP days_to_birthSEXP, SEXP mother_lengthSEXP, SEXP bbcSEXP, SEXP body_densitySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type days_to_birth(days_to_birthSEXP);
    Rcpp::traits::input_parameter< double >::type mother_length(mother_lengthSEXP);
    Rcpp::traits::input_parameter< int >::type bbc(bbcSEXP);
    Rcpp::traits::input_parameter< double >::type body_density(body_densitySEXP);
    rcpp_result_gen = Rcpp::wrap(fetal_mass(days_to_birth, mother_length, bbc, body_density));
    return rcpp_result_gen;
END_RCPP
}
// fetal_length
double fetal_length(int days_to_birth, double mother_length);
RcppExport SEXP _narwind_fetal_length(SEXP days_to_birthSEXP, SEXP mother_lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type days_to_birth(days_to_birthSEXP);
    Rcpp::traits::input_parameter< double >::type mother_length(mother_lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(fetal_length(days_to_birth, mother_length));
    return rcpp_result_gen;
END_RCPP
}
// growth_cost
double growth_cost(double delta_m, double prop_blubber, double prop_water, double P_lipid_blubber, double rho_lipid, double rho_protein, double D_lipid, double D_protein);
RcppExport SEXP _narwind_growth_cost(SEXP delta_mSEXP, SEXP prop_blubberSEXP, SEXP prop_waterSEXP, SEXP P_lipid_blubberSEXP, SEXP rho_lipidSEXP, SEXP rho_proteinSEXP, SEXP D_lipidSEXP, SEXP D_proteinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type delta_m(delta_mSEXP);
    Rcpp::traits::input_parameter< double >::type prop_blubber(prop_blubberSEXP);
    Rcpp::traits::input_parameter< double >::type prop_water(prop_waterSEXP);
    Rcpp::traits::input_parameter< double >::type P_lipid_blubber(P_lipid_blubberSEXP);
    Rcpp::traits::input_parameter< double >::type rho_lipid(rho_lipidSEXP);
    Rcpp::traits::input_parameter< double >::type rho_protein(rho_proteinSEXP);
    Rcpp::traits::input_parameter< double >::type D_lipid(D_lipidSEXP);
    Rcpp::traits::input_parameter< double >::type D_protein(D_proteinSEXP);
    rcpp_result_gen = Rcpp::wrap(growth_cost(delta_m, prop_blubber, prop_water, P_lipid_blubber, rho_lipid, rho_protein, D_lipid, D_protein));
    return rcpp_result_gen;
END_RCPP
}
// geoD
int geoD(Eigen::MatrixXd mat, double x0, double y0, double x1, double y1, Eigen::VectorXd limits, Eigen::VectorXd resolution);
RcppExport SEXP _narwind_geoD(SEXP matSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP x1SEXP, SEXP y1SEXP, SEXP limitsSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type limits(limitsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(geoD(mat, x0, y0, x1, y1, limits, resolution));
    return rcpp_result_gen;
END_RCPP
}
// geoDist
int geoDist(Eigen::MatrixXd mat, double x0, double y0, double x1, double y1, Eigen::VectorXd limits, Eigen::VectorXd resolution, int r);
RcppExport SEXP _narwind_geoDist(SEXP matSEXP, SEXP x0SEXP, SEXP y0SEXP, SEXP x1SEXP, SEXP y1SEXP, SEXP limitsSEXP, SEXP resolutionSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type mat(matSEXP);
    Rcpp::traits::input_parameter< double >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type limits(limitsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(geoDist(mat, x0, y0, x1, y1, limits, resolution, r));
    return rcpp_result_gen;
END_RCPP
}
// geo_hash
int geo_hash(int cell);
RcppExport SEXP _narwind_geo_hash(SEXP cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cell(cellSEXP);
    rcpp_result_gen = Rcpp::wrap(geo_hash(cell));
    return rcpp_result_gen;
END_RCPP
}
// NARW_simulator
Rcpp::List NARW_simulator(int cohortID, Eigen::MatrixXd support, std::vector<Eigen::MatrixXd> densities, std::vector<std::size_t> densitySeq, std::vector<std::size_t> latentDensitySeq, std::vector<Eigen::MatrixXd> prey, std::vector<Eigen::MatrixXd> fishing, std::vector<Eigen::MatrixXd> vessels, std::vector<Eigen::MatrixXd> noise, Rcpp::NumericVector doseresp, std::vector<Eigen::MatrixXd> daylight, Eigen::MatrixXd regions, Eigen::VectorXd limits, Eigen::VectorXd resolution, std::size_t M, double stepsize, Eigen::MatrixXd xinit, Eigen::MatrixXd yinit, bool stressors, bool growth, bool progress);
RcppExport SEXP _narwind_NARW_simulator(SEXP cohortIDSEXP, SEXP supportSEXP, SEXP densitiesSEXP, SEXP densitySeqSEXP, SEXP latentDensitySeqSEXP, SEXP preySEXP, SEXP fishingSEXP, SEXP vesselsSEXP, SEXP noiseSEXP, SEXP doserespSEXP, SEXP daylightSEXP, SEXP regionsSEXP, SEXP limitsSEXP, SEXP resolutionSEXP, SEXP MSEXP, SEXP stepsizeSEXP, SEXP xinitSEXP, SEXP yinitSEXP, SEXP stressorsSEXP, SEXP growthSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type cohortID(cohortIDSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type support(supportSEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type densities(densitiesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type densitySeq(densitySeqSEXP);
    Rcpp::traits::input_parameter< std::vector<std::size_t> >::type latentDensitySeq(latentDensitySeqSEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type prey(preySEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type fishing(fishingSEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type vessels(vesselsSEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type noise(noiseSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type doseresp(doserespSEXP);
    Rcpp::traits::input_parameter< std::vector<Eigen::MatrixXd> >::type daylight(daylightSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type limits(limitsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type M(MSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type xinit(xinitSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type yinit(yinitSEXP);
    Rcpp::traits::input_parameter< bool >::type stressors(stressorsSEXP);
    Rcpp::traits::input_parameter< bool >::type growth(growthSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(NARW_simulator(cohortID, support, densities, densitySeq, latentDensitySeq, prey, fishing, vessels, noise, doseresp, daylight, regions, limits, resolution, M, stepsize, xinit, yinit, stressors, growth, progress));
    return rcpp_result_gen;
END_RCPP
}
// evalEnvironment
double evalEnvironment(Eigen::MatrixXd density, Eigen::MatrixXd prey, Eigen::MatrixXd fishing, Eigen::MatrixXd vessels, Eigen::MatrixXd noise, Eigen::MatrixXd daylight, Eigen::MatrixXd regions, Eigen::VectorXd limits, Eigen::VectorXd resolution, double x, double y, char layer);
RcppExport SEXP _narwind_evalEnvironment(SEXP densitySEXP, SEXP preySEXP, SEXP fishingSEXP, SEXP vesselsSEXP, SEXP noiseSEXP, SEXP daylightSEXP, SEXP regionsSEXP, SEXP limitsSEXP, SEXP resolutionSEXP, SEXP xSEXP, SEXP ySEXP, SEXP layerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type density(densitySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type prey(preySEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type fishing(fishingSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type vessels(vesselsSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type noise(noiseSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type daylight(daylightSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type regions(regionsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type limits(limitsSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< char >::type layer(layerSEXP);
    rcpp_result_gen = Rcpp::wrap(evalEnvironment(density, prey, fishing, vessels, noise, daylight, regions, limits, resolution, x, y, layer));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_narwind_random_multivariate_normal", (DL_FUNC) &_narwind_random_multivariate_normal, 2},
    {"_narwind_response_threshold", (DL_FUNC) &_narwind_response_threshold, 1},
    {"_narwind_rtnorm", (DL_FUNC) &_narwind_rtnorm, 4},
    {"_narwind_start_age", (DL_FUNC) &_narwind_start_age, 1},
    {"_narwind_multinomial", (DL_FUNC) &_narwind_multinomial, 1},
    {"_narwind_entanglement_event", (DL_FUNC) &_narwind_entanglement_event, 3},
    {"_narwind_start_mouth", (DL_FUNC) &_narwind_start_mouth, 2},
    {"_narwind_start_bcondition", (DL_FUNC) &_narwind_start_bcondition, 2},
    {"_narwind_start_bodycondition", (DL_FUNC) &_narwind_start_bodycondition, 2},
    {"_narwind_age2length", (DL_FUNC) &_narwind_age2length, 2},
    {"_narwind_create_mat", (DL_FUNC) &_narwind_create_mat, 0},
    {"_narwind_length2mass", (DL_FUNC) &_narwind_length2mass, 3},
    {"_narwind_agL", (DL_FUNC) &_narwind_agL, 2},
    {"_narwind_mL", (DL_FUNC) &_narwind_mL, 1},
    {"_narwind_feeding_threshold", (DL_FUNC) &_narwind_feeding_threshold, 2},
    {"_narwind_scale_effort", (DL_FUNC) &_narwind_scale_effort, 6},
    {"_narwind_deg2radians", (DL_FUNC) &_narwind_deg2radians, 1},
    {"_narwind_gape_size", (DL_FUNC) &_narwind_gape_size, 3},
    {"_narwind_Econtent_cop", (DL_FUNC) &_narwind_Econtent_cop, 4},
    {"_narwind_filtration_rate", (DL_FUNC) &_narwind_filtration_rate, 5},
    {"_narwind_milk_ingestion", (DL_FUNC) &_narwind_milk_ingestion, 6},
    {"_narwind_milk_assimilation", (DL_FUNC) &_narwind_milk_assimilation, 4},
    {"_narwind_milk_supply", (DL_FUNC) &_narwind_milk_supply, 5},
    {"_narwind_mammary_mass", (DL_FUNC) &_narwind_mammary_mass, 1},
    {"_narwind_milk_production", (DL_FUNC) &_narwind_milk_production, 1},
    {"_narwind_RMR", (DL_FUNC) &_narwind_RMR, 3},
    {"_narwind_locomotor_costs", (DL_FUNC) &_narwind_locomotor_costs, 4},
    {"_narwind_placental_maintenance", (DL_FUNC) &_narwind_placental_maintenance, 1},
    {"_narwind_heat_gestation", (DL_FUNC) &_narwind_heat_gestation, 2},
    {"_narwind_fetal_tissue_mass", (DL_FUNC) &_narwind_fetal_tissue_mass, 2},
    {"_narwind_fetal_blubber_mass", (DL_FUNC) &_narwind_fetal_blubber_mass, 8},
    {"_narwind_fetal_mass", (DL_FUNC) &_narwind_fetal_mass, 4},
    {"_narwind_fetal_length", (DL_FUNC) &_narwind_fetal_length, 2},
    {"_narwind_growth_cost", (DL_FUNC) &_narwind_growth_cost, 8},
    {"_narwind_geoD", (DL_FUNC) &_narwind_geoD, 7},
    {"_narwind_geoDist", (DL_FUNC) &_narwind_geoDist, 8},
    {"_narwind_geo_hash", (DL_FUNC) &_narwind_geo_hash, 1},
    {"_narwind_NARW_simulator", (DL_FUNC) &_narwind_NARW_simulator, 21},
    {"_narwind_evalEnvironment", (DL_FUNC) &_narwind_evalEnvironment, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_narwind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
