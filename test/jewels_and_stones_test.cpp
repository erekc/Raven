#include "gtest/gtest.h"
#include "../include/jewels_and_stones.h"

class JewelsAndStonesTest : public ::testing::Test {
protected:
    JewelsAndStones jewels_and_stones;
};

TEST_F(JewelsAndStonesTest, Case1) {
    EXPECT_EQ(1, 1);
}
