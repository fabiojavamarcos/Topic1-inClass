//
//  07_StringExample.cpp
//  07_StringExamples.cpp
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//


#include <iostream>
#include <string>

#include "07_StringExample.hpp"

int main() {
    std::string message = "Hello, world!";

    // Accessing and modifying the string object
    std::cout << "Original message: " << message << std::endl;

    message += " Welcome to the world of strings!"; // Appending to the string
    std::cout << "Updated message: " << message << std::endl;

    // Accessing individual characters in the string
    char firstChar = message[0];
    char lastChar = message[message.length() - 1];

    std::cout << "First character of the message: " << firstChar << std::endl;
    std::cout << "Last character of the message: " << lastChar << std::endl;

    // Getting the length of the string
    std::cout << "Length of the message: " << message.length() << std::endl;

    // Checking if the string is empty
    if (message.empty()) {
        std::cout << "The message is empty." << std::endl;
    }
    else {
        std::cout << "The message is not empty." << std::endl;
    }

    // Extracting a substring
    std::string substring = message.substr(7, 5); // Extracting "world" starting from index 7 (inclusive) with length 5
    std::cout << "Extracted substring: " << substring << std::endl;

    // String concatenation
    std::string greeting = "Welcome";
    std::string fullName = greeting + " to the world of strings!"; // Concatenating two strings using the + operator

    std::cout << "Full message: " << fullName << std::endl;

    return 0;
}
