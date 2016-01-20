context("Test our example")

test_that("our function works", {
  expect_equal(leeR_demo("Hi!"), "Hi!")
  expect_equal(2, 2)
  expect_equal(1, 2)
})
