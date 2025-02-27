//
// Kaden Duckwitz
// 2/26/2025
// Change for a Dollar Game Programming Project
// COSC 1030
//

#include <iostream>

int main() {
    // Gather input
    int penniesAmount = 0, nickelAmount = 0, dimeAmount = 0, quarterAmount = 0;

    std::cout << "Welcome to the change-counting game!" << std::endl;
    std::cout << "Your goal is to make exactly one dollar out of pennies, nickels, dimes, and quarters.\n" << std::endl;

    std::cout << "Please enter the amount of pennies: ";
    std::cin >> penniesAmount;

    std::cout << "Please enter the amount of nickels: ";
    std::cin >> nickelAmount;

    std::cout << "Please enter the amount of dimes: ";
    std::cin >> dimeAmount;

    std::cout << "Please enter the amount of quarters: ";
    std::cin >> quarterAmount;

    // Convert higher value coins to the amount of pennies they are worth
    nickelAmount *= 5;
    dimeAmount *= 10;
    quarterAmount *= 25;

    // If all the coins add up to 100 (100 pennies), the user wins
    int totalPennyAmount = penniesAmount + nickelAmount + dimeAmount + quarterAmount;

    std::cout << std::endl;

    if (totalPennyAmount == 100) {
        std::cout << "You win the game! Your coins added up to $1.00." << std::endl;
    } else if (totalPennyAmount > 100) {
        std::cout << "You lost the game! Your coins added up were greater than $1.00." << std::endl;
    } else {
        std::cout << "You lost the game! Your coins added up were less than $1.00." << std::endl;
    }
}