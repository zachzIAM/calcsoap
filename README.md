
<!-- README.md is generated from README.Rmd. Please edit that file -->

# calcsoap

<!-- badges: start -->

<!-- badges: end -->

The goal of calcsoap is to demonstrate exposing a SOAP client using
`gsoap` to generate C++ code and embed it in an R package via `Rcpp`.

The structure of the package and especially the `Makevars` files (one
for each Windows and Linux) are intented to be used as blueprints for
future development (i.e. BDTI).

## Installation

You can install the dev version of calcsoap from
[Github](https://github.com/zachzIAM/calcsoap) with:

``` r
remotes::github_install("zachzIAM/calcsoap")
```

## Example

This is a basic example which shows you how to solve a common problem:

``` r
calcsoap::add(5.5, 6.6)
#> [1] 12.1
calcsoap::sub(5.5, 6.6)
#> [1] -1.1
calcsoap::mul(5.5, 6.6)
#> [1] 36.3
calcsoap::div(5.5, 6.6)
#> [1] 0.8333333
calcsoap::pow(5.5, 6.6)
#> [1] 76982.81
```
