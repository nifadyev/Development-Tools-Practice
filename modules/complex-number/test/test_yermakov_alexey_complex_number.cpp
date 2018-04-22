// Copyright 2018 Yermakov Alexey

#include <gtest/gtest.h>
#include <limits>
#include "include/complex_number.h"

TEST(Yermakov_Alexey_ComplexNumberTest, Can_Create_Zero) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}


TEST(Yermakov_Alexey_ComplexNumberTest, Max_Sum_Test) {
    // Arrange
    double max = std::numeric_limits<double>::max();
    double inf = std::numeric_limits<double>::infinity();

    // Act
    ComplexNumber z1(max, max);
    ComplexNumber z = z1 + z1;

    // Assert
    EXPECT_EQ(z.getRe(), inf);
    EXPECT_EQ(z.getIm(), inf);
}


TEST(Yermakov_Alexey_ComplexNumberTest, Opposite_Number) {
    // Arrange
    double re = 3.0;
    double im = 7.0;
    ComplexNumber z(re, im);
    ComplexNumber o(-re, -im);

    // Act
    z = z + o;

    // Assert
    EXPECT_EQ(0, z.getRe());
    EXPECT_EQ(0, z.getIm());
}


TEST(Yermakov_Alexey_ComplexNumberTest, Create_Copy) {
    // Arrange
    double re = -1.0;
    double im = 1.0;

    // Act
    ComplexNumber z(re, im);
    ComplexNumber cz(z);

    // Assert
    EXPECT_EQ(cz, z);
}


TEST(Yermakov_Alexey_ComplexNumberTest, Can_Divide_Real) {
    // Arrange
    double re1 = 21.0, re2 = 7.0;

    // Act
    ComplexNumber a(re1, 0.0), b(re2, 0.0);
    ComplexNumber res(re1 / re2, 0.0);

    // Assert
    EXPECT_EQ(a / b, res);
}

TEST(Yermakov_Alexey_ComplexNumberTest, Can_Divide_Imaginary) {
    // Arrange
    ComplexNumber z1(0.0, 9.0);
    ComplexNumber z2(0.0, 3.0);

    // Act
    ComplexNumber res(3.0, 0.0);

    // Assert
    EXPECT_EQ(z1 / z2, res);
}
