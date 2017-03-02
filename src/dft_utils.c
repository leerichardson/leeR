#include <R.h>
#include <Rmath.h>
#include <math.h>

// Add two Rcomplex numbers
Rcomplex add(Rcomplex x, Rcomplex y) {
  Rcomplex sum;

  sum.r = x.r + y.r;
  sum.i = x.i + y.i;

  return sum;
}

// Multiply two Rcomplex numbers
Rcomplex mult(Rcomplex x, Rcomplex y) {
  Rcomplex prod;

  prod.r = (x.r * y.r) - (x.i * y.i);
  prod.i = (x.r * y.i) + (x.i * y.r);

  return prod;
}

// Calculate the twiddle factor for a particular
// exponent, inverse combination
Rcomplex get_twiddle(double exponent, int inverse) {
  Rcomplex twiddle;

  twiddle.r = cos(inverse * PI * 2 * exponent);
  twiddle.i = sin(inverse * PI * 2 * exponent);

  return twiddle;
}

