#include <gtest/gtest.h>
#include "math_utils.hpp"

TEST(MathUtilsTest, AddTest) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(MathUtilsTest, SubtractTest) {
    EXPECT_EQ(subtract(5, 3), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
