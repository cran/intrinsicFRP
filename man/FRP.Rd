% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/frp.R
\name{FRP}
\alias{FRP}
\title{Factor risk premia.}
\usage{
FRP(
  returns,
  factors,
  misspecification_robust = TRUE,
  include_standard_errors = FALSE,
  hac_prewhite = FALSE,
  target_level_gkr2014_screening = 0,
  check_arguments = TRUE
)
}
\arguments{
\item{returns}{A \verb{n_observations x n_returns}-dimensional matrix of test asset
excess returns.}

\item{factors}{A \verb{n_observations x n_factors}-dimensional matrix of factors.}

\item{misspecification_robust}{A boolean: \code{TRUE} for the
"misspecification-robust" Kan-Robotti-Shanken (2013) GLS approach using the
inverse covariance matrix of returns; \code{FALSE} for standard Fama-MacBeth
risk premia. Default is \code{TRUE}.}

\item{include_standard_errors}{A boolean: \code{TRUE} if you want to compute the
factor risk premia HAC standard errors; \code{FALSE} otherwise.
Default is \code{FALSE}.}

\item{hac_prewhite}{A boolean indicating if the series needs pre-whitening by
fitting an AR(1) in the internal heteroskedasticity and autocorrelation
robust covariance (HAC) estimation. Default is \code{false}.}

\item{target_level_gkr2014_screening}{A number indicating the target level of
the tests underlying the factor screening procedure in Gospodinov-Kan-Robotti
(2014). If it is zero, then no factor screening procedure is
implemented. Otherwise, it implements an iterative screening procedure
based on the sequential removal of factors associated with the smallest insignificant
t-test of a nonzero SDF coefficient. The threshold for the absolute t-test is
\code{target_level_gkr2014_screening / n_factors}, where n_factors indicate the
number of factors in the model at the current iteration. Default is \code{0.}, i.e.,
no factor screening.}

\item{check_arguments}{A boolean: \code{TRUE} for internal check of all function
arguments; \code{FALSE} otherwise. Default is \code{TRUE}.}
}
\value{
A list containing \code{n_factors}-dimensional vector of factor
risk premia in \code{"risk_premia"}; if \code{include_standard_errors = TRUE}, then
it further includes \code{n_factors}-dimensional vector of factor risk
premia standard errors in \code{"standard_errors"};
if \code{target_level_gkr2014_screening >= 0}, it further includes the indices of
the selected factors in \code{selected_factor_indices}.
}
\description{
Computes the Fama-MachBeth (1973) \url{doi:10.1086/260061} factor
risk premia:
\verb{FMFRP = (beta' * beta)^\{-1\} * beta' * E[R]} where
\code{beta = Cov[R, F] * V[F]^{-1}}
or the misspecification-robust factor risk premia of Kan-Robotti-Shanken (2013)
\url{doi:10.1111/jofi.12035}:
\verb{KRSFRP = (beta' * V[R]^\{-1\} * beta)^\{-1\} * beta' * V[R]^\{-1\} * E[R]},
from data on factors \code{F} and test
asset excess returns \code{R}.
These notions of factor risk premia are by construction the negative
covariance of factors \code{F} with candidate SDF
\verb{M = 1 - d' * (F - E[F])},
where SDF coefficients \code{d} are obtained by minimizing pricing errors:
\verb{argmin_\{d\} (E[R] - Cov[R,F] * d)' * (E[R] - Cov[R,F] * d)}
and
\verb{argmin_\{d\} (E[R] - Cov[R,F] * d)' * V[R]^\{-1\} * (E[R] - Cov[R,F] * d)},
respectively.
Optionally computes the corresponding
heteroskedasticity and autocorrelation robust standard errors (accounting
for a potential model misspecification) using the
Newey-West (1994) \url{doi:10.2307/2297912} plug-in procedure to select the
number of relevant lags, i.e., \code{n_lags = 4 * (n_observations/100)^(2/9)}.
For the standard error computations, the function allows to internally
pre-whiten the series by fitting a VAR(1),
i.e., a vector autoregressive model of order 1.
All the details can be found in Kan-Robotti-Shanken (2013)
\url{doi:10.1111/jofi.12035}.
}
\examples{
# import package data on 6 risk factors and 42 test asset excess returns
factors = intrinsicFRP::factors[,-1]
returns = intrinsicFRP::returns[,-1]

# compute KRS factor risk premia and their standard errors
frp = FRP(returns, factors, include_standard_errors = TRUE)

}
