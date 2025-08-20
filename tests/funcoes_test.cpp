#include <gtest/gtest.h>
#include "src/funcoes.hpp"
using namespace funcoes;

TEST(Funcoes, Soma) {
    EXPECT_EQ(soma(2,3), 5);
    EXPECT_EQ(soma(-1,1), 0);
}

TEST(Funcoes, Repeat) {
    EXPECT_EQ(repeat("ab", 3), "ababab");
    EXPECT_THROW(repeat("x", -1), std::invalid_argument);
    EXPECT_EQ(repeat("x", 0), "");
}

TEST(Funcoes, Media) {
    EXPECT_DOUBLE_EQ(media({}), 0.0);
    EXPECT_DOUBLE_EQ(media({1.0, 2.0, 3.0}), 2.0);
}
