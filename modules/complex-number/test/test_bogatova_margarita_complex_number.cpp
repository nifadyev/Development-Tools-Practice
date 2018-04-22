// Copyright 2018 Bogatova Margarita

#include <gtest/gtest.h>

#include "include/complex_number.h"

TEST(Bogatova_Margarita_ComplexNumberTest,
     can_create_complex_number_with_negative_values) {
    ASSERT_NO_THROW(ComplexNumber c(-1.0, -4.0));
}

TEST(Bogatova_Margarita_ComplexNumberTest, set_and_get_some_number) {
    ComplexNumber c;
    double tmp1 = 4.4, tmp2 = 5.5;
    c.setRe(tmp1);
    c.setIm(tmp2);
    EXPECT_TRUE(c.getRe() == tmp1 && c.getIm() == tmp2);
}

TEST(Bogatova_Margarita_ComplexNumberTest, equality_operator_return_false) {
    ComplexNumber c1(6.0, 8.0), c2(4.0, 9.0);
    EXPECT_FALSE(c1 == c2);
}

TEST(Bogatova_Margarita_ComplexNumberTest, inequality_operator_return_true) {
    ComplexNumber c1(6.0, 8.0), c2(6.0, 8.0);
    EXPECT_FALSE(c1 != c2);
}

TEST(Bogatova_Margarita_ComplexNumberTest, multiple_equating) {
    ComplexNumber c1(6.0, 8.0), c2(4.0, 9.0), c3(5.0, 11.0);
    c1 = c2 = c3;
    EXPECT_TRUE(c1 == c2 && c1 == c3 && c3 == c2);
}

TEST(Bogatova_Margarita_ComplexNumberTest, addition_is_commutative) {
    ComplexNumber c1(6.0, 8.0), c2(6.0, 8.0);
    ComplexNumber res1, res2;
    res1 = c1 + c2;
    res2 = c2 + c1;
    EXPECT_EQ(res1, res2);
}

TEST(Bogatova_Margarita_ComplexNumberTest, subtraction_is_not_commutative) {
    ComplexNumber c1(6.0, 8.0), c2(4.0, 9.0);
    ComplexNumber res1, res2;
    res1 = c1 - c2;
    res2 = c2 - c1;
    EXPECT_NE(res1, res2);
}
