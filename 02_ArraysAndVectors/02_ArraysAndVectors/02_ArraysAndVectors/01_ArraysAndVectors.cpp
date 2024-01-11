//
//  01_ArraysAndVectors.cpp
//  02_ArraysAndVectors
//
//  Created by Fabio Marcos De Abreu Santos on 9/2/23.
//

#include "01_ArraysAndVectors.hpp"
#include <iostream>
#include <vector>

using namespace std;

// Example 1: Using an array
void arrayExample() {
    // Declare an array of integers
    int numbers[5];

    // Initialize the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the array elements
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

// Example 2: Using a vector
void vectorExample() {
    // Declare a vector of strings
    vector<string> fruits;

    // Add elements to the vector
    fruits.push_back("Apple");
    fruits.push_back("Banana");
    fruits.push_back("Orange");

    // Print the vector elements
    cout << "Vector elements: ";
    for (auto &fruit : fruits) {
        cout << fruit << " ";
        fruit = "pineapple";
    }
    cout << endl;
}

// Example 3: Using a 2D array
void twoDArrayExample() {
    // Declare a 2D array of integers
    int matrix[3][3];

    // Initialize the 2D array elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = (i + 1) * (j + 1);
        }
    }

    // Print the 2D array elements
    cout << "2D Array elements: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

#include <iostream>
#include <vector>

using namespace std;

// Example 1: Overstepping the bounds of an array
void arrayOutOfBoundsExample() {
    int numbers[] = { 1, 2, 3, 4, 5 };

    // Accessing an element outside the bounds of the array
    int value = numbers[10];  // Accessing index 10, which is out of bounds

    // This will lead to undefined behavior and may crash the program
    cout << "Value: " << value << endl;
}

// Example 2: Incorrect usage of a vector
void incorrectVectorUsageExample() {
    vector<int> numbers;
    //vector<int> numbers{ 10, 20, 30 };
  
    //vector<int> vect2(numbers.begin(), numbers.end());

    // Attempting to access an element without adding any elements to the vector
    int value = numbers[5];  // Accessing an empty vector

    // This will lead to undefined behavior and may crash the program
    cout << "Value: " << value << endl;
}



int main() {
    // Example 1: Using an array
    arrayExample();

    // Example 2: Using a vector
    vectorExample();

    // Example 3: Using a 2D array
    twoDArrayExample();

    // Example 4: Overstepping the bounds of an array
    arrayOutOfBoundsExample();

    // Example 5: Incorrect usage of a vector
    incorrectVectorUsageExample();


    return 0;
}
