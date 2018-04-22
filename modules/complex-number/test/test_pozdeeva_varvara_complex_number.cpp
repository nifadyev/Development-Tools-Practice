// Copyright 2018 Pozdeeva Varvara

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Pozdeeva_Varvara_ComplexNumberTest, comparison_not_equal_return_false) {
    // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(26.1, 14.1);

    // Act & Assert
    EXPECT_FALSE(z1 == z2);
}
TEST(Pozdeeva_Varvara_ComplexNumberTest, comparison_equal_return_true) {
         // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(26.0, 14.0);

    // Act & Assert
    EXPECT_TRUE(z1 == z2);
}
TEST(Pozdeeva_Varvara_ComplexNumberTest, comparison_equal_return_false) {
         // Arrange
    ComplexNumber z1(26.0, 14.0);
    ComplexNumber z2(26.0, 14.0);

    // Act & Assert
    EXPECT_FALSE(z1 != z2);
}
TEST(Pozdeeva_Varvara_ComplexNumberTest, can_multiplied_by_zero) {
         // Arrange
    ComplexNumber z1(2.0, 4.0);
    ComplexNumber z2(0.0, 0.0);
    // Acc
    z1 = z1*z2;

    // Assert
    EXPECT_EQ(z2, z1);
}
TEST(Pozdeeva_Varvara_ComplexNumberTest, correct_order_of_operations) {
         // Arrange
    ComplexNumber z1(2.0, 4.0);
    ComplexNumber z2(6.0, 4.0);
    ComplexNumber zres(0.0, 0.0);
    ComplexNumber res(14.0, 20.0);

    // Act
    zres = z1 + z2 * z1;
    res = z2 * z1;
    res = res + z1;

    // Assert
    EXPECT_EQ(zres, res);
}
