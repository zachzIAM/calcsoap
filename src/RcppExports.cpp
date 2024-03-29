// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// add
double add(double a, double b);
RcppExport SEXP _calcsoapR_add(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(add(a, b));
    return rcpp_result_gen;
END_RCPP
}
// sub
double sub(double a, double b);
RcppExport SEXP _calcsoapR_sub(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(sub(a, b));
    return rcpp_result_gen;
END_RCPP
}
// mul
double mul(double a, double b);
RcppExport SEXP _calcsoapR_mul(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(mul(a, b));
    return rcpp_result_gen;
END_RCPP
}
// div
double div(double a, double b);
RcppExport SEXP _calcsoapR_div(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(div(a, b));
    return rcpp_result_gen;
END_RCPP
}
// pow
double pow(double a, double b);
RcppExport SEXP _calcsoapR_pow(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(pow(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_calcsoapR_add", (DL_FUNC) &_calcsoapR_add, 2},
    {"_calcsoapR_sub", (DL_FUNC) &_calcsoapR_sub, 2},
    {"_calcsoapR_mul", (DL_FUNC) &_calcsoapR_mul, 2},
    {"_calcsoapR_div", (DL_FUNC) &_calcsoapR_div, 2},
    {"_calcsoapR_pow", (DL_FUNC) &_calcsoapR_pow, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_calcsoapR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
