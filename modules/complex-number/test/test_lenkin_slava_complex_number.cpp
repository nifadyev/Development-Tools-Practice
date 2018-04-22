// Copyright 2018 Lenkin Slava

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Lenkin_Slava_ComplexNumberTest, Multiplication_Zero) {
    // Arrange
    ComplexNumber z1(3, 3);
    ComplexNumber z2(0, 0);

    // Act
    ComplexNumber z = z2 * z1;

    // Assert
    ComplexNumber expected_z(0, 0);
    EXPECT_EQ(expected_z, z);
}

TEST(Lenkin_Slava_ComplexNumberTest, Complex_Expression) {
    // Arrange
    ComplexNumber z1(10.0, 5.0);
    ComplexNumber z2(7.0, 1.0);

    // Act
    ComplexNumber z = (z1 * z2) + (z1 - z2);

    // Assert
    ComplexNumber expected_z(68.0, 49.0);
    EXPECT_EQ(z, expected_z);
}

TEST(Lenkin_Slava_ComplexNumberTest, Add_Commutativity_Check) {
    // Arrange
    ComplexNumber z1(15.3, 11.2);
    ComplexNumber z2(40.0, 40.0);

    // Act
    ComplexNumber sum1 = z1 + z2;
    ComplexNumber sum2 = z2 + z1;

    // Assert
    EXPECT_EQ(sum1, sum2);
}

TEST(Lenkin_Slava_ComplexNumberTest, Multipication_Commutativity_Check) {
    // Arrange
    ComplexNumber z1(18.2, 15.2);
    ComplexNumber z2(13.1, 11.3);

    // Act
    ComplexNumber mult1 = z1 * z2;
    ComplexNumber mult2 = z2 * z1;

    // Assert
    EXPECT_EQ(mult1, mult2);
}


TEST(Lenkin_Slava_ComplexNumberTest, Subtract_A_Number_From_Zero) {
    // Arrange
    ComplexNumber z1(0.0, 0.0);
    ComplexNumber z2(2.0, 2.0);

    // Act
    ComplexNumber z = z1 - z2;

    // Assert
    ComplexNumber expected_z(-2.0, -2.0);
    EXPECT_EQ(expected_z, z);
}
