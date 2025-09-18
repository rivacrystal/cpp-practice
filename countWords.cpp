// File: countWords.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Count the words in a string

#include <iostream>
#include <string>
#include <sstream> // std::istringstream

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    getline(std::cin, s);

    std::istringstream iss(s); // istringstream creates a stream with whitespace as delimiter
    std::string word;
    int count = 0;

    while (iss >> word) {
        count++;
    }

    if (count == 1) {
        std::cout << "There is 1 word in the sentence." << std::endl;
    } else {
        std::cout << "There are " << count << " words in the sentence." << std::endl;
    }

    return 0;
}
