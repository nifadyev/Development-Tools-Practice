// Copyright 2018 Usova Marina

#include <gtest/gtest.h>

#include "include/complex_number.h"

double epsilon = 0.001;

TEST(Usova_Marina_ComplexNumberTest, Can_Set_Im_and_Re) {
  // Arrange
  double re = 15.5;
  double im = -5.5;

  ComplexNumber z;

  // Act
  z.setRe(re);
  z.setIm(im);

  // Assert
  EXPECT_NEAR(re, z.getRe(), epsilon);
  EXPECT_NEAR(im, z.getIm(), epsilon);
}

TEST(Usova_Marina_ComplexNumberTest, Can_Get_Im_and_Re) {
  // Arrange
  double re = 15.5;
  double im = -5.5;

  ComplexNumber z(re, im);

  // Act & Assert
  EXPECT_NEAR(z.getRe(), re, epsilon);
  EXPECT_NEAR(z.getIm(), im, epsilon);
}

TEST(Usova_Marina_ComplexNumberTest, Can_Use_Copy_Constructor) {
  // Arrange
  double re = 5.0;
  double im = 15.0;

  // Act
  ComplexNumber z(re, im);

  // Assert
  EXPECT_EQ(re, z.getRe());
  EXPECT_EQ(im, z.getIm());
}

TEST(Usova_Marina_ComplexNumberTest, Can_Use_Default_Constructor) {
  // Act
  ComplexNumber z;

  // Assert
  EXPECT_EQ(0, z.getRe());
  EXPECT_EQ(0, z.getIm());
}

TEST(Usova_Marina_ComplexNumberTest, Can_Use_Assigment_Constructor) {
  // Arrange
  ComplexNumber z1(5.0, 15.0);

  // Act
  ComplexNumber z2(z1);

  // Assert
  EXPECT_EQ(z2, z1);
}

TEST(Usova_Marina_ComplexNumberTest, Do_Throw_When_Division_By_Zero) {
  // Arrange
  ComplexNumber z1(0.0, 0.0);
  ComplexNumber z2(5.0, -5.0);

  // Act & Assert
  EXPECT_ANY_THROW(z2 / z1);
}

TEST(Usova_Marina_ComplexNumberTest, Can_Division_By_Not_Zero) {
  // Arrange
  ComplexNumber z1(25.0, 45.0);
  ComplexNumber z2(35.0, -5.0);

  // Act & Assert
  EXPECT_NO_THROW(z2 / z1);
}

TEST(Usova_Marina_ComplexNumberTest, Can_Correctly_Multiply_Imaginary_Numbers) {
  // Arrange
  ComplexNumber z1(0, 5.0);
  ComplexNumber z2(0, 5.0);
  ComplexNumber true_res(-25.0, 0);

  // Act
  ComplexNumber z;
  z = z1 * z2;

  // Assert
  EXPECT_EQ(z, true_res);
}

TEST(Usova_Marina_ComplexNumberTest, Correctly_Mult_With_CommutativeProperty) {
  // Arrange
  ComplexNumber z1(5.0, -5.0);
  ComplexNumber z2(5.0, 25.0);

  // Act
  ComplexNumber z = z1 * z2;
  ComplexNumber z_ = z2 * z1;

  // Assert
  EXPECT_EQ(z_, z);
}

TEST(Usova_Marina_ComplexNumberTest, Correctly_Mult_With_DistributiveProp) {
  // Arrange
  ComplexNumber z1(15.0, 20.0);
  ComplexNumber z2(-5.0, 45.0);
  ComplexNumber z3(5.0, -5.0);

  // Act
  ComplexNumber z = z1 * (z2 + z3);
  ComplexNumber z_ = z1 * z2 + z1 * z3;

  // Assert
  EXPECT_EQ(z_, z);
}

TEST(Usova_Marina_ComplexNumberTest, Correctly_Add_Imaginary_And_Real_Num) {
  // Arrange
  ComplexNumber z1(0, 5.0);
  ComplexNumber z2(5.0, 0);
  ComplexNumber true_res(5.0, 5.0);

  // Act
  ComplexNumber z;
  z = z1 + z2;

  // Assert
  EXPECT_EQ(z, true_res);
}

TEST(Usova_Marina_ComplexNumberTest, Correctly_Addition_With_AssociativeProp) {
  // Arrange
  ComplexNumber z1(5.0, 5.0);
  ComplexNumber z2(25.0, -5.0);
  ComplexNumber z3(15.0, 0.0);

  // Act
  ComplexNumber z = (z1 + z2) + z3;
  ComplexNumber z_ = z1 + (z2 + z3);

  // Assert
  EXPECT_EQ(z_, z);
}
