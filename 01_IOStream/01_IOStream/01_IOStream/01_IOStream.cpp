//
//  01_IOStream.cpp
//  01_IOStream
//
//  Created by Fabio Marcos De Abreu Santos on 9/2/23.
//

#include "01_IOStream.hpp"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void resetInput()
{
    // clear error flags
    cin.clear();
    // ignore(extract and discard) values that we don't want on the stream
    cin.ignore(10000, '\n');
}

void example1() {
    //  Reading and printing an integer:
    int num;
    cout << "Enter a number: ";
    cin >> num;
    resetInput();
    cout << "You entered: " << num << endl;
}



void example2() {
    // Reading and printing a floating-point number:
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    resetInput();
    cout << fixed << "You entered: " << num << endl;
}

void example3() {
    // Reading and printing a string:
    string name;
    cout << "Enter your name: ";
    cin >> name;
    resetInput();
    cout << "Hello, " << name << "!" << endl;
}

void example4() {
    // Formatting cout with width and precision:
    double value = 3.14159;
    cout << "Formatted value: " << fixed << setprecision(2) << setw(10) << value << endl;
}

void example5() {
    // Reading and printing multiple values on the same line:
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    resetInput();
    cout << "You entered: " << num1 << " and " << num2 << endl;
}

int main() {
    example1();
    example2();
    example3();
    example4();
    example5();
    return 0;
}
