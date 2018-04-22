// Copyright 2017 Zinoviev Vladimir

#include <gtest/gtest.h>

#include <cmath>
#include "include/complex_number.h"

TEST(Zinoviev_Vladimir_ComplexNumberTest, Zero_Difference_Is_Equal_Zero) {
  // Arrange
  ComplexNumber z1(2.0, 2.0);
  ComplexNumber z2(2.0, 2.0);

  // Act
  ComplexNumber z = z1 - z2;

  // Assert
  EXPECT_EQ(0, z.getRe());
  EXPECT_EQ(0, z.getIm());
}

TEST(Zinoviev_Vladimir_ComplexNumberTest, Zero_Divide_Is_Zero) {
  // Arrange
  ComplexNumber z1(0.0, 0.0);
  ComplexNumber z2(2.13, -4.16);

  // Act
  ComplexNumber z = z1 / z2;

  // Assert
  EXPECT_EQ(0, z.getRe());
  EXPECT_EQ(0, z.getIm());
}

TEST(Zinoviev_Vladimir_ComplexNumberTest, Copied_Numbers_Are_Equal) {
  // Arrange
  ComplexNumber z2(1.0, 2.0);

  // Act
  ComplexNumber z(z2);

  // Assert
  EXPECT_EQ(z2.getRe(), z.getRe());
  EXPECT_EQ(z2.getIm(), z.getIm());
}

TEST(Zinoviev_Vladimir_ComplexNumberTest, Divide_Of_Equal_Numbers_Is_1) {
  // Arrange
  ComplexNumber z1(2.0, 2.0);
  ComplexNumber z2(2.0, 2.0);

  // Act
  ComplexNumber z = z1 / z2;

  // Assert
  EXPECT_EQ(1.0, z.getRe());
  EXPECT_EQ(0.0, z.getIm());
}

TEST(Zinoviev_Vladimir_ComplexNumberTest,
  Multiple_Of_Conjugate_Number_Is_Sqr_Of_Mod) {
  // Arrange
  ComplexNumber z1(2.0, 2.0);
  ComplexNumber z2(2.0, -2.0);

  // Act
  ComplexNumber z = z1 * z2;

  // Assert
  EXPECT_EQ(z1.getRe()*z1.getRe() + z1.getIm()*z1.getIm(), z.getRe());
  EXPECT_EQ(0.0, z.getIm());
}
