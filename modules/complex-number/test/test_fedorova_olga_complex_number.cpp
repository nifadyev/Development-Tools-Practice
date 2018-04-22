// Copyright 2018 Fedorova Olga

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Fedorova_Olga_ComplexNumberTest, Correct_Multilication) {
    double r = 2.0;
    double i = 1.0;

    ComplexNumber c(r, i);
    ComplexNumber c_mult = c * c;
    ComplexNumber true_res(3.0, 4.0);

    EXPECT_EQ(true_res, c_mult);
}

TEST(Fedorova_Olga_ComplexNumberTest, Correct_Setting) {
    double r = 1.01;
    double i = 2.02;

    ComplexNumber a(r, i);
    ComplexNumber d(0.0, 0.0);

    d.setRe(r);
    d.setIm(i);

    EXPECT_EQ(a, d);
}

TEST(Fedorova_Olga_ComplexNumberTest,
    Can_Create_With_NegativeNumbers_And_MultiplyThem) {
    double r = -1.01;
    double i = -2.02;

    ComplexNumber z(r, i);
    ComplexNumber z_mult = z*z;
    ComplexNumber true_mult(-3.0603, 4.0804);

    EXPECT_EQ(r, z.getRe());
    EXPECT_EQ(i, z.getIm());
    EXPECT_EQ(true_mult, z_mult);
}

TEST(Fedorova_Olga_ComplexNumberTest, Can_Create_Copy) {
    double r = 1.01;
    double i = 2.02;

    ComplexNumber z(r, i);
    ComplexNumber z_copy(z);

    EXPECT_EQ(z, z_copy);
}

TEST(Fedorova_Olga_ComplexNumberTest, Cant_Devide_by_Zero) {
    double r = 1.01;
    double i = 2.02;

    ComplexNumber z(r, i);
    ComplexNumber zero(0, 0);
    ComplexNumber res;

    EXPECT_ANY_THROW(res = z / zero);
}

TEST(Fedorova_Olga_ComplexNumberTest, Correct_NotEqual) {
    double r = 1.01;
    double i = 2.02;

    ComplexNumber a(r, i);
    ComplexNumber b(3, 4);
    ComplexNumber res(-1, -1);

    if (a != b) {
        res.setRe(1);
        res.setIm(1);
    }

    EXPECT_EQ(1, res.getRe());
    EXPECT_EQ(1, res.getIm());
}
