//
//  main.cpp
//  QUIZ_prep2
//
//  Created by Fabio Marcos De Abreu Santos on 1/24/24.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to generate and store 5 random numbers in an array
void generateRandomNumbers(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // Generating random numbers between 0 and 99
    }
}

// Function to check if a number is in the array
bool isNumberInArray(int* arr, int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

int main() {
    const int size = 5;
    int numbers[size];
    int guess;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Generate and store random numbers in the array
    generateRandomNumbers(numbers, size);

    // Ask the user to guess a number
    std::cout << "Guess a number between 0 and 99: ";
    std::cin >> guess;

    // Check if the guessed number is in the array
    if (isNumberInArray(numbers, size, guess)) {
        std::cout << "You found it!" << std::endl;
    } else {
        std::cout << "Sorry, the number is not in the array." << std::endl;
    }

    return 0;
}
