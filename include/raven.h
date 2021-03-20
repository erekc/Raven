#ifndef RAVEN_RAVEN_H
#define RAVEN_RAVEN_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

template <class T>
class Raven {
public:
    virtual void solve() = 0;
    virtual void read_input(std::string filename) = 0;
    T get_output() { return output; }
protected:
    std::ifstream input_file;
    T output;
};

#endif //RAVEN_RAVEN_H
