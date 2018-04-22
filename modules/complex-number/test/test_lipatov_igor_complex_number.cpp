// Copyright 2018 Lipatov Igor

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Lipatov_Igor_ComplexNumberTest, Base_test) {
    // Arrange
    double re = 1.0;
    double im = 1.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Lipatov_Igor_ComplexNumberTest, Addition_test) {
    // Arrange
    ComplexNumber z1(1, 1);
    ComplexNumber z2(1, 1);

    // Act
    ComplexNumber z = z1 + z2;

    // Assert
    EXPECT_EQ(2, z.getRe());
    EXPECT_EQ(2, z.getIm());
}

TEST(Lipatov_Igor_ComplexNumberTest, Multiplication_test) {
    // Arrange
    ComplexNumber z1(0, 1);
    ComplexNumber z2(0, 1);

    // Act
    ComplexNumber z = z1 * z2;

    // Assert
    EXPECT_EQ(-1, z.getRe());
    EXPECT_EQ(0, z.getIm());
}

TEST(Lipatov_Igor_ComplexNumberTest, Equality_test) {
    // Arrange
    ComplexNumber z1(0, 1);
    ComplexNumber z2(1, 0);
    bool eq;

    // Act
    if (z1 != z2) {
        eq = false;
    } else {
        eq = true;
    }

    // Assert
    EXPECT_EQ(eq, false);
}

TEST(Lipatov_Igor_ComplexNumberTest, Copy_test) {
    // Arrange
    ComplexNumber z1(0, 1);


    // Act
    ComplexNumber z2 = z1;

    // Assert
    EXPECT_EQ(z1.getRe(), z2.getRe());
    EXPECT_EQ(z1.getIm(), z2.getIm());
}
