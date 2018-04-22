// Copyright 2018 Kuznetsov Konstantin

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kuznetsov_Konstantin_ComplexNumberTest, New_Number_Is_Set_To_Zero) {
    ComplexNumber z;

    EXPECT_EQ(0.0, z.getRe());
    EXPECT_EQ(0.0, z.getIm());
}

TEST(Kuznetsov_Konstantin_ComplexNumberTest, Throws_When_Divided_By_Zero) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 2.0);
    ComplexNumber z3(2.0, 2.0);

    ASSERT_ANY_THROW(z1 / (z2 - z3));
}

TEST(Kuznetsov_Konstantin_ComplexNumberTest, Can_Assign_Complex_Numbers) {
    double re = 2.0;
    double im = 3.0;

    ComplexNumber z1;
    ComplexNumber z2(re, im);
    z1 = z2;

    EXPECT_NE(0.0, z1.getRe());
    EXPECT_NE(0.0, z1.getIm());
}

TEST(Kuznetsov_Konstantin_ComplexNumberTest, Can_Create_Number_Using_Sum) {
    double re1 = 1.0;
    double im1 = 1.0;
    double re2 = 2.0;
    double im2 = 2.0;

    ComplexNumber z1(re1, im1);
    ComplexNumber z2(re2, im2);

    ASSERT_NO_THROW(ComplexNumber z(z1 + z2));
}

TEST(Kuznetsov_Konstantin_ComplexNumberTest, Can_Get_Re_And_Im_Using_Conj) {
    double re = 2.0;
    double im = 3.0;

    ComplexNumber z(re, im);
    ComplexNumber z_(re, -im);

    EXPECT_EQ(re, (z + z_).getRe() / 2.0);
    EXPECT_EQ(im, (z - z_).getIm() / 2.0);
}
