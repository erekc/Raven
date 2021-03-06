#ifndef RAVEN_RAVEN_H
#define RAVEN_RAVEN_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Raven {
public:
    virtual void solve() = 0;
    virtual void read_input(string filename) = 0;

protected:
    ifstream input_file;
};

#endif //RAVEN_RAVEN_H
