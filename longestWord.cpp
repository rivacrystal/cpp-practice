// File: longestWord.cpp
// Author: Riva A. Crystal
// Date: September 18, 2025
// String practice: Report longest word in a string

#include <iostream>
#include <string>
#include <sstream> // istringstream
#include <cctype> // std::isalnum

std::string cleanWord(const std::string& word) {
    std::string newWord = "";
    for (char c : word) { // for (size_t i = 0; i < word.size(); i++)
        if (std::isalnum(c)) {
            newWord += c;
        }
    }

    return newWord;
}

int main() {
    std::string s;
    std::cout << "Enter a sentence: ";
    getline(std::cin, s);

    std::istringstream iss(s);
    std::string word;
    std::string longest = ""; // variable with punctuation
    std::string longestClean = ""; // variable without punctuation

    while(iss >> word) {
        std::string clean = cleanWord(word);
        if (clean.length() > longestClean.length()) {
            longestClean = clean;
            longest = word; // keep this for result at end
        }
    }

    std::cout << "The longest word in this sentence is " << longest << std::endl;

    return 0;
}
