// Copyright 2017 Korniakov Kirill
#include <gtest/gtest.h>
#include "include/complex_number.h"
TEST(Ermachenko_Boris_ComplexNumberTest, can_equate_some_complexnumber) {
    // Arrange
    ComplexNumber z1(25.0, 14.0);
    ComplexNumber z2(25.1, 14.1);
    ComplexNumber z3(25.2, 14.1);
    ComplexNumber z4(26.1, 34.1);
    // Act
    z1 = z2 = z3 = z4;
    // Assert
    EXPECT_TRUE(z4 == z1);
}
TEST(Ermachenko_Boris_ComplexNumberTest, check_correct_order_of_operations) {
    // Arrange
    ComplexNumber z1(27.0, 64.0);
    ComplexNumber z2(6.0, 4.0);
    ComplexNumber res1(0.0, 0.0);
    ComplexNumber res2(0.0, 0.0);
    // Act
    res1 = z1+z2 / z1;
    res2 = z2 / z1;
    res2 = res2 + z1;
    // Assert
    EXPECT_EQ(res1, res2);
}
TEST(Ermachenko_Boris_ComplexNumberTest, check_multiply_distributivel) {
    // Arrange
    ComplexNumber z1(27.0, 64.0);
    ComplexNumber z2(6.0, 4.0);
    ComplexNumber z3(6.0, 4.0);
    ComplexNumber res1(0.0, 0.0);
    ComplexNumber res2(0.0, 0.0);
    // Act
    res1 = (z1 + z2)*z3;
    res2 = z1*z3 + z2*z3;
    // Assert
    EXPECT_TRUE(res1 == res2);
}
TEST(Ermachenko_Boris_ComplexNumberTest, check_multiply_associatively) {
    // Arrange
    ComplexNumber z1(27.0, 64.0);
    ComplexNumber z2(6.0, 4.0);
    ComplexNumber z3(6.0, 4.0);
    ComplexNumber res1(0.0, 0.0);
    ComplexNumber res2(0.0, 0.0);
    ComplexNumber res3(0.0, 0.0);
    // Act
    res1 = (z1 * z2)*z3;
    res2 = z1*(z2*z3);
    res3 = z1*z2*z3;
    // Assert
    EXPECT_TRUE(res1 == res2);
    EXPECT_TRUE(res2 == res3);
}
TEST(Ermachenko_Boris_ComplexNumberTest, can_multiplied_by_zero) {
    // Arrange
    ComplexNumber z1(10.0, 9.0);
    ComplexNumber z2(0.0, 0.0);
    // Act
    z1 = z1*z2;
    // Assert
    EXPECT_TRUE(z1 == z2);
}

