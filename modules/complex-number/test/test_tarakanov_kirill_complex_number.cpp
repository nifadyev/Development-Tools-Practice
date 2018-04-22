// Copyright 2018 Tarakanov Kirill

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Tarakanov_Kirill_ComplexNumberTest, Can_SetRe_and_SetIm) {
  // Arrange
  ComplexNumber a(0.0, 0.0);

  // Act
  a.setRe(2.0);
  a.setIm(6.0);

  // Assert
  double Re = a.getRe();
  double Im = a.getIm();

  EXPECT_EQ(Re, 2.0);
  EXPECT_EQ(Im, 6.0);
}

TEST(Tarakanov_Kirill_ComplexNumberTest, Plus_Two_Complex_Numbers) {
  // Arrange
  ComplexNumber a(5.0, 3.0);
  ComplexNumber b(2.0, 1.0);

  // Act
  ComplexNumber res = a + b;

  // Assert
  ComplexNumber true_res(7.0, 4.0);
  EXPECT_EQ(true_res, res);
}

TEST(Tarakanov_Kirill_ComplexNumberTest, Minus_Two_Complex_Numbers) {
  // Arrange
  ComplexNumber a(5.0, 3.0);
  ComplexNumber b(2.0, 1.0);

  // Act
  ComplexNumber res = a - b;

  // Assert
  ComplexNumber true_res(3.0, 2.0);
  EXPECT_EQ(true_res, res);
}

TEST(Tarakanov_Kirill_ComplexNumberTest, Multi_Two_Complex_Numbers) {
  // Arrange
  ComplexNumber a(3.0, 4.0);
  ComplexNumber b(6.0, 5.0);

  // Act
  ComplexNumber res = a * b;

  // Assert
  ComplexNumber true_res(-2, 39.0);
  EXPECT_EQ(true_res, res);
}

TEST(Tarakanov_Kirill_ComplexNumberTest, Property_OF_Associativity) {
  // Arrange
  ComplexNumber a(1.0, 8.0);
  ComplexNumber b(5.0, 1.0);
  ComplexNumber c(10.0, -4.0);

  // Act
  ComplexNumber res1 = a + (b + c);
  ComplexNumber res2 = (a + b) + c;

  // Assert
  EXPECT_EQ(res1, res2);
}

TEST(Tarakanov_Kirill_ComplexNumberTest, Property_OF_Distributivity) {
  // Arrange
  ComplexNumber a(1.0, 8.0);
  ComplexNumber b(5.0, 1.0);
  ComplexNumber c(10.0, -4.0);

  // Act
  ComplexNumber res1 = a * (b + c);
  ComplexNumber res2 = a * b + a * c;

  // Assert
  EXPECT_EQ(res1, res2);
}
