// Copyright 2017 Kamelina Julia

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kamelina_Julia_ComplexNumberTest, Difference_Of_Egual_Is_Zero) {
  double re = 0.0;
  double im = 0.0;
  ComplexNumber zero(re, im);

  double re1 = 2.2;
  double im1 = 3.3;
  ComplexNumber z1(re1, im1);
  ComplexNumber z2(re1, im1);

  EXPECT_EQ(zero, z1 - z2);
}

TEST(Kamelina_Julia_ComplexNumberTest, Dvision_Of_Egual_Is_One) {
  double re = 1.0;
  double im = 0.0;
  ComplexNumber e(re, im);

  double re1 = 2.2;
  double im1 = 3.3;
  ComplexNumber z1(re1, im1);
  ComplexNumber z2(re1, im1);

  EXPECT_EQ(e, z1 / z2);
}

TEST(Kamelina_Julia_ComplexNumberTest, Mult_Of_Imaginary_Is_Real) {
  double re = 0;
  double im = 1.0;
  ComplexNumber z(re, im);

  ComplexNumber exp_z(-1, 0);

  EXPECT_EQ(exp_z, z * z);
}

TEST(Kamelina_Julia_ComplexNumberTest, Construct_Object_Without_Args) {
  ComplexNumber z;

  EXPECT_NO_THROW(z.getRe());
  EXPECT_NO_THROW(z.getIm());
}

TEST(Kamelina_Julia_ComplexNumberTest, Copy_Constructor_Copies) {
  ComplexNumber z(1.0, 3.0);
  ComplexNumber z_scp(z);

  EXPECT_EQ(z_scp, z);
}
