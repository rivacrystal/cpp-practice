// File: substringLocator.cpp
// Author: Riva A. Crystal
// Date: September 19, 2025
// String practice: Looks to see if second sentence is a substring of first string

#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    std::cout << "Enter the first sentence: ";
    std::getline(std::cin, str1);
    std::cout << "Enter second sentence: ";
    std::getline(std::cin, str2);

    if (str1.find(str2) != std::string::npos) { // find() search for instance within
        std::cout << "\"" << str2 << "\" is a substring of \"" << str1 << "\"." << std::endl;
    } else {
        std::cout << "\"" << str2 << "\" is not a substring of \"" << str1 << "\"." << std::endl;
    }

    return 0;
}
