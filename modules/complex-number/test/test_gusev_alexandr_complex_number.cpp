// Copyright 2017 Korniakov Kirill

#include <gtest/gtest.h>

#include "include/complex_number.h"
TEST(Gusev_Alexandr_ComplexNumberTest, Create_Object_Class) {
  // Arrange
  double re = 3.0;
  double im = 6.3;
  ComplexNumber* c = new ComplexNumber();
  // Act
  ComplexNumber z(re, im);
  c = &z;

  // Assert
  EXPECT_EQ(c->getRe(), z.getRe());
  EXPECT_EQ(c->getIm(), z.getIm());
}

TEST(Gusev_Aleksandr_ComplexNumberTest, Sum_Test) {
// Arrange
  double re1 = 5.1;
  double im1 = 6.2;
  double re2 = 3.0;
  double im2 = 2.0;
  ComplexNumber c1(re1, im1);
  ComplexNumber c2(re2, im2);
// Act
  ComplexNumber c = c1 + c2;
// Assert
  EXPECT_EQ(c.getRe(), 8.1);
  EXPECT_EQ(c.getIm(), 8.2);
}
TEST(Gusev_Aleksandr_ComplexNumberTest, Substruction) {
// Arrange
  double re1 = 3.0;
  double im1 = 5.0;
  double re2 = 4.0;
  double im2 = 5.0;
  ComplexNumber c1(re1, im1);
  ComplexNumber c2(re2, im2);
// Act
  ComplexNumber c = c1 - c2;
// Assert
  EXPECT_EQ(c.getRe(), -1.0);
  EXPECT_EQ(c.getIm(), 0.0);
}
TEST(Gusev_Aleksandr_ComplexNumberTest, Multiplication) {
// Arrange
  double re1 = 4.0;
  double im1 = 5.0;
  double re2 = 2.0;
  double im2 = 3.0;
// Act
  ComplexNumber c1(re1, im1);
  ComplexNumber c2(re2, im2);
  ComplexNumber c = c1 * c2;
// Assert
  EXPECT_EQ(c.getRe(), -7.0);
  EXPECT_EQ(c.getIm(), 22.0);
}
TEST(Gusev_Aleksandr_ComplexNumberTest, Commutativity_Sum_Property) {
// Arrange
  double re1 = 4.2;
  double im1 = 5.2;
  double re2 = 2.3;
  double im2 = 3.3;
// Act
  ComplexNumber c1(re1, im1);
  ComplexNumber c2(re2, im2);
  ComplexNumber sum12 = c1 + c2;
  ComplexNumber sum21 = c2 + c1;
// Assert
  ASSERT_TRUE(sum12 == sum21);
}

