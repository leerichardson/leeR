context("Test our example")

test_that("our function works", {
  expect_equal(leeR_demo("Hi!"), "Hi!")
  expect_equal(2, 2)
})
