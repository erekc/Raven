#include "../../include/hello.h"

void Hello::read_input(std::string filename) {
    this->input_file.open(filename);
    if (this->input_file.is_open()) {
        std::getline(this->input_file, this->input);
        this->input_file.close();
    }
    else {
        std::cout << "Unable to open file" << std::endl;
    }
}

std::string Hello::hello(std::string hello) {
    return hello;
}

void Hello::solve() {
    this->output = this->hello(this->input);
    std::cout << this->output << std::endl;
    std::cout << "Welcome to Raven! An interactive sandbox for solving algo puzzles!" << std::endl;
}

