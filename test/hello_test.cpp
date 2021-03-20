#include "gtest/gtest.h"
#include "../include/hello.h"

class HelloTest: public ::testing::Test {
protected:
    Hello hello;
};