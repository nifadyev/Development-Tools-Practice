// Copyright 2018 Kudalin Roman

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Kudalin_Roman_ComplexNumberTest, Addition_Is_Associative) {
    // Arrange
    ComplexNumber z1(15.0, 23.0);
    ComplexNumber z2(9.4, 17.9);
    ComplexNumber z3(13.3, 5.5);

    // Act
    ComplexNumber sum1 = z1 + (z2 + z3);
    ComplexNumber sum2 = (z1 + z2) + z3;

    // Assert
    EXPECT_EQ(sum1, sum2);
}

TEST(Kudalin_Roman_ComplexNumberTest,
Addition_With_Zero_Returns_Original_Number) {
    // Arrange
    ComplexNumber z1(15.0, 23.0);
    ComplexNumber z2(0.0, 0.0);

    // Act
    ComplexNumber z = z1 + z2;

    // Assert
    EXPECT_EQ(z, z1);
}

TEST(Kudalin_Roman_ComplexNumberTest,
Multiplication_By_Zero_Returns_Zero) {
    // Arrange
    ComplexNumber z1(15.0, 23.0);
    ComplexNumber z2(0.0, 0.0);

    // Act
    ComplexNumber z = z1 * z2;

    // Assert
    ComplexNumber expected_z(0.0, 0.0);
    EXPECT_EQ(expected_z, z);
}

TEST(Kudalin_Roman_ComplexNumberTest,
Addition_With_Complex_Conjugate_Returns_A_Real_Number) {
    // Assert
    ComplexNumber z1(15.0, 23.0);
    ComplexNumber z2(15.0, -23.0);

    // Act
    ComplexNumber z = z1 + z2;

    // Assert
    double exp_res = 30.0;
    EXPECT_EQ(z.getRe(), exp_res);
    EXPECT_EQ(z.getIm(), 0.0);
}

TEST(Kudalin_Roman_ComplexNumberTest, Division_By_Itself_Returns_1) {
    // Assert
    ComplexNumber z1(15.0, 23.0);

    // Act
    ComplexNumber z = z1 / z1;

    // Assert
    double exp_re = 1.0;
    double exp_im = 0.0;
    EXPECT_NEAR(z.getRe(), exp_re, 0.001);
    EXPECT_NEAR(z.getIm(), exp_im, 0.001);
}
