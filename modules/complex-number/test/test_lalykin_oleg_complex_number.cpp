// Copyright 2018 Lalykin Oleg

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Lalykin_Oleg_ComplexNumberTest, Can_Create_Diff_Constr) {
    // Arrange
    double re = 2.0;
    double im = 1.0;
    // Act
    ComplexNumber z(re, im);
    ComplexNumber z1(z);
    // Assert
    EXPECT_EQ(z, z1);
}
TEST(Lalykin_Oleg_ComplexNumberTest, Equality_Operator) {
    // Arrange
    ComplexNumber z1(1.0, 0.0);
    ComplexNumber z2(1.0, 0.0);
    // Assert
    EXPECT_TRUE(z1 == z2);
    EXPECT_FALSE(z1 != z2);
}
TEST(Lalykin_Oleg_ComplexNumberTest, Get_Operator) {
    // Arrange
    ComplexNumber z1(1.0, 0.0);
    // Act
    ComplexNumber z2(z1.getRe(), z1.getIm());
    // Assert
    EXPECT_EQ(z1, z2);
}
TEST(Lalykin_Oleg_ComplexNumberTest, Set_Operator) {
    // Arrange
    ComplexNumber z1(-111.5, 122.1241);
    ComplexNumber z2(322.1, -533.5);
    // Act
    z1.setRe(z2.getRe());
    z2.setIm(z1.getIm());
    // Assert
    EXPECT_EQ(z1, z2);
}
TEST(Lalykin_Oleg_ComplexNumberTest, Math_Operators) {
    // Arrange
    ComplexNumber z4;
    ComplexNumber z1(4.0, 2.0);
    ComplexNumber z2(1.0, 1.0);
    ComplexNumber z3(2.0, 10.0);
    // Act
    z4 = z1 / z2 + z2 * z3;
    // Assert
    EXPECT_EQ(z4.getRe(), -5);
    EXPECT_EQ(z4.getIm(), 11);
}
