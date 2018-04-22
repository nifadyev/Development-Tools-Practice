// Copyright 2018 Korniakov Kirill

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Gorelova_Ksenia_ComplexNumberTest, Can_Create_Not_Zero) {
    // Arrange
    double re = 1.5;
    double im = 9;
    // Act
    ComplexNumber z(re, im);
    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}
TEST(Gorelova_Ksenia_ComplexNumberTest, Can_Create_With_Negative_Imaginary) {
    // Arrange
    double re = 20.0;
    double im = -20.0;
    // Act
    ComplexNumber z(re, im);
    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}
TEST(Gorelova_Ksenia_Complex_Number_Test, Can_set_re_and_im) {
    // Arrange
    double re = 13.5;
    double im = 0.6;
    // Act
    ComplexNumber z;
    z.setRe(re);
    z.setIm(im);
    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}
TEST(Gorelova_Ksenia_Complex_Number_Test, Can_mult_numbers) {
    // Arrange
    double re1 = 2.0;
    double im1 = 0.0;
    double re2 = 1.5;
    double im2 = 5.6;
    // Act
    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re2, im2);
    ComplexNumber z3;
    z3 = z1*z2;
    // Assert
    EXPECT_EQ(re1*re2, z3.getRe());
    EXPECT_EQ(re1*im2, z3.getIm());
}
TEST(Gorelova_Ksenia_Complex_Number_Test, Doesnt_change_real) {
    // Arrange
    double Re = 13.3;
    double Im = -17.8;
    double newIm = 21.3;
    // Act
    ComplexNumber z(Re, Im);
    z.setIm(newIm);
    // Assert
    EXPECT_EQ(z.getRe(), Re);
}
