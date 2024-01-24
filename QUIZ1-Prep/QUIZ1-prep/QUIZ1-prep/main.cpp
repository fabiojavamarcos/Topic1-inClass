//
//  main.cpp
//  QUIZ1-prep
//
//  Created by Fabio Marcos De Abreu Santos on 1/24/24.
//

#include <iostream>

// Function to take 5 numbers from the user and store them in an array
void takeInput(float arr[], int size) {
    std::cout << "Enter 5 numbers: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
}

// Function to calculate average, minimum, and maximum values of an array using pointers
void calculateStats(float arr[], int size, float& average, float& minimum, float& maximum) {
    
    float *ptr = &arr[0];
    if (size == 0) {
        average = 0;
        minimum = 0;
        maximum = 0;
        return;
    }

    // Initialize variables for calculations
    float sum = 0;
    //minimum = arr[0];
    minimum = *ptr;
    maximum = arr[0];

    // Calculate sum, minimum, and maximum
    for (int i = 0; i < size; i++) {
        //sum += arr[i];
        sum += *(ptr +1);
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    
    // Calculate average
    average = sum / size;
}

int main() {
    const int size = 5;
    float numbers[size];
    float avg, min, max;

    // Call the function to take user input
    takeInput(numbers, size);

    // Call the function to calculate statistics
    calculateStats(numbers, size, avg, min, max);

    // Display the results
    std::cout << "Average: " << avg << std::endl;
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maximum: " << max << std::endl;

    return 0;
}

