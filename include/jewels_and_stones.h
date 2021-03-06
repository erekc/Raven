#ifndef RAVEN_JEWELS_AND_STONES_H
#define RAVEN_JEWELS_AND_STONES_H

#include "raven.h"

class JewelsAndStones: public Raven {
public:
    void solve() override;
    void read_input(string filename) override;
    void hello();
private:
    string jewels;
    string stones;
};

#endif //RAVEN_JEWELS_AND_STONES_H
