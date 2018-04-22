// Copyright 2017 Gribov Pavel

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Gribov_Pavel_ComplexNumberTest, Can_Sum_Two_Complex) {
    // Arrange
    ComplexNumber z1(6.0, -7.0);
    ComplexNumber z2(-158.44, 7.01);

    // Act
    ComplexNumber z = z1 + z2;

    // Assert
    ComplexNumber expected_z(-152.44, 0.01);
    EXPECT_EQ(expected_z, z);
}

TEST(Gribov_Pavel_ComplexNumberTest, Can_Diff_Two_Complex) {
    // Arrange
    ComplexNumber z1(-5.5, -2.0);
    ComplexNumber z2(1.5, -2.0);

    // Act
    ComplexNumber z = z1 - z2;

    // Assert
    ComplexNumber expected_z(-7.0, 0.0);
    EXPECT_EQ(expected_z, z);
}

TEST(Gribov_Pavel_ComplexNumberTest,
    Can_Multiplication_Two_Complex_Without_Real) {
    // Arrange
    ComplexNumber z1(0.0, 2.3);
    ComplexNumber z2(0.0, -1.2);

    // Act
    ComplexNumber z = z1 * z2;

    // Assert
    ComplexNumber expected_z(2.76, 0.0);
    EXPECT_EQ(expected_z, z);
}

TEST(Gribov_Pavel_ComplexNumberTest, Can_Divide_Two_Complex) {
    // Arrange
    ComplexNumber z1(2.0, -1.0);
    ComplexNumber z2(2.0, 1.0);

    // Act
    ComplexNumber z = z1 / z2;

    // Assert
    ComplexNumber expected_z(0.6, -0.8);
    EXPECT_EQ(expected_z, z);
}

TEST(Gribov_Pavel_ComplexNumberTest, Equal_Numbers_Are_Equal) {
    // Arrange
    ComplexNumber z1(4.0, 2.0);
    ComplexNumber z2(2.0, 0.0);
    ComplexNumber z3(3.0, -1.0);
    ComplexNumber z4(1.0, -1.0);

    // Act & Assert
    EXPECT_EQ(z1 / z2, z3 / z4);
}
