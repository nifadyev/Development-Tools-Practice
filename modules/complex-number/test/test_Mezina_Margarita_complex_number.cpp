// Copyright 2018 Mezina Margarita

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Mezina_Margarita_ComplexNumber, Can_Get_Real_Number) {
    // Arrange
    double re = 3;
    double im = 4;

    // Act
    ComplexNumber cn(re, im);

    // Assert
    EXPECT_EQ(cn.getRe(), re);
}

TEST(Mezina_Margarita_ComplexNumber, Can_Get_Imaginary_Number) {
    // Arrange
    double re = 3;
    double im = 4;

    // Act
    ComplexNumber cn(re, im);

    // Assert
    EXPECT_EQ(cn.getIm(), im);
}

TEST(Mezina_Margarita_ComplexNumber, Can_Plus_Number) {
    // Arrange
    double re1 = 3;
    double im1 = 4;
    double re2 = -1;
    double im2 = -2;
    double re3 = 2;
    double im3 = 2;

    // Act
    ComplexNumber cn1(re1, im1);
    ComplexNumber cn2(re2, im2);
    ComplexNumber cn3(re3, im3);

    // Assert
    EXPECT_EQ(cn3, cn1+cn2);
}

TEST(Mezina_Margarita_ComplexNumber, Can_Minus_Number) {
    // Arrange
    double re1 = 3;
    double im1 = 4;
    double re2 = -1;
    double im2 = -2;
    double re3 = 4;
    double im3 = 6;

    // Act
    ComplexNumber cn1(re1, im1);
    ComplexNumber cn2(re2, im2);
    ComplexNumber cn3(re3, im3);

    // Assert
    EXPECT_EQ(cn3, cn1 - cn2);
}

TEST(Mezina_Margarita_ComplexNumber, Can_Create_Complex_Number) {
    // Arrange
    double re1 = 3;
    double im1 = 4;
    double re2 = -1;
    double im2 = -2;
    double re3 = 5;
    double im3 = -10;

    // Act
    ComplexNumber cn1(re1, im1);
    ComplexNumber cn2(re2, im2);
    ComplexNumber cn3(re3, im3);

    // Assert
    EXPECT_EQ(cn3, cn1 * cn2);
}

TEST(Mezina_Margarita_ComplexNumber, i_in_square_is_minus_one) {
    // Arrange
    double re1 = 0;
    double im1 = 1;
    double re2 = -1;
    double im2 = 0;

    // Act
    ComplexNumber cn1(re1, im1);
    ComplexNumber cn2(re2, im2);

    // Assert
    EXPECT_EQ(cn2, cn1 * cn1);
}
