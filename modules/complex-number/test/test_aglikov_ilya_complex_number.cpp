// Copyright 2018 Aglikov Ilya

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Aglikov_Ilya_ComplexNumberTest, Test_Constructors) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z1;
    ComplexNumber z2(re, im);
    ComplexNumber z3(z2);

    // Assert
    EXPECT_EQ(z1, z2);
    EXPECT_EQ(z2, z3);
}

TEST(Aglikov_Ilya_ComplexNumberTest, Test_Equality_Operator) {
    // Arrange
    double re = 43.34;
    double im = 34.43;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_FALSE(z != z);
}

TEST(Aglikov_Ilya_ComplexNumberTest, Test_Multiply_Operator) {
    // Arrange
    ComplexNumber z1(41.0, 34.0);
    ComplexNumber z2(1.0, 0.0);

    // Act
    z2 = z1 * z2;

    // Assert
    EXPECT_TRUE(z1 == z2);
}

TEST(Aglikov_Ilya_ComplexNumberTest, Same_Result_After_Adding_Zero) {
    // Arrange
    double re = 43.7;
    double im = 34.7;

    ComplexNumber z1(re, im);
    ComplexNumber z2(0.0, 0.0);

    // Act
    z1 = z1 + z2;

    // Assert
    EXPECT_DOUBLE_EQ(z1.getRe(), re);
    EXPECT_DOUBLE_EQ(z1.getIm(), im);
}

TEST(Aglikov_Ilya_ComplexNumberTest, Devidend_Is_Zero_Equal_To_Zero) {
    // Arrange
    ComplexNumber devinded(0.0, 0.0);
    ComplexNumber devider(43.0, 34.0);
    ComplexNumber res;

    // Act
    res = devinded / devider;

    // Assert
    EXPECT_EQ(res, devinded);
}
