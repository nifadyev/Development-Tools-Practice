// Copyright 2018 Batanina Lubov

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Batanina_Lubov_ComplexNumberTest, Can_Sum_Complex_Numbers) {
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

TEST(Batanina_Lubov_ComplexNumberTest, Can_Subtract_Complex_Numbers) {
    // Arrange
    double x_re = 6.0;
    double x_im = -5.0;
    ComplexNumber x(x_re, x_im);

    double y_re = 5.0;
    double y_im = -6.0;
    ComplexNumber y(y_re, y_im);

    // Act
    double z_re = x_re - y_re;
    double z_im = x_im - y_im;
    ComplexNumber z = x - y;

    // Assert
    EXPECT_EQ(z_re, z.getRe());
    EXPECT_EQ(z_im, z.getIm());
}

TEST(Batanina_Lubov_ComplexNumberTest, Can_Multiply_Complex_Numbers) {
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

TEST(Batanina_Lubov_ComplexNumberTest, Compare_Equal_Complex_Numbers) {
  // Arrange
  ComplexNumber x(5.0, 6.0);
  ComplexNumber y(5.0, 6.0);

  // Act & Assert
  EXPECT_TRUE(x == y);
}

TEST(Batanina_Lubov_ComplexNumberTest, Compare_Not_Equal_Complex_Numbers) {
    // Arrange
    ComplexNumber x(1.0, 2.0);
    ComplexNumber y(3.0, 4.0);

    // Act & Assert
    EXPECT_FALSE(x == y);
}
