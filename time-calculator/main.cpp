//
// Kaden Duckwitz
// 2/14/2025
// Time Calculator Programming Project
// COSC 1030
//

#include <iostream>

int main() {
    // Gather the seconds as input
    double seconds;

    std::cout << "Enter a number of seconds: ";
    std::cin >> seconds;

    // Determine what to convert to
    if (seconds >= 60) {
        double minutes = seconds / 60; // Convert to minutes
        std::cout << "There are " << minutes << " minutes in " << seconds << " seconds." << std::endl;
    }

    if (seconds >= 3600) {
        double hours = seconds / 3600; // Convert to hours
        std::cout << "There are " << hours << " hours in " << seconds << " seconds." << std::endl;
    }

    if (seconds >= 86400) {
        double days = seconds / 86400; // Convert to days
        std::cout << "There are " << days << " days in " << seconds << " seconds." << std::endl;
    }
}