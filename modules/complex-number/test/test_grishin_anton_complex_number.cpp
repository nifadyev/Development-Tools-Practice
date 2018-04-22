// Copyright 2018 Grishin Anton

#include <gtest/gtest.h>

#include "include/complex_number.h"


TEST(Grishin_Anton_ComplexNumberTest, Can_get_Re_from_Im) {
    // Arrange
    double re = -1.0;
    double im = 1;
    ComplexNumber z1(0.0, im);
    double epsilon = 0.001;

    // Act
    ComplexNumber z = z1 * z1;

    // Assert
    EXPECT_NEAR(re, z.getRe(), epsilon);
}

TEST(Grishin_Anton_ComplexNumberTest, Mult_commutative) {
    // Arrange
    ComplexNumber z1(7.0, 6.0);
    ComplexNumber z2(5.0, 4.0);

    // Act
    ComplexNumber z3 = z2 * z1;
    ComplexNumber z4 = z1 * z2;

    // Assert
    EXPECT_EQ(z3, z4);
}

TEST(Grishin_Anton_ComplexNumberTest, Mult_distributive) {
    // Arrange
    ComplexNumber z1(15.0, 20.0);
    ComplexNumber z2(27.0, 30.0);
    ComplexNumber z3(5.0, 7.0);

    // Act
    ComplexNumber z4 = z1*(z2+z3);
    ComplexNumber z5 = z1*z2+z1*z3;

    // Assert
    EXPECT_EQ(z4, z5);
}

TEST(Grishin_Anton_ComplexNumberTest, Add_Associative) {
    // Arrange
    ComplexNumber z1(1.0, 2.0);
    ComplexNumber z2(3.0, 6.0);
    ComplexNumber z3(5.0, 7.0);

    // Act
    ComplexNumber z4 = z1 + (z2 + z3);
    ComplexNumber z5 = (z1 + z2) + z3;

    // Assert
    EXPECT_EQ(z4, z5);
}

TEST(Grishin_Anton_ComplexNumberTest, Can_Diff_By_Add) {
    // Arrange
    ComplexNumber z1(1.0, 2.0);
    ComplexNumber z2(3.0, 6.0);
    ComplexNumber z3(0.0, 0.0);

    // Act
    ComplexNumber z4 = z1 - z2;
    z2 = z3 - z2;
    ComplexNumber z5 = z1 + z2;

    // Assert
    EXPECT_EQ(z4, z5);
}
