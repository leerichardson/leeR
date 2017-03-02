#include <stdio.h>
#include <stdlib.h>

#include <dft_utils.h>
#include <R.h>

void dft(Rcomplex *x, Rcomplex *a, int inverse, int n) {
  // Initialize the iterator variables
  int j, k;

  // Exponent of the complex exponential
  double exponent;

  // Allocate variables needed for the coefficient
  Rcomplex tot, val, twiddle;

  // Loop over coefficients
  for (k = 0; k < n; k++) {
    // Initialize the value to 0 + i 0
    tot.r = 0;
    tot.i = 0;

    // Loop over data-vector
    for (j = 0; j < n; j++) {
      // Get the twiddle factor for this particular iteration
      exponent = ((j * k) / (double) n);
      twiddle = get_twiddle(exponent, inverse);

      // Multiply the x-value by the current twiddle factor
      val = mult(x[j], twiddle);

      // Add the total variable to the current calculated value
      tot = add(tot, val);
    }

    a[k] = tot;
  }
}
