/*
  dft_utils.h
  Utilities for C Functions in the dft R Package
  Lee Richardson
  Dec 22, 2016
*/

// Include the Rcomplex struct
#include <R.h>

// Add two Rcomplex numbers
Rcomplex add(Rcomplex x, Rcomplex y);

// Multiply two Rcomplex numbers
Rcomplex mult(Rcomplex x, Rcomplex y);

// Create twiddle factor raised to an exponent
Rcomplex get_twiddle(double exponent, int inverse);
