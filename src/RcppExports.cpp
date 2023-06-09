// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// OptimalAdaptiveIFRPGCVCpp
Rcpp::List OptimalAdaptiveIFRPGCVCpp(const arma::mat& returns, const arma::mat& factors, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns, const arma::vec& penalty_parameters, const char weighting_type, const bool gcv_vr_weighting, const bool gcv_aic_scaling, const bool one_stddev_rule, const bool relaxed);
RcppExport SEXP _intrinsicFRP_OptimalAdaptiveIFRPGCVCpp(SEXP returnsSEXP, SEXP factorsSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP, SEXP penalty_parametersSEXP, SEXP weighting_typeSEXP, SEXP gcv_vr_weightingSEXP, SEXP gcv_aic_scalingSEXP, SEXP one_stddev_ruleSEXP, SEXP relaxedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type penalty_parameters(penalty_parametersSEXP);
    Rcpp::traits::input_parameter< const char >::type weighting_type(weighting_typeSEXP);
    Rcpp::traits::input_parameter< const bool >::type gcv_vr_weighting(gcv_vr_weightingSEXP);
    Rcpp::traits::input_parameter< const bool >::type gcv_aic_scaling(gcv_aic_scalingSEXP);
    Rcpp::traits::input_parameter< const bool >::type one_stddev_rule(one_stddev_ruleSEXP);
    Rcpp::traits::input_parameter< const bool >::type relaxed(relaxedSEXP);
    rcpp_result_gen = Rcpp::wrap(OptimalAdaptiveIFRPGCVCpp(returns, factors, covariance_factors_returns, variance_returns, mean_returns, penalty_parameters, weighting_type, gcv_vr_weighting, gcv_aic_scaling, one_stddev_rule, relaxed));
    return rcpp_result_gen;
END_RCPP
}
// OptimalAdaptiveIFRPCVCpp
Rcpp::List OptimalAdaptiveIFRPCVCpp(const arma::mat& returns, const arma::mat& factors, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns, const arma::vec& penalty_parameters, const char weighting_type, const unsigned int n_folds, const bool one_stddev_rule, const bool relaxed);
RcppExport SEXP _intrinsicFRP_OptimalAdaptiveIFRPCVCpp(SEXP returnsSEXP, SEXP factorsSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP, SEXP penalty_parametersSEXP, SEXP weighting_typeSEXP, SEXP n_foldsSEXP, SEXP one_stddev_ruleSEXP, SEXP relaxedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type penalty_parameters(penalty_parametersSEXP);
    Rcpp::traits::input_parameter< const char >::type weighting_type(weighting_typeSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_folds(n_foldsSEXP);
    Rcpp::traits::input_parameter< const bool >::type one_stddev_rule(one_stddev_ruleSEXP);
    Rcpp::traits::input_parameter< const bool >::type relaxed(relaxedSEXP);
    rcpp_result_gen = Rcpp::wrap(OptimalAdaptiveIFRPCVCpp(returns, factors, covariance_factors_returns, variance_returns, mean_returns, penalty_parameters, weighting_type, n_folds, one_stddev_rule, relaxed));
    return rcpp_result_gen;
END_RCPP
}
// OptimalAdaptiveIFRPRVCpp
Rcpp::List OptimalAdaptiveIFRPRVCpp(const arma::mat& returns, const arma::mat& factors, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns, const arma::vec& penalty_parameters, const char weighting_type, const unsigned int n_train_observations, const unsigned int n_test_observations, const unsigned int roll_shift, const bool one_stddev_rule, const bool relaxed);
RcppExport SEXP _intrinsicFRP_OptimalAdaptiveIFRPRVCpp(SEXP returnsSEXP, SEXP factorsSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP, SEXP penalty_parametersSEXP, SEXP weighting_typeSEXP, SEXP n_train_observationsSEXP, SEXP n_test_observationsSEXP, SEXP roll_shiftSEXP, SEXP one_stddev_ruleSEXP, SEXP relaxedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type penalty_parameters(penalty_parametersSEXP);
    Rcpp::traits::input_parameter< const char >::type weighting_type(weighting_typeSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_train_observations(n_train_observationsSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type n_test_observations(n_test_observationsSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type roll_shift(roll_shiftSEXP);
    Rcpp::traits::input_parameter< const bool >::type one_stddev_rule(one_stddev_ruleSEXP);
    Rcpp::traits::input_parameter< const bool >::type relaxed(relaxedSEXP);
    rcpp_result_gen = Rcpp::wrap(OptimalAdaptiveIFRPRVCpp(returns, factors, covariance_factors_returns, variance_returns, mean_returns, penalty_parameters, weighting_type, n_train_observations, n_test_observations, roll_shift, one_stddev_rule, relaxed));
    return rcpp_result_gen;
END_RCPP
}
// AdaptiveIFRPCpp
arma::mat AdaptiveIFRPCpp(const arma::vec& ifrp, const arma::vec& weights, const arma::vec& penalty_parameter);
RcppExport SEXP _intrinsicFRP_AdaptiveIFRPCpp(SEXP ifrpSEXP, SEXP weightsSEXP, SEXP penalty_parameterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type ifrp(ifrpSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type penalty_parameter(penalty_parameterSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptiveIFRPCpp(ifrp, weights, penalty_parameter));
    return rcpp_result_gen;
END_RCPP
}
// RelaxedAdaptiveIFRPCpp
arma::vec RelaxedAdaptiveIFRPCpp(const arma::vec& aifrp, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns);
RcppExport SEXP _intrinsicFRP_RelaxedAdaptiveIFRPCpp(SEXP aifrpSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type aifrp(aifrpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    rcpp_result_gen = Rcpp::wrap(RelaxedAdaptiveIFRPCpp(aifrp, covariance_factors_returns, variance_returns, mean_returns));
    return rcpp_result_gen;
END_RCPP
}
// StandardErrorsAdaptiveIFRPCpp
arma::vec StandardErrorsAdaptiveIFRPCpp(const arma::vec& aifrp, const arma::mat& returns, const arma::mat& factors, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns, const arma::vec& mean_factors);
RcppExport SEXP _intrinsicFRP_StandardErrorsAdaptiveIFRPCpp(SEXP aifrpSEXP, SEXP returnsSEXP, SEXP factorsSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP, SEXP mean_factorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type aifrp(aifrpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_factors(mean_factorsSEXP);
    rcpp_result_gen = Rcpp::wrap(StandardErrorsAdaptiveIFRPCpp(aifrp, returns, factors, covariance_factors_returns, variance_returns, mean_returns, mean_factors));
    return rcpp_result_gen;
END_RCPP
}
// AdaptiveWeightsCpp
arma::vec AdaptiveWeightsCpp(const arma::mat& returns, const arma::mat& factors, const char type);
RcppExport SEXP _intrinsicFRP_AdaptiveWeightsCpp(SEXP returnsSEXP, SEXP factorsSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const char >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptiveWeightsCpp(returns, factors, type));
    return rcpp_result_gen;
END_RCPP
}
// FRPCpp
arma::vec FRPCpp(const arma::mat& beta, const arma::vec& mean_returns);
RcppExport SEXP _intrinsicFRP_FRPCpp(SEXP betaSEXP, SEXP mean_returnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    rcpp_result_gen = Rcpp::wrap(FRPCpp(beta, mean_returns));
    return rcpp_result_gen;
END_RCPP
}
// KRSFRPCpp
arma::vec KRSFRPCpp(const arma::mat& beta, const arma::vec& mean_returns, const arma::mat& weighting_matrix);
RcppExport SEXP _intrinsicFRP_KRSFRPCpp(SEXP betaSEXP, SEXP mean_returnsSEXP, SEXP weighting_matrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type weighting_matrix(weighting_matrixSEXP);
    rcpp_result_gen = Rcpp::wrap(KRSFRPCpp(beta, mean_returns, weighting_matrix));
    return rcpp_result_gen;
END_RCPP
}
// StandardErrorsFRPCpp
arma::vec StandardErrorsFRPCpp(const arma::vec& frp, const arma::mat& returns, const arma::mat& factors, const arma::mat& beta, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::mat& variance_factors, const arma::vec& mean_returns, const arma::vec& mean_factors);
RcppExport SEXP _intrinsicFRP_StandardErrorsFRPCpp(SEXP frpSEXP, SEXP returnsSEXP, SEXP factorsSEXP, SEXP betaSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP variance_factorsSEXP, SEXP mean_returnsSEXP, SEXP mean_factorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type frp(frpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_factors(variance_factorsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_factors(mean_factorsSEXP);
    rcpp_result_gen = Rcpp::wrap(StandardErrorsFRPCpp(frp, returns, factors, beta, covariance_factors_returns, variance_returns, variance_factors, mean_returns, mean_factors));
    return rcpp_result_gen;
END_RCPP
}
// StandardErrorsKRSFRPCpp
arma::vec StandardErrorsKRSFRPCpp(const arma::vec& krs_frp, const arma::mat& returns, const arma::mat& factors, const arma::mat& beta, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::mat& variance_factors, const arma::vec& mean_returns, const arma::vec& mean_factors);
RcppExport SEXP _intrinsicFRP_StandardErrorsKRSFRPCpp(SEXP krs_frpSEXP, SEXP returnsSEXP, SEXP factorsSEXP, SEXP betaSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP variance_factorsSEXP, SEXP mean_returnsSEXP, SEXP mean_factorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type krs_frp(krs_frpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_factors(variance_factorsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_factors(mean_factorsSEXP);
    rcpp_result_gen = Rcpp::wrap(StandardErrorsKRSFRPCpp(krs_frp, returns, factors, beta, covariance_factors_returns, variance_returns, variance_factors, mean_returns, mean_factors));
    return rcpp_result_gen;
END_RCPP
}
// IFRPCpp
arma::vec IFRPCpp(const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns);
RcppExport SEXP _intrinsicFRP_IFRPCpp(SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    rcpp_result_gen = Rcpp::wrap(IFRPCpp(covariance_factors_returns, variance_returns, mean_returns));
    return rcpp_result_gen;
END_RCPP
}
// StandardErrorsIFRPCpp
arma::vec StandardErrorsIFRPCpp(const arma::vec& ifrp, const arma::mat& returns, const arma::mat& factors, const arma::mat& covariance_factors_returns, const arma::mat& variance_returns, const arma::vec& mean_returns, const arma::vec& mean_factors);
RcppExport SEXP _intrinsicFRP_StandardErrorsIFRPCpp(SEXP ifrpSEXP, SEXP returnsSEXP, SEXP factorsSEXP, SEXP covariance_factors_returnsSEXP, SEXP variance_returnsSEXP, SEXP mean_returnsSEXP, SEXP mean_factorsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type ifrp(ifrpSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type returns(returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type factors(factorsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covariance_factors_returns(covariance_factors_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type variance_returns(variance_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_returns(mean_returnsSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mean_factors(mean_factorsSEXP);
    rcpp_result_gen = Rcpp::wrap(StandardErrorsIFRPCpp(ifrp, returns, factors, covariance_factors_returns, variance_returns, mean_returns, mean_factors));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_intrinsicFRP_OptimalAdaptiveIFRPGCVCpp", (DL_FUNC) &_intrinsicFRP_OptimalAdaptiveIFRPGCVCpp, 11},
    {"_intrinsicFRP_OptimalAdaptiveIFRPCVCpp", (DL_FUNC) &_intrinsicFRP_OptimalAdaptiveIFRPCVCpp, 10},
    {"_intrinsicFRP_OptimalAdaptiveIFRPRVCpp", (DL_FUNC) &_intrinsicFRP_OptimalAdaptiveIFRPRVCpp, 12},
    {"_intrinsicFRP_AdaptiveIFRPCpp", (DL_FUNC) &_intrinsicFRP_AdaptiveIFRPCpp, 3},
    {"_intrinsicFRP_RelaxedAdaptiveIFRPCpp", (DL_FUNC) &_intrinsicFRP_RelaxedAdaptiveIFRPCpp, 4},
    {"_intrinsicFRP_StandardErrorsAdaptiveIFRPCpp", (DL_FUNC) &_intrinsicFRP_StandardErrorsAdaptiveIFRPCpp, 7},
    {"_intrinsicFRP_AdaptiveWeightsCpp", (DL_FUNC) &_intrinsicFRP_AdaptiveWeightsCpp, 3},
    {"_intrinsicFRP_FRPCpp", (DL_FUNC) &_intrinsicFRP_FRPCpp, 2},
    {"_intrinsicFRP_KRSFRPCpp", (DL_FUNC) &_intrinsicFRP_KRSFRPCpp, 3},
    {"_intrinsicFRP_StandardErrorsFRPCpp", (DL_FUNC) &_intrinsicFRP_StandardErrorsFRPCpp, 9},
    {"_intrinsicFRP_StandardErrorsKRSFRPCpp", (DL_FUNC) &_intrinsicFRP_StandardErrorsKRSFRPCpp, 9},
    {"_intrinsicFRP_IFRPCpp", (DL_FUNC) &_intrinsicFRP_IFRPCpp, 3},
    {"_intrinsicFRP_StandardErrorsIFRPCpp", (DL_FUNC) &_intrinsicFRP_StandardErrorsIFRPCpp, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_intrinsicFRP(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
