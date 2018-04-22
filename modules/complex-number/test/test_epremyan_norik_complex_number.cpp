// Copyright 2018 Epremyan Norik

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Epremyan_Norik_ComplexNumberTest, difference) {
    // Arrange
    double re1 = 3.55;
    double im1 = 0.074;
    double re2 = 16.148;
    double im2 = 7.6336;

    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a - b;

    // Assert
    EXPECT_EQ(re1-re2, c.getRe());
    EXPECT_EQ(im1-im2, c.getIm());
}

TEST(Epremyan_Norik_ComplexNumberTest, sum) {
    // Arrange
    double re1 = 3.55;
    double im1 = 0.074;
    double re2 = 16.148;
    double im2 = 7.6336;

    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a + b;

    // Assert
    EXPECT_EQ(re1 + re2, c.getRe());
    EXPECT_EQ(im1 + im2, c.getIm());
}

TEST(Epremyan_Norik_ComplexNumberTest, Equal) {
    // Arrange
    double re1 = 3.55;
    double im1 = 0.074;
    double re2 = 3.55;
    double im2 = 0.074;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    bool res;

    // Act
    res = (a == b);

    // Assert
    EXPECT_TRUE(res);
}

TEST(Epremyan_Norik_ComplexNumberTest, SetReal) {
    // Arrange
    double re1 = 3.55;
    double im1 = 0.074;
    double re2 = 16.148;
    ComplexNumber a(re1, im1);

    // Act
    a.setRe(re2);

    // Assert
    EXPECT_EQ(re2, a.getRe());
}

TEST(Epremyan_Norik_ComplexNumberTest, SetImagine) {
    // Arrange
    double re1 = 3.55;
    double im1 = 0.074;
    double im2 = 7.6336;
    ComplexNumber a(re1, im1);

    // Act
    a.setIm(im2);

    // Assert
    EXPECT_EQ(im2, a.getIm());
}
