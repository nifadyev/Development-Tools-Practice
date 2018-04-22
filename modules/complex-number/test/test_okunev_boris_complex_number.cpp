// Copyright 2018 Okunev Boris

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Okunev_Boris_ComplexNumberTest, Two_Same_Complex_Are_Equal) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    ComplexNumber z(re, im);
    ComplexNumber z1(re, im);

    // Assert
    EXPECT_TRUE(z == z1);
}

TEST(Okunev_Boris_ComplexNumberTest, Two_Different_Complex_Are_Not_Equal) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 2.0;
    double im1 = 3.0;

    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);

    // Assert
    EXPECT_FALSE(z == z1);
}

TEST(Okunev_Boris_ComplexNumberTest, No_Throw_Sum_Two_Complex) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 2.0;
    double im1 = 3.0;

    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);

    // Assert
    EXPECT_NO_THROW(z + z1);
}

TEST(Okunev_Boris_ComplexNumberTest, Sum_Two_Complex_Correct) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 2.0;
    double im1 = 3.0;

    ComplexNumber z(re, im);
    ComplexNumber z1(re1, im1);
    ComplexNumber expect(re + re1, im + im1);

    // Act
    ComplexNumber z2 = z + z1;

    // Assert
    EXPECT_EQ(expect, z2);
}

TEST(Okunev_Boris_ComplexNumberTest, Can_Set_Re) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    double re1 = 5;

    ComplexNumber z(re, im);
    ComplexNumber expect(re1, im);

    // Act
    z.setRe(re1);

    // Assert
    EXPECT_EQ(expect, z);
}

TEST(Okunev_Boris_ComplexNumberTest, Can_Get_Im) {
    // Arrange
    double re = 1.0;
    double im = 2.0;

    ComplexNumber z(re, im);

    // Act
    double im1 = z.getIm();

    // Assert
    EXPECT_EQ(im, im1);
}
