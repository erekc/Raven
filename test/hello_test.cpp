#include "gtest/gtest.h"
#include "../include/hello.h"

class HelloTest: public ::testing::Test {
protected:
    Hello hello;
};

TEST_F(HelloTest, hello_world) {
    hello.set_input("Hello World!");
    hello.solve();
    EXPECT_TRUE(hello.get_output() == "Hello World!");
}