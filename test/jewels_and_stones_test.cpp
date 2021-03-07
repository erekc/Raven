#include "gtest/gtest.h"
#include "../include/jewels_and_stones.h"

class JewelsAndStonesTest : public ::testing::Test {
protected:
    JewelsAndStones jewels_and_stones;
};

TEST_F(JewelsAndStonesTest, Case1) {
    jewels_and_stones.set_jewels("aA");
    jewels_and_stones.set_stones("aAAbbbb");
    jewels_and_stones.solve();
    EXPECT_EQ(3, jewels_and_stones.get_output());
}
