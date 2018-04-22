// Copyright 2018 Generalov Aleksandr

#include <limits>
#include "gtest/gtest.h"
#include "include/complex_number.h"

TEST(Generalov_Aleksandr_ComplexNumberTest, Comparison_Operator) {
    // Arrange
    double re = 4.2;
    double im = 5.1;
    ComplexNumber* a = new ComplexNumber();
    ComplexNumber z(re, im);

    // Act
    a = &z;

    // Assert
    EXPECT_EQ(a->getRe(), z.getRe());
    EXPECT_EQ(a->getIm(), z.getIm());
}

TEST(Generalov_Aleksandr_ComplexNumberTest, Multiplication_Test) {
    // Arrange
    ComplexNumber z1(4.0, 5.0);
    ComplexNumber z2(6.0, 7.0);

    // Act
    ComplexNumber z = z1 * z2;

    // Assert
    EXPECT_EQ(z.getRe(), -11.0);
    EXPECT_EQ(z.getIm(), 58.0);
}

TEST(Generalov_Aleksandr_ComplexNumberTest, Multiple_Expression_Test) {
    // Arrange
    ComplexNumber z1(4.0, 5.0);

    // Act
    ComplexNumber z = z1 * z1 / z1 - z1 + z1;

    // Assert
    EXPECT_EQ(z1.getRe(), z.getRe());
    EXPECT_EQ(z1.getIm(), z.getIm());
}

TEST(Generalov_Aleksandr_ComplexNumberTest, Max_Sum_Test) {
    // Arrange
    double max = std::numeric_limits<double>::max();
    double ub = std::numeric_limits<double>::infinity();
    ComplexNumber z1(max, max);

    // Act
    ComplexNumber z = z1 + z1;

    // Assert
    EXPECT_EQ(z.getRe(), ub);
    EXPECT_EQ(z.getIm(), ub);
}

TEST(Generalov_Aleksandr_ComplexNumberTest, Difference_Test) {
    // Arrange
    double max = std::numeric_limits<double>::max();
    double min = std::numeric_limits<double>::lowest();
    double ub = std::numeric_limits<double>::infinity();
    ComplexNumber z1(max, max);
    ComplexNumber z2(min, min);

    // Act
    ComplexNumber z = z1 - z2;

    // Assert
    EXPECT_EQ(z.getRe(), ub);
    EXPECT_EQ(z.getIm(), ub);
}
