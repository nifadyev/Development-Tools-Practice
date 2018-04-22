// Copyright 2018 Gladyshev Alexey

#include <gtest/gtest.h>

#include "include/complex_number.h"


TEST(Gladyshev_Alexey_ComplexNumberTest, Correct_Order_Of_Operations) {
    // Arrange
    ComplexNumber z1(0.2, -0.3), z2(12, 17), z3(78.897, -47);

    // Act
    ComplexNumber firstZ = z1 + z2 * z3;
    ComplexNumber secondZ = z1 + (z2 * z3);

    // Assert
    EXPECT_TRUE(firstZ == secondZ);
}

TEST(Gladyshev_Alexey_ComplexNumberTest, Correct_Work_Of_Distributivity) {
    // Arrange
    ComplexNumber z1(0.2, -0.3), z2(12, 17), z3(78.897, -47);
    double epsilon = 0.00001;

    // Act
    ComplexNumber firstZ = z1 * (z2 + z3);
    ComplexNumber secondZ = z1 * z2 + z1 * z3;

    // Assert
    EXPECT_NEAR(firstZ.getRe(), secondZ.getRe(), epsilon);
    EXPECT_NEAR(firstZ.getIm(), secondZ.getIm(), epsilon);
}

TEST(Gladyshev_Alexey_ComplexNumberTest, Comp_Conjugate_Nums_Is_Real_Num) {
    // Arrange
    ComplexNumber z1(12, -17), z2(12, 17);

    // Act
    ComplexNumber resZ = z1 * z2;

    // Assert
    EXPECT_EQ(resZ.getIm(), 0);
}

TEST(Gladyshev_Alexey_ComplexNumberTest, Property_Of_One_Of_Multiplying) {
    // Arrange
    ComplexNumber z(12, -17), one(1, 0);

    // Act
    ComplexNumber resZ = z * one;

    // Assert
    EXPECT_EQ(z, resZ);
}

TEST(Gladyshev_Alexey_ComplexNumberTest, Property_Of_Zero_Of_Multiplying) {
    // Arrange
    ComplexNumber z(12, -17), zero(0, 0);

    // Act
    ComplexNumber resZ = z * zero;

    // Assert
    EXPECT_EQ(resZ.getRe(), 0);
    EXPECT_EQ(resZ.getIm(), 0);
}
