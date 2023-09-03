//
//  03_ByValueByReference.cpp
//  03_ByValueByReference.cpp
//
//  Created by Fabio Marcos De Abreu Santos on 9/2/23.
//

#include "03_ByValueByReference.hpp"

#include <iostream>
#include <string>
#include <vector>

// Pass by value with integer
void incrementValue(int num) {
    num++;
    std::cout << "Inside incrementValue: " << num << std::endl;
}

// Pass by reference with integer
void incrementValueRef(int& num) {
    num++;
    std::cout << "Inside incrementValueRef: " << num << std::endl;
}

// Pass by value with string
void modifyString(std::string str) {
    str += " World!";
    std::cout << "Inside modifyString: " << str << std::endl;
}

// Pass by reference with string
void modifyStringRef(std::string& str) {
    str += " World!";
    std::cout << "Inside modifyStringRef: " << str << std::endl;
}

// Pass by value with vector
void modifyVector(std::vector<int> vec) {
    vec.push_back(4);
    std::cout << "Inside modifyVector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Pass by reference with vector
void modifyVectorRef(std::vector<int>& vec) {
    vec.push_back(4);
    std::cout << "Inside modifyVectorRef: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Integer examples
    int number = 10;
    incrementValue(number);
    std::cout << "After incrementValue: " << number << std::endl;

    incrementValueRef(number);
    std::cout << "After incrementValueRef: " << number << std::endl;

    std::cout << std::endl;

    // String examples
    std::string message = "Hello";
    modifyString(message);
    std::cout << "After modifyString: " << message << std::endl;

    modifyStringRef(message);
    std::cout << "After modifyStringRef: " << message << std::endl;

    std::cout << std::endl;

    // Vector examples
    std::vector<int> numbers = { 1, 2, 3 };
    modifyVector(numbers);
    std::cout << "After modifyVector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    modifyVectorRef(numbers);
    std::cout << "After modifyVectorRef: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
