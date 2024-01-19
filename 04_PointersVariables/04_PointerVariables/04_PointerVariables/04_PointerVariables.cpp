//
//  04_PointerVariables.cpp
//  04_PointerVariables
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//

#include "04_PointerVariables.hpp"
#include <iostream>

using namespace std;

void demoDynamicAllocation()
{

    int* dynamicNum = new int;  // Dynamically allocate memory for an integer

    *dynamicNum = 5;  // Assign a value to the dynamically allocated integer

    std::cout << "Value of dynamicNum: " << *dynamicNum << std::endl;

    delete dynamicNum;  // Deallocate the dynamically allocated memory
}

void demoPointerVariable()
{
    int num = 10;  // Declare and initialize a variable
    int* ptr;     // Declare a pointer variable

    ptr = &num;   // Assign the address of 'num' to 'ptr'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

}

void demoArraysAndPointers() {
    int array[] = { 1, 2, 3, 4, 5 };
    int* ptr = &array[0];
    std::cout << ptr << std::endl;
    // Manipulating the array using array itself
    array[2] = 10;
    std::cout << "Array after modification: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // Manipulating the array using pointer
    std::cout << *(ptr + 3) << std::endl;
    *(ptr + 3) = 8;
    
    std::cout << "Array after pointer manipulation: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
        if ((ptr + i) == &array[i]) {
            std::cout << "(Match) ";
        }
        else {
            std::cout << "(Mismatch) ";
            std::cout << (ptr + i) << std::endl;
            std::cout << &array[i] << std::endl;
        }
    }
    std::cout << std::endl;

}

int main() {
    demoPointerVariable();
    demoDynamicAllocation();
    demoArraysAndPointers();
    
    return 0;
}

