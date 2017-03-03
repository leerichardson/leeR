#include <R.h>
#include <Rinternals.h>
#include <dft.h>

// R-wrapper C dft function
SEXP dft_(SEXP _x, SEXP _inverse) {
  // Convert SEXP variables to C variables ---
  int inverse = asInteger(_inverse);

  Rcomplex *x;
  x = COMPLEX(_x);

  // Allocate the outputs for returning to R --
  int n = length(_x);
  SEXP a_ = PROTECT(allocVector(CPLXSXP, n));
  Rcomplex *a;
  a = COMPLEX(a_);

  // Call the C dft function using C variables
  dft(x, a, inverse, n);

  // Unprotect the a_ vector from garbage collection
  UNPROTECT(1);

  return(a_);
}

