// File: lengthFinder.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Count how many vowels are in a given string.


#include <iostream>
#include <string>

int main() {
    std::string s;
    int count = 0;

    std::cout << "Enter a word or sentence: ";
    std::getline(std::cin, s);

    for (char c : s) { // for (int i = 0; i < s.length(); ++i){ char c = s[i];
        c = std::tolower(c); // make string lower case so don't need to compare capitals
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { // check if c is vowel
            count++; // add if is
        }
    }

    std::cout << "Total vowel count is " << count << std::endl;

    return 0;
}
