#' Print a string!
#'
#' @param string character containing a string to print
#' @return A printed string
#' @examples
#' to_print <- "Hello, world!
#' leeR_demo(to_print)
#'
leeR_demo <- function(string) {
  print(string)
}

#' Generate multivariate normal random numbers
#'
#' @param n number of observations
#' @param mean_vec vector of means
#'
#' @return n x length(mean_vec) of observations
#' from a multivariate normal
generate_mvnorm <- function(n = 10, mean_vec = c(1, 1)) {
  sigma <- diag(mean_vec)
  mvtnorm::rmvnorm(n = n, mean = c(1, 2), sigma = sigma, method = "chol")
}
