// Copyright 2018 Gracheva Elena

#include <gtest/gtest.h>

#include "include/complex_number.h"

#include "cmath"

TEST(Gracheva_Elena_ComplexNumberTest, Get_Norm_Using_Conjugating) {
    // Arrange
    ComplexNumber a(1, 2), a_(1, -2);

    // Act
    ComplexNumber res = (a*a_);

    // Assert
    EXPECT_EQ(res.getRe(), 5);
    EXPECT_EQ(res.getIm(), 0);
}

TEST(Gracheva_Elena_ComplexNumberTest, Trig_Form_Get_R) {
    // Arrange
    double r = 1, fi = 3.141569 / 2;
    ComplexNumber a(r*cos(fi), r*sin(fi));

    // Act
    double r1 = sqrt(a.getRe()*a.getRe() + a.getIm()*a.getIm());

    // Assert
    EXPECT_DOUBLE_EQ(r, r1);
}

TEST(Gracheva_Elena_ComplexNumberTest, Trig_Form_Get_Fi) {
    // Arrange
    double r = 1, fi = 3.141569 / 2;
    ComplexNumber a(r*cos(fi), r*sin(fi));

    // Act
    double fi1 = atan(a.getIm()/a.getRe());

    // Assert
    EXPECT_DOUBLE_EQ(fi, fi1);
}

TEST(Gracheva_Elena_ComplexNumberTest, Formula_Of_Moivre) {
    // Arrange
    const double pi = 3.141569;
    double r1 = 1, r2 = 2, fi1 = pi / 2, fi2 = pi / 4;
    ComplexNumber a(r1*cos(fi1), r1*sin(fi1)), b(r2*cos(fi2), r2*sin(fi2));
    double rExp = r1*r2, fiExp = fi1 + fi2;

    // Act
    ComplexNumber c = a*b;

    // Analysis
    double fiRes = atan(c.getIm() / c.getRe()) + pi;
    double rRes = sqrt(c.getRe()*c.getRe() + c.getIm()*c.getIm());

    // Assert
    EXPECT_NEAR(fiExp, fiRes, 1E-4);
    EXPECT_NEAR(rExp, rRes, 1E-4);
}

TEST(Gracheva_Elena_ComplexNumberTest, Div_On_Real_Number) {
    // Arrange
    ComplexNumber a(2, 4);
    double d = 2;

    // Act
    ComplexNumber res = a / ComplexNumber(d, 0);

    // Assert
    EXPECT_EQ(res, ComplexNumber(1, 2));
}
