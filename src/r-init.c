#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <leeR.h>
#include <dft.h>

/* --- REGISTER FUNCTIONS --- */

// Create an array of all methods using .Call interface
// First Argument: Name of function
// Second Argument: Pointer to the actual routing
// Third Argument: Number of arguments the routine is expecting
static R_CallMethodDef callMethods[] = {
  {"dft_", (DL_FUNC)&dft_, 2},
  {NULL, NULL, 0}
};

// Register the .Call methods. Dll *info comes from R and is
// information about the shared object/dll
void R_init_leeR (DllInfo *info) {
  // Register routines defines in the above arrays
  R_registerRoutines(info, NULL, callMethods, NULL, NULL);

  // Default to dynamic lookup if the routine is not found
  R_useDynamicSymbols(info, TRUE);
}
