//
//  06_MathExamples.cpp
//  06_MathExamples
//
//  Created by Fabio Marcos De Abreu Santos on 9/3/23.
//

#include "06_MathExamples.hpp"

#define _USE_MATH_DEFINES
#include <cmath>  // Required for math functions

#include <iostream>

// Function to calculate the absolute value of a number
int calculateAbsoluteValue(int num) {
    return abs(num);
}

// Function to calculate the square root of a number
double calculateSquareRoot(double num) {
    return sqrt(num);
}

// Function to calculate the power of a base raised to an exponent
double calculatePower(double base, double exponent) {
    return pow(base, exponent);
}

// Function to calculate the sine, cosine, and tangent of an angle (in degrees)
void calculateTrigonometric(double angle) {
    double radianAngle = angle * M_PI / 180.0;  // Converting to Radians

    double sine = sin(radianAngle);
    double cosine = cos(radianAngle);
    double tangent = tan(radianAngle);

    std::cout << "Sine of " << angle << " degrees is " << sine << std::endl;
    std::cout << "Cosine of " << angle << " degrees is " << cosine << std::endl;
    std::cout << "Tangent of " << angle << " degrees is " << tangent << std::endl;
}

// Function to round a number and calculate its ceiling and floor values
void roundNumber(double num) {
    double roundedNum = round(num);
    double ceilNum = ceil(num);
    double floorNum = floor(num);

    std::cout << "Rounded value of " << num << " is " << roundedNum << std::endl;
    std::cout << "Ceiling value of " << num << " is " << ceilNum << std::endl;
    std::cout << "Floor value of " << num << " is " << floorNum << std::endl;
}

int main() {
    int num = -5;
    int absNum = calculateAbsoluteValue(num);

    std::cout << "Absolute value of " << num << " is " << absNum << std::endl;

    double sqrtNum = calculateSquareRoot(25.0);
    std::cout << "Square root of 25.0 is " << sqrtNum << std::endl;

    double powerResult = calculatePower(2.0, 3.0);
    std::cout << "2.0 raised to the power of 3.0 is " << powerResult << std::endl;

    calculateTrigonometric(45.0);

    roundNumber(3.6);

    return 0;
}
