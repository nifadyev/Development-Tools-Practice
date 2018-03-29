<<<<<<< HEAD
// Copyright 2018 Nifadyev Vadim

#include <gtest/gtest.h>
#include <cmath>

#include "include/complex_number.h"

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Multiply_By_Zero) {
    // Arrange
    ComplexNumber number1(-454.9, 35.646), number2(0.0, 0.0);   

    // Act
    ComplexNumber result = number1 * number2;

    // Assert
    ComplexNumber expectedResult(0.0, 0.0);
    EXPECT_EQ(result, expectedResult);
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Add_Complex_Numbers_With_Huge_Real_Part) {
    // Arrange
    ComplexNumber number1(DBL_MAX, -435.0), number2(DBL_MAX, 8769.7);  

    // Act
    ComplexNumber result = number1 + number2;

    // Assert
    ComplexNumber expectedResult(INFINITY, 8334.7);
=======
// Copyright 2017 Korniakov Kirill

#include <gtest/gtest.h>
#include <iostream>
#include "ComplexNumber.h"
using namespace std;

TEST(Korniakov_Kirill_ComplexNumberTest, Can_Create_Zero) {
	// Arrange
	double re = 0.0;
	double im = 0.0;

	// Act
	ComplexNumber z(re, im);

	// Assert
	EXPECT_EQ(re, z.getRe());
	EXPECT_EQ(im, z.getIm());
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Multiply_By_Zero) {
    ComplexNumber number1(-454.9, 35.646), number2(0.0, 0.0);

    ComplexNumber result = number1 * number2;
    ComplexNumber expectedResult(0.0, 0.0);

    EXPECT_EQ(result, expectedResult);
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Add_Complex_Numbers_With_Huge_Real_Part)
{
    ComplexNumber number1(DBL_MAX, -435.0), number2(DBL_MAX, 8769.7);

    ComplexNumber result = number1 + number2;
    ComplexNumber expectedResult(INFINITY, 8334.7);

>>>>>>> 38b506d8f32bacf2b0b3ea238ecff701c0a3c6f6
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

<<<<<<< HEAD
TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Get_Infinity_By_Adding_Two_Huge_Complex_Numbers) {
    // Arrange
    ComplexNumber number1(DBL_MAX, DBL_MAX), number2(DBL_MAX, DBL_MAX);

    // Act
    ComplexNumber result = number1 + number2;

    // Assert
    ComplexNumber expectedResult(INFINITY, INFINITY);
=======
TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Get_Infinity_By_Adding_Two_Huge_Comlex_Numbers)
{
    ComplexNumber number1(DBL_MAX, DBL_MAX), number2(DBL_MAX, DBL_MAX);

    ComplexNumber result = number1 + number2;
    ComplexNumber expectedResult(INFINITY, INFINITY);

>>>>>>> 38b506d8f32bacf2b0b3ea238ecff701c0a3c6f6
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

<<<<<<< HEAD
TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Return_1_If_Complex_Number_Is_Divided_By_Itself) {
    // Arrange
    ComplexNumber number(4234.123, -89.125);

    // Act
    ComplexNumber result = number / number;

    // Assert
    ComplexNumber expectedResult(1.0, 0.0);
    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}

TEST(Nifadyev_Vadim_ComplexNumberTest, Can_Execute_Multiple_Operations) {
    // Arrange
    ComplexNumber number1(-676.2, 9.0), number2(-2.1, 441.246), number3(10.1, -8.781157);

    // Act
    ComplexNumber result = number1 * number2 - number3;

    // Assert
    ComplexNumber expectedResult(-2561.29, -298380.664);
    EXPECT_NEAR(result.getRe(), expectedResult.getRe(), 0.004);
    EXPECT_NEAR(result.getIm(), expectedResult.getIm(), 0.0001);
}
=======
TEST(Nifadyev_Vadim_ComplexNumberTest, sCan_Get_Infinity_By_Adding_Two_Huge_Comlex_Numbers)
{
    //TODO: change
    ComplexNumber number1(DBL_MIN, DBL_MIN), number2(DBL_MAX, DBL_MAX);

    ComplexNumber result = number1 - number2;
    ComplexNumber expectedResult(-DBL_MAX, -DBL_MAX);

    EXPECT_DOUBLE_EQ(result.getRe(), expectedResult.getRe());
    EXPECT_DOUBLE_EQ(result.getIm(), expectedResult.getIm());
}
>>>>>>> 38b506d8f32bacf2b0b3ea238ecff701c0a3c6f6
