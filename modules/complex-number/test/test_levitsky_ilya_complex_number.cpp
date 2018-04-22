// Copyright 2018 Levitsky Ilya

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Levitsky_Ilya_ComplexNumberTest, Can_Create_Zero) {
  // Arrange
  double re = 0.0;
  double im = 0.0;

  // Act
  ComplexNumber z(re, im);

  // Assert
  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}

TEST(Levitsky_Ilya_ComplexNumberTest, Can_Sum_Complex_Numbers) {
  // Arrange
  double x_re = 6.0;
  double x_im = -5.0;
  ComplexNumber x(x_re, x_im);

  double y_re = 5.0;
  double y_im = -6.0;
  ComplexNumber y(y_re, y_im);

  // Act
  double z_re = x_re + y_re;
  double z_im = x_im + y_im;
  ComplexNumber z = x + y;

  // Assert
  EXPECT_EQ(z_re, z.getRe());
  EXPECT_EQ(z_im, z.getIm());
}

TEST(Levitsky_Ilya_ComplexNumberTest, Compare_Two_Numbers) {
  // Arrange
  double re = 1.5;
  double im = 3.0;
  ComplexNumber z1(re, im);
  ComplexNumber z2(re, im);

  // Act & Assert
  ASSERT_TRUE(z1 == z2);
}

TEST(Levitsky_Ilya_ComplexNumberTest, Can_Division_Real) {
  // Arrange
  double x_re = 12.0, y_re = 3.0;
  ComplexNumber a(x_re, 0.0), b(y_re, 0.0);

  // Act
  ComplexNumber res(x_re / y_re, 0.0);

  // Assert
  EXPECT_EQ(a / b, res);
}

TEST(Levitsky_Ilya_ComplexNumberTest, Can_Multiply_Complex_Numbers) {
  // Arrange
  double x_re = 6.0;
  double x_im = -5.0;
  ComplexNumber x(x_re, x_im);

  double y_re = 5.0;
  double y_im = -6.0;
  ComplexNumber y(y_re, y_im);

  // Act
  double z_re = x_re * y_re - x_im * y_im;
  double z_im = x_re * y_im + x_im * y_re;
  ComplexNumber z = x * y;

  // Assert
  EXPECT_EQ(z_re, z.getRe());
  EXPECT_EQ(z_im, z.getIm());
}

TEST(Levitsky_Ilya_ComplexNumberTest, Can_Division_Imaginary) {
  // Arrange
  ComplexNumber z1(0.0, 4.0);
  ComplexNumber z2(0.0, 2.0);
  ComplexNumber res(2.0, 0.0);

  // Assert
  EXPECT_EQ(z1 / z2, res);
}
