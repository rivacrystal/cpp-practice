// File: countFrequencyOfChar.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Count the frequency of a char in a string

#include <iostream>
#include <string>
#include <cctype> // std::tolower, std::isalpha

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    getline(std::cin, s);

    std::string vowels = "aeiou";
    int vowel = 0;
    int consonant = 0;

    for (char c : s) {
        c = std::tolower(c);

        if (std::isalpha(c)) {
            if (vowels.find(c) != std::string::npos) { // if char c is not equal to anything in "aeiou"
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    std::cout << "Vowels: " << vowel << ", Consonants: " << consonant << std::endl;

    return 0;
}
