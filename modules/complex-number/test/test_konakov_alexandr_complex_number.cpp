// Copyright 2018 Konakov Alexandr
#include <gtest/gtest.h>
#include <limits>
#include "include/complex_number.h"

static const double epsilon = std::numeric_limits<double>::epsilon();

TEST(Konakov_Alexandr_ComplexNumberTest, Mult_Of_Pure_Im_Gives_Re) {
  // Arrange
  double re = 0.0;
  double im = 1.0;
  ComplexNumber z(re, im);
  ComplexNumber expected(-1.0, 0.0);

  // Act
  ComplexNumber zz = z * z;

  // Assert
  EXPECT_EQ(expected, zz);
}

TEST(Konakov_Alexandr_ComplexNumberTest, Can_Divide_Re_By_Im_And_Get_Im) {
  // Arrange
  double expected_re = 0.0;
  double expected_im = -1.0;
  double epsilon = std::numeric_limits<double>::epsilon();
  ComplexNumber a(2, 0.0);
  ComplexNumber b(0.0, 2.0);

  // Act
  ComplexNumber c = a / b;

  // Assert
  EXPECT_NEAR(expected_re, c.getRe(), epsilon);
  EXPECT_NEAR(expected_im, c.getIm(), epsilon);
}

TEST(Konakov_Alexandr_ComplexNumberTest, Checking_Commutativity) {
  // Arrange
  double re = 2.0;
  double im = 3.0;
  ComplexNumber a = ComplexNumber(re, im);
  ComplexNumber b = ComplexNumber(im, re);

  // Act
  ComplexNumber ab = a * b;
  ComplexNumber ba = b * a;

  // Assert
  EXPECT_EQ(ab, ba);
}

TEST(Konakov_Alexandr_ComplexNumberTest, Checking_Precision_Of_Division) {
  // Arrange
  double re = 2.0;
  double im = 3.0;
  ComplexNumber a(re, im);

  // Act
  ComplexNumber c = a / a;

  // Assert
  EXPECT_NEAR(1.0, c.getRe(), epsilon);
  EXPECT_NEAR(0.0, c.getIm(), epsilon);
}

TEST(Konakov_Alexandr_ComplexNumberTest,
     Checking_Precision_Of_Mult_To_Inversed) {
  // Arrange
  double re = 2.0;
  double im = 3.0;
  ComplexNumber one(1.0, 0.0);
  ComplexNumber z(re, im);

  // Act
  ComplexNumber inv_z = one / z;
  ComplexNumber c = z * inv_z;

  // Assert
  EXPECT_NEAR(1.0, c.getRe(), 1.0e-6);
  EXPECT_NEAR(0.0, c.getIm(), 1.0e-6);
}
