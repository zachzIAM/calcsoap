#include "soapcalcProxy.h"
#include "calc.nsmap"
#include <Rcpp.h>
using namespace Rcpp;

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
