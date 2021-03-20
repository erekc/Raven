#ifndef RAVEN_HELLO_H
#define RAVEN_HELLO_H

#include "raven.h"

class Hello: public Raven<std::string> {
public:
    void solve() override;
    void read_input(std::string filename) override;
    void set_input(std::string input) { this->input = input; }
private:
    std::string hello(std::string input);
    std::string input;
};

#endif //RAVEN_HELLO_H
