#include "../../include/jewels_and_stones.h"

void JewelsAndStones::read_input(std::string filename) {
    this->input_file.open(filename);
    if (this->input_file.is_open()) {
        std::getline(this->input_file, this->jewels);
        std::getline(this->input_file, this->stones);
        std::cout << "Jewels: " << this->jewels << ", Stones: " << this->stones << std::endl;
        this->input_file.close();
    }
    else std::cout << "Unable to open file" << std::endl;
}

void JewelsAndStones::solve() {
    std::cout << "This is the solve function for Jewels and Stones" << std::endl;
    if (this->jewels.length() > 0 && this->stones.length() <= 50) {
        this->output = this->jewels_and_stones(this->jewels, this->stones);
        std::cout << "Input: jewels = \"" << this->jewels << "\", stones = \"" << this->stones << "\"" << std::endl;
        std::cout << "Output: " << this->output << std::endl;
    }
    else {
        std::cout << "Input couldn't be resolved." << std::endl;
    }
}

int JewelsAndStones::jewels_and_stones(std::string jewels, std::string stones) {
    int numJewels = 0;
    for (int i = 0; i < stones.length(); i++) {
        if (jewels.find(stones[i]) != std::string::npos) {
            numJewels++;
        }
    }
    return numJewels;
}