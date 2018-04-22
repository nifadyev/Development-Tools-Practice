// Copyright 2018 Shkenev Petr

#include <gtest/gtest.h>
#include <limits>
#include <string>

#include "include/complex_number.h"

TEST(Shkenev_Petr_ComplexNumberTest, Can_Create_Zero) {
    // Arrange
    double re = 0.0;
    double im = 0.0;

    // Act
    ComplexNumber z(re, im);

    // Assert
    EXPECT_EQ(re, z.getRe());
    EXPECT_EQ(im, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Can_Create_Big) {
    // Arrange
    double max = std::numeric_limits<double>::max();

    // Act
    ComplexNumber z(max, max);

    // Assert
    EXPECT_EQ(max, z.getRe());
    EXPECT_EQ(max, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Can_Create_Big_Negative) {
    // Arrange
    double lowest = std::numeric_limits<double>::lowest();

    // Act
    ComplexNumber z(lowest, lowest);

    // Assert
    EXPECT_EQ(lowest, z.getRe());
    EXPECT_EQ(lowest, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Check_Double_Overflow) {
    // Arrange
    double max = std::numeric_limits<double>::max();
    double infinity = std::numeric_limits<double>::infinity();

    // Act
    ComplexNumber x(max, max);
    ComplexNumber z = x + x;

    // Assert
    EXPECT_EQ(infinity, z.getRe());
    EXPECT_EQ(infinity, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Check_Double_Overflow_Negative) {
    // Arrange
    double lowest = std::numeric_limits<double>::lowest();
    double infinity_negative = -std::numeric_limits<double>::infinity();

    // Act
    ComplexNumber x(lowest, lowest);
    ComplexNumber z = x + x;

    // Assert
    EXPECT_EQ(infinity_negative, z.getRe());
    EXPECT_EQ(infinity_negative, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Can_Multiply_Small) {
    // Arrange
    double min = std::numeric_limits<double>::min();

    // Act
    ComplexNumber x(min, min);
    ComplexNumber z = x * x;

    // Assert
    EXPECT_EQ(0, z.getRe());
    EXPECT_EQ(0, z.getIm());
}

TEST(Shkenev_Petr_ComplexNumberTest, Throw_Dividing_By_Small) {
    // Arrange
    double min = std::numeric_limits<double>::min();

    // Act
    ComplexNumber x(10.0, 10.0);
    ComplexNumber y(min, min);

    // Assert
    EXPECT_THROW(x / y, std::string);
}
