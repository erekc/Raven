#ifndef RAVEN_JEWELS_AND_STONES_H
#define RAVEN_JEWELS_AND_STONES_H

#include "raven.h"

class JewelsAndStones: public Raven<int> {
public:
    void solve() override;
    void read_input(std::string filename) override;
    void set_jewels(std::string jewels) { this->jewels = jewels; }
    std::string get_jewels() { return this->jewels; }
    void set_stones(std::string stones) { this->stones = stones; }
    std::string get_stones() { return this->stones; }
private:
    int jewels_and_stones(std::string jewels, std::string stones);
    std::string jewels;
    std::string stones;
};

#endif //RAVEN_JEWELS_AND_STONES_H
