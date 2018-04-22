// Copyright 2017 Kiselev Denis

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kiseled_Denis_ComplexNumberTest, Can_Create_Not_Zero) {
    // Arrange
    double re = 1.1;
    double im = 2.2;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Kiseled_Denis_ComplexNumberTest, Can_Create_Complex_In_Default_Construct) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_NEAR(re, z.getRe(), 0.001);
    EXPECT_NEAR(im, z.getIm(), 0.001);
}

TEST(Kiseled_Denis_ComplexNumberTest, Can_Double_Add_Complex) {
    // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(1.0, 7.0);
    ComplexNumber z3(4.2, 0.9);

    // Act
    ComplexNumber z = z1 + z2 + z3;

    // Assert
    ComplexNumber expected_z(31.2, 21.9);
    EXPECT_EQ(expected_z, z);
}

TEST(Kiseled_Denis_ComplexNumberTest, Can_Double_Difference_Complex) {
    // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(1.0, 7.0);
    ComplexNumber z3(4.2, 0.9);

    // Act
    ComplexNumber z = z3 - z2 - z1;

    // Assert
    ComplexNumber expected_z(-22.8, -20.1);
    EXPECT_EQ(expected_z, z);
}

TEST(Kiseled_Denis_ComplexNumberTest, Do_Not_Throw_When_Division_By_Not_Zero) {
    // Arrange
    ComplexNumber z1(1.0, 2.0);
    ComplexNumber z2(26.0, 14.0);

    // Act & Assert
    EXPECT_NO_THROW(z2 / z1);
}

TEST(Kiseled_Denis_ComplexNumberTest, Different_Real_Are_Not_Equal) {
    // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(26.1, 14.0);

    // Act & Assert
    EXPECT_TRUE(z1 != z2);
}

TEST(Kiseled_Denis_ComplexNumberTest, Different_Imaginary_Are_Not_Equal) {
    // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(26.0, 14.1);

    // Act & Assert
    EXPECT_TRUE(z1 != z2);
}
