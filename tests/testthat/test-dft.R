context("DFT")

test_that("DFT", {
  # Generate example data for testing the DFT function!
  n <- 8
  x <- complex(length.out = n, real = runif(n), imaginary = runif(n))

  # Call the .Call based dft function and test against base R's FFT!
  a <- dft(x = x, inverse = FALSE)
  a_correct <- fft(z = x, inverse = FALSE)
  expect_true(all.equal(a, a_correct))
})

