#include "../../include/hello.h"

int main() {
    Hello hello;
    hello.read_input("../input/hello.txt");
    hello.solve();
    return 0;
}