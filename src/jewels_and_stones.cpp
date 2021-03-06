#include "../include/jewels_and_stones.h"

void JewelsAndStones::read_input(string filename) {
    this->input_file.open(filename);
    if (this->input_file.is_open()) {
        cout << "File is open" << endl;
    }
    else cout << "Unable to open file" << endl;
}

void JewelsAndStones::solve() {
    cout << "This is the solve function for Jewels and Stones" << endl;
}

void JewelsAndStones::hello() {
    cout << "Welcome to Jewels And Stones" << endl;
}

int main() {
    JewelsAndStones jewelsAndStones;
    jewelsAndStones.read_input("../input/jewels_and_stones.txt");
    jewelsAndStones.solve();
}