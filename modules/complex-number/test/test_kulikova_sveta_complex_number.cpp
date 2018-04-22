// Copyright 2018 Kulikova Svetlana

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kulikova_Sveta_ComplexNumberTest, Addition) {
    // Arrange
    double re1 = 1.2;
    double im1 = 3.4;
    double re2 = 5.6;
    double im2 = 7.8;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a + b;

    // Assert
    EXPECT_EQ(re1 + re2, c.getRe());
    EXPECT_EQ(im1 + im2, c.getIm());
}

TEST(Kulikova_Sveta_ComplexNumberTest, Subtraction) {
    // Arrange
    double re1 = 1.2;
    double im1 = 3.4;
    double re2 = 5.6;
    double im2 = 7.8;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a - b;

    // Assert
    EXPECT_EQ(re1 - re2, c.getRe());
    EXPECT_EQ(im1 - im2, c.getIm());
}

TEST(Kulikova_Sveta_ComplexNumberTest, Multiplication) {
    // Arrange
    double re1 = 1.2;
    double im1 = 3.4;
    double re2 = 5.6;
    double im2 = 7.8;
    ComplexNumber a(re1, im1);
    ComplexNumber b(re2, im2);
    ComplexNumber c;

    // Act
    c = a * b;

    // Assert
    EXPECT_EQ(re1 * re2 - im1 * im2, c.getRe());
    EXPECT_EQ(re1 * im2 + re2 * im1, c.getIm());
}

TEST(Kulikova_Sveta_ComplexNumberTest, Equality) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber a(re, im);
    ComplexNumber b(re, im);
    bool res;

    // Act
    res = (a == b);

    // Assert
    EXPECT_TRUE(res);
}

TEST(Kulikova_Sveta_ComplexNumberTest, Copying) {
    // Arrange
    double re = 1.2;
    double im = 3.4;
    ComplexNumber a(re, im);
    ComplexNumber c;

    // Act
    ComplexNumber b(a);
    c = a;

    // Assert
    EXPECT_EQ(re, b.getRe());
    EXPECT_EQ(im, b.getIm());
    EXPECT_EQ(re, c.getRe());
    EXPECT_EQ(im, c.getIm());
}
