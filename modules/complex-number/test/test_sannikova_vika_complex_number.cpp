// Copyright 2018 Sannikova Vika

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Sannikova_Vika_ComplexNumberTest, Can_Add_Two_Complex_Numbers) {
    // Arrange
    ComplexNumber n1(2.0, 4.0);
    ComplexNumber n2(3.0, 5.0);

    // Act
    ComplexNumber res = n1 + n2;

    // Assert
    ComplexNumber exp_res(5.0, 9.0);
    EXPECT_EQ(exp_res, res);
}

TEST(Sannikova_Vika_ComplexNumberTest, Can_Multiply_Two_Complex_Numbers) {
    // Arrange
    ComplexNumber n1(2.0, 4.0);
    ComplexNumber n2(3.0, 5.0);

    // Act
    ComplexNumber res = n1 * n2;

    // Assert
    ComplexNumber exp_res(-14.0, 22.0);
    EXPECT_EQ(exp_res, res);
}

TEST(Sannikova_Vika_ComplexNumberTest, Can_Divide_Two_Complex_Numbers) {
    // Arrange
    ComplexNumber n1(3.0, 9.0);
    ComplexNumber n2(1.0, 3.0);

    // Act
    ComplexNumber res = n1 / n2;

    // Assert
    ComplexNumber exp_res(3.0, 0.0);
    EXPECT_EQ(exp_res, res);
}

TEST(Sannikova_Vika_ComplexNumberTest, Can_NOT_Divide_Complex_Number_By_ZERO) {
    // Arrange
    ComplexNumber n1(2.0, 4.0);
    ComplexNumber zero(0.0, 0.0);
    // Act

    // Assert
    EXPECT_ANY_THROW(n1/zero);
}

TEST(Sannikova_Vika_ComplexNumberTest,
    Check_The_Prorerty_Of_Distributivity_For_Complex_Numbers) {
    // Arrange
    ComplexNumber n1(3.0, 9.0);
    ComplexNumber n2(1.0, 3.0);
    ComplexNumber n3(-1.0, 13.0);

    // Act
    ComplexNumber res1 = (n1 + n2) * n3;
    ComplexNumber res2 = n1 * n3 + n2 * n3;

    // Assert
    EXPECT_EQ(res1, res2);
}

