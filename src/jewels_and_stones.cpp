#include "../include/jewels_and_stones.h"

void JewelsAndStones::read_input(std::string filename) {
    this->input_file.open(filename);
    if (this->input_file.is_open()) {
        std::cout << "File is open" << std::endl;
        this->input_file.close();
    }
    else std::cout << "Unable to open file" << std::endl;
}

void JewelsAndStones::solve() {
    std::cout << "This is the solve function for Jewels and Stones" << std::endl;
    int output;
    if (this->jewels.length() > 0 && this->stones.length() <= 50) {
        output = this->jewels_and_stones(this->jewels, this->stones);
        std::cout << "Input: jewels = \"" << this->jewels << "\", stones = \"" << this->stones << "\"" << std::endl;
        std::cout << "Output: " << output << std::endl;
    }
    else {
        std::cout << "Input couldn't be resolved." << std::endl;
    }
}

void JewelsAndStones::hello() {
    std::cout << "Welcome to Jewels And Stones" << std::endl;
}

int JewelsAndStones::jewels_and_stones(std::string jewels, std::string stones) {
    return 0;
}

int main() {
    JewelsAndStones jewelsAndStones;
    jewelsAndStones.read_input("../input/jewels_and_stones.txt");
    jewelsAndStones.solve();
}