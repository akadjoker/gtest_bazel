#include <gtest/gtest.h>
#include "funcoes.hpp"

TEST(SomaTest, ValoresPositivos) {
    EXPECT_EQ(soma(2, 3), 5);
}

TEST(SomaTest, ValoresNegativos) {
    EXPECT_EQ(soma(-2, -3), -5);
}
