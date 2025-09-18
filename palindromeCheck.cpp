// File: palindromeCheck.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Check if palindrome


#include <iostream>
#include <string>
#include <algorithm> // std::transform
#include <cctype> // std::tolower

int main() {
    std::string s;
    std::cout << "Enter a word or sentence: ";
    getline(std::cin, s);

    // turn string into lowercase
    std::transform(s.begin(), s.end(), s.begin(), ::tolower); // std::transform: first, last, d_first, unary_op

    if (equal(s.begin(), s.begin() + s.size()/2, s.rbegin())) { // equal: first, begin + 1/2size = 1/2 length, begin at end of string
        std::cout << "This is a palindrome." << std::endl;
    } else {
        std::cout << "This is not a palindrome." << std::endl;
    }




    return 0;
}
