// File: capitalization.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Capitalize a sentence


#include <iostream>
#include <string>
#include <cctype> // std::toupper

int main() {
    std::string s;

    std::cout << "Enter a word or sentence: ";
    getline(std::cin, s);

    for (char& c : s) { // pass by reference because modifying; char c does nothing, just reads
        c = std::toupper(c);
    }
    
    std::cout << "Uppercase version: " << s << std::endl;

    return 0;
}
