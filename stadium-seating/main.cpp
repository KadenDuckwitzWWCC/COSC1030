//
// Kaden Duckwitz
// 2/6/2025
// Stadium Seating Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

// Define global constants - costs in dollars
const double CLASS_A_COST = 15.0;
const double CLASS_B_COST = 12.0;
const double CLASS_C_COST = 9.0;

int main() {
    // Initialize needed variables
    double ticketsSoldClassA, ticketsSoldClassB, ticketsSoldClassC;
    double incomeFromClassA, incomeFromClassB, incomeFromClassC;
    double totalIncome;

    // Read the amount of Class A tickets sold
    std::cout << "Please input the amount of Class A tickets that were sold: ";
    std::cin >> ticketsSoldClassA;

    // Read the amount of Class B tickets sold
    std::cout << "Please input the amount of Class B tickets that were sold: ";
    std::cin >> ticketsSoldClassB;

    // Read the amount of Class C tickets sold
    std::cout << "Please input the amount of Class C tickets that were sold: ";
    std::cin >> ticketsSoldClassC;

    // Calculate the income for the Class A tickets
    incomeFromClassA = ticketsSoldClassA * CLASS_A_COST;

    // Calculate the income for the Class B tickets
    incomeFromClassB = ticketsSoldClassB * CLASS_B_COST;

    // Calculate the income for the Class C tickets
    incomeFromClassC = ticketsSoldClassC * CLASS_C_COST;

    // Calculate the total income
    totalIncome = incomeFromClassA + incomeFromClassB + incomeFromClassC;

    // Display the total income using stream manipulators for formatting
    std::cout << "Total income earned: $";
    std::cout << std::setprecision(2) << std::fixed << std::showpoint << totalIncome << std::endl;
}