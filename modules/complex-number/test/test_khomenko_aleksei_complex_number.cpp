// Copyright 2018 Khomenko Aleksei

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Khomenko_Aleksei_ComplexNumberTest, Can_Get_Re_from_Im) {
    // Arrange
    double re = -1.0;
    double im = 1.0;
    ComplexNumber z(0.0, im);

    // Act
    ComplexNumber z1 = z*z;

    // Assert
    EXPECT_NEAR(re, z1.getRe(), 0.001);
}

TEST(Khomenko_Aleksei_ComplexNumberTest, Can_Substruct_Const_At_Init) {
    // Arrange & Act
    double re = 20.0;
    double im = 25.0;
    ComplexNumber z(re, im);
    ComplexNumber z1(re-5, im-5);

    // Assert
    EXPECT_NE(z1.getRe(), z.getRe());
    EXPECT_NE(z1.getIm(), z.getIm());
}

TEST(Khomenko_Aleksei_ComplexNumberTest, Can_Add_Zero) {
    // Arrange
    ComplexNumber z(20.0, 25.0);
    ComplexNumber z1(0.0, 0.0);

    // Act
    ComplexNumber z_res = z + z1;

    // Assert
    ASSERT_EQ(z_res, z);
}

TEST(Khomenko_Aleksei_ComplexNumberTest, Can_Mult_by_Neutral_Ele) {
    // Arrange
    ComplexNumber z(20.0, 25.0);
    ComplexNumber z1(1.0, 0.0);

    // Act
    ComplexNumber z_res = z * z1;

    // Assert
    ASSERT_EQ(z_res, z);
}

TEST(Khomenko_Aleksei_ComplexNumberTest, Can_check_the_Distribution) {
    // Arrange
    double re = 20.0;
    double im = 20.0;
    ComplexNumber z1(re, im), z2(re, im), z3(re, im);

    // Act
    ComplexNumber z_res1 = z1*(z2+z3);
    ComplexNumber z_res2 = z1*z2+z1*z3;

    // Assert
    EXPECT_EQ(z_res1, z_res2);
}
