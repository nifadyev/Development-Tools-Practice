// Copyright 2018 Mayachkin Arseny

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Mayachkin_Arseny_ComplexNumberTest, The_existance_of_zero) {
    // Arrange
    double z_re = 1.0;
    double z_im = 1.0;
    ComplexNumber z(z_re, z_im);
    double z2_re = 0.0;
    double z2_im = 0.0;
    ComplexNumber z2(z2_re, z2_im);

    // Act
    ComplexNumber z3 = z + z2;

    // Assert
    EXPECT_EQ(z, z3);
}

TEST(Mayachkin_Arseny_ComplexNumberTest, Commutativity_of_addition) {
    // Arrange
    ComplexNumber z(1.0, 4.0);
    ComplexNumber z2(3.0, 2.0);

    // Act
    ComplexNumber firstSum = z + z2;
    ComplexNumber secondSum = z2 + z;

    // Assert
    EXPECT_EQ(firstSum, secondSum);
}

TEST(Mayachkin_Arseny_ComplexNumberTest, Associativity_of_addition) {
    // Arrange
    ComplexNumber z(1.0, 4.0);
    ComplexNumber z2(3.0, 2.0);
    ComplexNumber z3(5.0, 6.0);

    // Act
    ComplexNumber firstSum = (z + z2) + z3;
    ComplexNumber secondSum = z + (z2 + z3);

    // Assert
    EXPECT_EQ(firstSum, secondSum);
}

TEST(Mayachkin_Arseny_ComplexNumberTest, Associativity_of_multiplication) {
    // Arrange
    ComplexNumber z(1.0, 4.0);
    ComplexNumber z2(3.0, 2.0);
    ComplexNumber z3(5.0, 6.0);

    // Act
    ComplexNumber firstMP = (z * z2) * z3;
    ComplexNumber secondMP = z * (z2 * z3);

    // Assert
    EXPECT_EQ(firstMP, secondMP);
}

TEST(Mayachkin_Arseny_ComplexNumberTest, Commutativity_of_multiplication) {
    // Arrange
    ComplexNumber z(1.0, 4.0);
    ComplexNumber z2(3.0, 2.0);

    // Act
    ComplexNumber firstMP = z * z2;
    ComplexNumber secondMP = z2 * z;

    // Assert
    EXPECT_EQ(firstMP, secondMP);
}

TEST(Mayachkin_Arseny_ComplexNumberTest, Distributivity) {
    // Arrange
    ComplexNumber z(1.0, 4.0);
    ComplexNumber z2(3.0, 2.0);
    ComplexNumber z3(5.0, 6.0);

    // Act
    ComplexNumber firstMP = (z + z2) * z3;
    ComplexNumber secondMP = z * z3 + z2 * z3;

    // Assert
    EXPECT_EQ(firstMP, secondMP);
}
