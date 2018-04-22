// Copyright 2018 Galochkin Boris

#include <gtest/gtest.h>

#include <limits>
#include <cstddef>

#include "include/complex_number.h"

TEST(Galochkin_Boris_ComplexNumberTest, No_Limit_Test_With_Max_Double) {
    // Arrange
    ComplexNumber z1(std::numeric_limits<double>::max(),
                     std::numeric_limits<double>::max());
    ComplexNumber z2(std::numeric_limits<double>::max(),
                     std::numeric_limits<double>::max());

    // Act
    ComplexNumber z = z1 + z2;

    // Assert
    EXPECT_EQ(std::numeric_limits<double>::infinity(), z.getRe());
    EXPECT_EQ(std::numeric_limits<double>::infinity(), z.getIm());
}

TEST(Galochkin_Boris_ComplexNumberTest, Copy_Constructor_Test) {
    // Arrange
    ComplexNumber z(1.0, -2.0);

    // Act
    ComplexNumber copy_z(z);

    // Assert
    EXPECT_EQ(copy_z.getRe(), z.getRe());
    EXPECT_EQ(copy_z.getIm(), z.getIm());
}

TEST(Galochkin_Boris_ComplexNumberTest, Multiple_Operations_Test) {
    // Arrange
    ComplexNumber z(1.0, -2.0);

    // Act
    ComplexNumber res_z = z * z / z + z - z;

    // Assert
    EXPECT_NEAR(res_z.getRe(), z.getRe(), 0.00001);
    EXPECT_NEAR(res_z.getIm(), z.getIm(), 0.00001);
}

TEST(Galochkin_Boris_ComplexNumberTest, Pointer_Test) {
    // Arrange
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber* z2 = &z1;

    // Act
    z2->setIm(2.0);

    // Assert
    EXPECT_EQ(z1.getIm(), 2.0);
}

TEST(Galochkin_Boris_ComplexNumberTest, Alloc_Memory_Test) {
    // Arrange
    ComplexNumber* z2 = new ComplexNumber();

    // Act
    ComplexNumber z1(*z2);

    EXPECT_EQ(*z2, z1);
    delete z2;
}

