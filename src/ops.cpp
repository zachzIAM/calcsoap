#include "soapcalcProxy.h"
#include "calc.nsmap"
#include <Rcpp.h>
using namespace Rcpp;

//' Addition
//' @description Add two numbers
//' @param a numeric;
//' @param b numeric;
//' @return numeric; sum of a and b
//' @export
// [[Rcpp::export]]
double add(double a, double b) {
  calcProxy service;
  double result;
  if (service.add(a, b, result) != SOAP_OK)
    service.soap_stream_fault(std::cerr);
  service.destroy();
  return result;
}

//' Subtraction
//' @description Subtact two numbers
//' @param a numeric;
//' @param b numeric;
//' @return numeric; difference of a and b
//' @export
// [[Rcpp::export]]
double sub(double a, double b) {
  calcProxy service;
  double result;
  if (service.sub(a, b, result) != SOAP_OK)
    service.soap_stream_fault(std::cerr);
  service.destroy();
  return result;
}

//' Multiplication
//' @description Multiply two numbers
//' @param a numeric;
//' @param b numeric;
//' @return numeric; product of a and b
//' @export
// [[Rcpp::export]]
double mul(double a, double b) {
  calcProxy service;
  double result;
  if (service.mul(a, b, result) != SOAP_OK)
    service.soap_stream_fault(std::cerr);
  service.destroy();
  return result;
}

//' Division
//' @description Divide two numbers
//' @param a numeric;
//' @param b numeric;
//' @return numeric; division of a and b
//' @export
// [[Rcpp::export]]
double div(double a, double b) {
  calcProxy service;
  double result;
  if (service.div(a, b, result) != SOAP_OK)
    service.soap_stream_fault(std::cerr);
  service.destroy();
  return result;
}

//' Exponentiation
//' @description Exponentiate two numbers
//' @param a numeric;
//' @param b numeric;
//' @return numeric; a to the b power
//' @export
// [[Rcpp::export]]
double pow(double a, double b) {
  calcProxy service;
  double result;
  if (service.pow(a, b, result) != SOAP_OK)
    service.soap_stream_fault(std::cerr);
  service.destroy();
  return result;
}
