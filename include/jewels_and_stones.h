#ifndef RAVEN_JEWELS_AND_STONES_H
#define RAVEN_JEWELS_AND_STONES_H

#include "raven.h"

class JewelsAndStones: public Raven<int> {
public:
    void solve() override;
    void read_input(std::string filename) override;
private:
    int jewels_and_stones(std::string jewels, std::string stones);
    std::string jewels;
    std::string stones;
};

#endif //RAVEN_JEWELS_AND_STONES_H
