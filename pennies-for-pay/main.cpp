//
// Kaden Duckwitz
// 2/26/2025
// Pennies for Pay Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

int main() {
    // Formatting
    std::cout << std::fixed << std::setprecision(2) << std::endl;

    // Gather input - number of days worked
    int numberOfDays = 0;

    while (numberOfDays < 1) { // Input validation: No input less than 1
        std::cout << "Please enter the amount of days worked: ";
        std::cin >> numberOfDays;
    }

    // Initialize days passed, and penny total amount
    int amountOfDaysPassed = 1;
    double pennyTotal = 1;

    std::cout << std::endl;

    // Start the table
    std::cout << "---------------------------" << std::endl;
    std::cout << "Days Worked\tPennies Earned" << std::endl;

    // Start with day 1
    std::cout << amountOfDaysPassed << "\t\t" << "$" << (pennyTotal / 100) << std::endl;

    // Continue, doubling the penny amount each day
    while (amountOfDaysPassed < numberOfDays) {
        amountOfDaysPassed++;

        pennyTotal *= 2;

        std::cout << amountOfDaysPassed << "\t\t" << "$" << (pennyTotal / 100) << std::endl;
    }

    // End the table
    std::cout << "---------------------------" << std::endl;

    std::cout << std::endl;

    // Display the total earned
    std::cout << "Total dollar amount earned: " << "$" << (pennyTotal / 100) << std::endl;
}