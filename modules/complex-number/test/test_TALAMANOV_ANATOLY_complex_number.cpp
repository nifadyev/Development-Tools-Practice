// Copyright 2018 Tolya Talamanov

#include <gtest/gtest.h>
#include "include/complex_number.h"

TEST(Talamanov_Tolya_ComplexNumberTest, Compare_Two_Numbers) {
  // Arrange
  double re = 1.5;
  double im = 3.0;
  ComplexNumber z1(re, im);
  ComplexNumber z2(re, im);

  // Assert
  ASSERT_TRUE(z1 == z2);
}

TEST(Talamanov_Tolya_ComplexNumberTest, Can_Create_Copy) {
  // Arrange
  ComplexNumber z(2.0, 3.5);

  // Act
  ComplexNumber cz(z);

  // Assert
  EXPECT_EQ(z, cz);
}

TEST(Talamanov_Tolya_ComplexNumberTest, Can_Calculate_Sum_Two_Numbers) {
  // Arrange
  ComplexNumber z1(2.1, 5.4);
  ComplexNumber z2(3.5, 4.9);

  // Act
  ComplexNumber sum = z1 + z2;

  // Assert
  EXPECT_EQ(sum.getRe(), 5.6);
  EXPECT_EQ(sum.getIm(), 10.3);
}

TEST(Talamanov_Tolya_ComplexNumberTest, Check_Commutativity_Sum_Property) {
  // Arrange
  ComplexNumber z1(2.0, 4.6);
  ComplexNumber z2(3.5, 6.9);

  // Act
  ComplexNumber sum12 = z1 + z2;
  ComplexNumber sum21 = z2 + z1;

  // Assert
  ASSERT_TRUE(sum12 == sum21);
}

TEST(Talamanov_Tolya_ComplexNumberTest, Exception_When_Division_By_Zero) {
  // Arrange
  ComplexNumber z0(0, 0);
  ComplexNumber z1(33.5, 12.5);

  // Act
  ASSERT_ANY_THROW(z1 / z0);
}
