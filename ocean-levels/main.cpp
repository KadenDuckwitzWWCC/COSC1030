//
// Kaden Duckwitz
// 1/30/25
// Ocean Levels Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Define global constants
const double OCEAN_LEVEL_RISING_RATE = 1.5;

int main() {
    // Calculate the amount higher the ocean will be in 5 years
    double mmHigherIn5Years = OCEAN_LEVEL_RISING_RATE * 5;
    // Calculate the amount higher the ocean will be in 7 years
    double mmHigherIn7Years = OCEAN_LEVEL_RISING_RATE * 7;
    // Calculate the amount higher the ocean will be in 10 years
    double mmHigherIn10Years = OCEAN_LEVEL_RISING_RATE * 10;

    // Display the predicted rise amount of the ocean in 5, 7, and 10 years
    cout << "Millimeters higher the ocean will rise in 5 years: " << mmHigherIn5Years << endl;
    cout << "Millimeters higher the ocean will rise in 7 years: " << mmHigherIn7Years << endl;
    cout << "Millimeters higher the ocean will rise in 10 years: " << mmHigherIn10Years << endl;
}