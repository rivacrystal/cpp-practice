// File: wordReversal.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Reverse a string

#include <iostream>
#include <string>
#include <algorithm> // std::reverse

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    getline(std::cin, s);


/**
 *  std::reverse swaps each character with ++begin and --end
 *  ex: HELLO
 *  1st iteration: OELLH
 *  2nd iteration: OLLEH
 */
    std::reverse(s.begin(), s.end());

    std::cout << "Reversed sentence: " << s << std::endl;

    return 0;
}
