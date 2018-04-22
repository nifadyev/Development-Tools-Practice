// Copyright 2018 Tipanov Daniil
#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Tipanov_Daniil_ComplexNumberTest, Can_Assign_Returned_Value) {
    // Arrange
    ComplexNumber a;
    ComplexNumber b(22.0, 14.0);

    // Act
    a.setRe(b.getRe());
    a.setIm(b.getIm());

    // Assert
    EXPECT_TRUE(a == b);
}

TEST(Tipanov_Daniil_ComplexNumberTest, Minus_Complex_Eq) {
    // Arrange
    double re = 1.0;
    double im = 5.0;
    ComplexNumber a(re, im);
    ComplexNumber b(-re, -im);

    // Act
    a = a + b;

    // Assert
    EXPECT_EQ(0.0, a.getRe());
    EXPECT_EQ(0.0, a.getIm());
}
TEST(Tipanov_Daniil_ComplexNumberTest, Commutativity_Complex) {
    // Arrange
    ComplexNumber a(1.0, 4.0);
    ComplexNumber b(2.0, -1.0);

    // Act
    ComplexNumber mult1 = a * b;
    ComplexNumber mult2 = b * a;

    // Assert
    EXPECT_TRUE(mult1 == mult2);
}

TEST(Tipanov_Daniil_ComplexNumberTest, Divide_Same_Numbers) {
    // Arrange
    ComplexNumber a(5.0, 5.0);
    ComplexNumber b(5.0, 5.0);

    // Act
    ComplexNumber result = a / b;

    // Assert
    EXPECT_EQ(1.0, result.getRe());
    EXPECT_EQ(0.0, result.getIm());
}

TEST(Tipanov_Daniil_ComplexNumberTest, Create_Negative_Real_Number) {
    // Arrange
    double re = -5.0;
    double im = 2.0;

    // Act
    ComplexNumber a(re, im);

    // Assert
    EXPECT_EQ(re, a.getRe());
}
