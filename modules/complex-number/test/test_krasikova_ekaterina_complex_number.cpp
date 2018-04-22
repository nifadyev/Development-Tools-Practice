// Copyright 2018 Krasikova Ekaterina

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Krasikova_Ekaterina_ComplexNumberTest, Can_assign_to_itself) {
    ComplexNumber z(1.0, 1.0);

    EXPECT_NO_THROW(z = z);
}
TEST(Krasikova_Ekaterina_ComplexNumberTest, Can_add_three_complex) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);
    ComplexNumber z3(3.0, 1.0);
    ComplexNumber sum(6.0, 3.0);

    EXPECT_EQ(sum, z1 + z2 + z3);
}
TEST(Krasikova_Ekaterina_ComplexNumberTest, Can_difference_three_complex) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);
    ComplexNumber z3(3.0, 1.0);
    ComplexNumber dif(-4.0, -1.0);

    EXPECT_EQ(dif, z1 - z2 - z3);
}
TEST(Krasikova_Ekaterina_ComplexNumberTest,
    The_addition_operation_is_commutative) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);

    EXPECT_EQ(z1 + z2, z2 + z1);
}
TEST(Krasikova_Ekaterina_ComplexNumberTest,
    The_multiplication_operation_is_commutative) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);

    EXPECT_EQ(z1 * z2, z2 * z1);
}
TEST(Krasikova_Ekaterina_ComplexNumberTest,
    The_addition_operation_is_associative) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);
    ComplexNumber z3(3.0, 1.0);

    EXPECT_EQ((z1 + z2) + z3, z1 + (z2 + z3));
}
TEST(Krasikova_Ekaterina_ComplexNumberTest,
    The_multiplication_operation_is_associative) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);
    ComplexNumber z3(3.0, 1.0);

    EXPECT_EQ((z1 * z2) * z3, z1 * (z2 * z3));
}
TEST(Krasikova_Ekaterina_ComplexNumberTest,
    There_is_a_property_of_distributivity) {
    ComplexNumber z1(1.0, 1.0);
    ComplexNumber z2(2.0, 1.0);
    ComplexNumber z3(3.0, 1.0);

    EXPECT_EQ((z1 + z2) * z3, z1 * z3 + z2 * z3);
}




