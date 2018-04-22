// Copyright 2018 Churakov Sergey

#include <gtest/gtest.h>

#include "include/complex_number.h"


TEST(Churakov_Sergey_ComplexNumberTest, Can_Divide_By_One) {
    ComplexNumber z(5.5, 10.5);
    ComplexNumber one(1.0, 0);
    ComplexNumber div;

    div = z / one;

    EXPECT_EQ(z, div);
}

TEST(Churakov_Sergey_ComplexNumberTest, Can_Mult_By_One) {
    ComplexNumber z(5.5, 10.5);
    ComplexNumber one(1.0, 0);
    ComplexNumber mult;

    mult = z * one;

    EXPECT_EQ(z, mult);
}

TEST(Churakov_Sergey_ComplexNumberTest, Can_Add_Zero) {
    ComplexNumber z(5.5, 10.5);
    ComplexNumber zero(0, 0);
    ComplexNumber sum;

    sum = z + zero;

    EXPECT_EQ(z, sum);
}

TEST(Churakov_Sergey_ComplexNumberTest, Can_Substract_Zero) {
    ComplexNumber z(5.5, 10.5);
    ComplexNumber zero(0, 0);
    ComplexNumber sub;

    sub = z - zero;

    EXPECT_EQ(z, sub);
}

TEST(Churakov_Sergey_ComplexNumberTest, Can_Mult_By_Zero) {
    ComplexNumber z(5.5, 10.5);
    ComplexNumber zero(0, 0);
    ComplexNumber mult;

    mult = z * zero;

    EXPECT_EQ(mult, zero);
}

TEST(Churakov_Sergey_ComplexNumberTest,  Can_Get_and_Set_Parts) {
    ComplexNumber num1(6.5, 44.4);
    ComplexNumber num2;

    num2.setRe(num1.getRe());
    num2.setIm(num1.getIm());

    EXPECT_EQ(num1, num2);
}

TEST(Churakov_Sergey_ComplexNumberTest,  Inits_Parts_With_Zero_By_Default) {
    ComplexNumber num;
    int Re, Im;

    Re = num.getRe();
    Im = num.getIm();

    EXPECT_EQ(Re, 0);
    EXPECT_EQ(Im, 0);
}
