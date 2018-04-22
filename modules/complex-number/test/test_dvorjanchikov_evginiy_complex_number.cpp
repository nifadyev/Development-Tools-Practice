// Copyright 2018 Dvorjanchikov Evginiy

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Dvorjancikov_Evginiy_ComplexNumberTest, Zero_Property) {
  // Arrange
  double re = 0.0;
  double im = 0.0;
  ComplexNumber z(50, 10);
  ComplexNumber k(re, im);

  // Act
  z = z * k;

  // Assert
  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}
TEST(Dvorjancikov_Evginiy_ComplexNumberTest, One_Property) {
  // Arrange
  double re = 10.0;
  double im = 10.0;
  ComplexNumber z(re, im);
  ComplexNumber k(1, 0);

  // Act
  z = z * k;

  // Assert
  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}
TEST(Dvorjancikov_Evginiy_ComplexNumberTest, Commutative_Property) {
  // Arrange
  double first_re = 10.0;
  double first_im = 10.0;
  double second_re = 10.0;
  double second_im = 10.0;
  ComplexNumber z(first_re, first_im);
  ComplexNumber k(second_re, second_im);
  ComplexNumber tmp(0, 0);

  // Act
  tmp = z * k;
  z = k * z;

  // Assert
  EXPECT_EQ(tmp.getRe(), z.getRe());
  EXPECT_EQ(tmp.getIm(), z.getIm());
}
TEST(Dvorjancikov_Evginiy_ComplexNumberTest, Negative) {
  // Arrange
  double re = 5.0;
  double im = 10.0;
  ComplexNumber z(re, im);
  ComplexNumber k(-re, -im);

  // Act
  z = z + k;

  // Assert
  EXPECT_EQ(0, z.getRe());
  EXPECT_EQ(0, z.getIm());
}
TEST(Dvorjancikov_Evginiy_ComplexNumberTest, Inverse_Nmber) {
  // Arrange
  double a = 7.0;
  double b = 4.0;
  double c = a / (a*a + b*b);
  double d = -b/ (a*a + b*b);
  ComplexNumber z(a, b);
  ComplexNumber k(c, d);

  // Act
  z = z * k;

  // Assert
  EXPECT_EQ(1, z.getRe());
  EXPECT_EQ(0, z.getIm());
}
