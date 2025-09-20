// File: substringExtraction.cpp
// Author: Riva A. Crystal
// Date: September 20, 2025
// String Practic: Ask for a string and two indices, then print the substring

#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    int ind1, ind2;
    std::cout << "Enter two indices (start and end): ";
    std::cin >> ind1 >> ind2;

    if ((ind1 < 0) || (ind2 >= s.size()) || (ind1 > ind2)) {
        std::cout << "Invalid indices." << std::endl;
        return 1;
    }

    std::string sub = s.substr(ind1, ind2 - ind1 + 1); // substr(pos, len)

    std::cout << "Substring: " << sub << std::endl;

    return 0;
}
