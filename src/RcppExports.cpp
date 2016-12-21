// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_fit_fun
double rcpp_fit_fun(Rcpp::NumericMatrix ImpCov, Rcpp::NumericMatrix SampCov, int type2, double lambda, arma::vec pen_vec, arma::vec pen_diff);
RcppExport SEXP regsem_rcpp_fit_fun(SEXP ImpCovSEXP, SEXP SampCovSEXP, SEXP type2SEXP, SEXP lambdaSEXP, SEXP pen_vecSEXP, SEXP pen_diffSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type ImpCov(ImpCovSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type SampCov(SampCovSEXP);
    Rcpp::traits::input_parameter< int >::type type2(type2SEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pen_vec(pen_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pen_diff(pen_diffSEXP);
    __result = Rcpp::wrap(rcpp_fit_fun(ImpCov, SampCov, type2, lambda, pen_vec, pen_diff));
    return __result;
END_RCPP
}
// rcpp_grad_ram
arma::vec rcpp_grad_ram(arma::vec par, arma::mat ImpCov, arma::mat SampCov, arma::mat Areg, arma::mat Sreg, arma::mat A, arma::mat S, arma::mat F, double lambda, int type2, arma::vec pen_vec, arma::vec diff_par);
RcppExport SEXP regsem_rcpp_grad_ram(SEXP parSEXP, SEXP ImpCovSEXP, SEXP SampCovSEXP, SEXP AregSEXP, SEXP SregSEXP, SEXP ASEXP, SEXP SSEXP, SEXP FSEXP, SEXP lambdaSEXP, SEXP type2SEXP, SEXP pen_vecSEXP, SEXP diff_parSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::vec >::type par(parSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ImpCov(ImpCovSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type SampCov(SampCovSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Areg(AregSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sreg(SregSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type F(FSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type type2(type2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pen_vec(pen_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type diff_par(diff_parSEXP);
    __result = Rcpp::wrap(rcpp_grad_ram(par, ImpCov, SampCov, Areg, Sreg, A, S, F, lambda, type2, pen_vec, diff_par));
    return __result;
END_RCPP
}
// rcpp_RAMmult
List rcpp_RAMmult(NumericVector par, NumericMatrix A, NumericMatrix S, LogicalMatrix S_fixed, LogicalMatrix A_fixed, NumericMatrix A_est, NumericMatrix S_est, IntegerMatrix F, IntegerMatrix I);
RcppExport SEXP regsem_rcpp_RAMmult(SEXP parSEXP, SEXP ASEXP, SEXP SSEXP, SEXP S_fixedSEXP, SEXP A_fixedSEXP, SEXP A_estSEXP, SEXP S_estSEXP, SEXP FSEXP, SEXP ISEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type par(parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type S(SSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type S_fixed(S_fixedSEXP);
    Rcpp::traits::input_parameter< LogicalMatrix >::type A_fixed(A_fixedSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type A_est(A_estSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type S_est(S_estSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type F(FSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type I(ISEXP);
    __result = Rcpp::wrap(rcpp_RAMmult(par, A, S, S_fixed, A_fixed, A_est, S_est, F, I));
    return __result;
END_RCPP
}
