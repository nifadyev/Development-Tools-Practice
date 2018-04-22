// Copyright 2018 Chvanov Leonid

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Chvanov_Leonid_ComplexNumberTest, Check_Commutative_Property_Of_Addition) {
    // Arrange
    ComplexNumber z1(5.0, 6.0);
    ComplexNumber z2(15.0, 16.0);

    // Act
    ComplexNumber sum1(z1 + z2);
    ComplexNumber sum2(z2 + z1);

    // Assert
    EXPECT_EQ(sum1, sum2);
}

TEST(Chvanov_Leonid_ComplexNumberTest,
Check_Commutative_Property_Of_Multiplication) {
    // Arrange
    ComplexNumber z1(5.0, 6.0);
    ComplexNumber z2(15.0, 16.0);

    // Act
    ComplexNumber prod1(z1 * z2);
    ComplexNumber prod2(z2 * z1);

    // Assert
    EXPECT_EQ(prod1, prod2);
}

TEST(Chvanov_Leonid_ComplexNumberTest,
Check_Distributive_Property_Of_Addition) {
    // Arrange
    ComplexNumber z1(5.0, 6.0);
    ComplexNumber z2(15.0, 16.0);
    ComplexNumber z3(115.0, 116.0);

    // Act
    ComplexNumber sum1(z1 * (z2 + z3));
    ComplexNumber sum2(z1 * z2  + z1 * z3);

    // Assert
    EXPECT_EQ(sum1, sum2);
}

TEST(Chvanov_Leonid_ComplexNumberTest,
ComplexNumber_Divided_By_Itself_Returns_1) {
    // Arrange
    ComplexNumber z(5.0, 6.0);
    ComplexNumber expected_res(1.0, 0.0);

    // Act
    ComplexNumber q(z / z);

    // Assert
    EXPECT_EQ(expected_res, q);
}

TEST(Chvanov_Leonid_ComplexNumberTest,
Multiplication_By_Neutral_Element_Does_Not_Change_ComplexNumber) {
    // Arrange
    ComplexNumber z(5.0, 6.0);
    ComplexNumber n(1.0, 0.0);

    // Act and assert
    EXPECT_EQ(z, z*n);
}
