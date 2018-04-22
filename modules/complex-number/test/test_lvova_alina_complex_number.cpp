// Copyright 2018 Lvova Alina

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Lvova_Alina_ComplexNumberTest, Division) {
    // Arrange
    double re1 = 3.65;
    double im1 = 0.025;
    double re2 = 15.222;
    double im2 = 6.666;
    double denominator = 0;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    denominator = 1.0 / (re2 * re2 + im2 * im2);
    c = a / b;

    // Assert
    EXPECT_EQ((re1*re2 + im1*im2)*denominator, c.getRe());
    EXPECT_EQ((im1*re2 - re1*im2)*denominator, c.getIm());
}

TEST(Lvova_Alina_ComplexNumberTest, Multiplication) {
    // Arrange
    double re1 = 3.65;
    double im1 = 0.025;
    double re2 = 15.222;
    double im2 = 6.666;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a * b;

    // Assert
    EXPECT_EQ(re1 * re2 - im1 * im2, c.getRe());
    EXPECT_EQ(re1 * im2 + re2 * im1, c.getIm());
}

TEST(Lvova_Alina_ComplexNumberTest, Inequality) {
    // Arrange
    double re1 = 3.65;
    double im1 = 0.025;
    double re2 = 15.222;
    double im2 = 6.666;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    bool res;

    // Act
    res = (a != b);

    // Assert
    EXPECT_TRUE(res);
}

TEST(Lvova_Alina_ComplexNumberTest, SetRe) {
    // Arrange
    double re1 = 4.12;
    double im1 = 0.125;
    double re2 = 5.222;
    ComplexNumber a(re1, im1);

    // Act
    a.setRe(re2);

    // Assert
    EXPECT_EQ(re2, a.getRe());
}

TEST(Lvova_Alina_ComplexNumberTest, SetIm) {
    // Arrange
    double re1 = 4.12;
    double im1 = 0.125;
    double im2 = 6.666;
    ComplexNumber a(re1, im1);

    // Act
    a.setIm(im2);

    // Assert
    EXPECT_EQ(im2, a.getIm());
}
