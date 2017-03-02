#' Discrete Fourier Transform
#'
#' @param x real or complex vector
#' @param inverse logical, defaults to FALSE
#'
#' @useDynLib leeR dft_
#'
#' @export
#'
#' @return the DFT of x
dft <- function(x, inverse = FALSE) {
  # If inverse is true: 1, false: -1
  inverse <- ifelse(inverse, 1, -1)

  # Call the C-code with the DFT implementation
  a <- .Call("dft_", x, inverse, PACKAGE = "leeR")

  return(a)
}

