//
// Name
// Date
// Beverages Survey Programming Project
// COSC 1030
//

#include <iostream>

int main() {
    // Initialize tally variables
    int coffeeTally = 0;
    int teaTally = 0;
    int cokeTally = 0;
    int orangeJuiceTally = 0;

    // Use a while loop to tally up each person's favorite
    char currentInput;

    while (currentInput != '?') {
        std::cout << "Please choose your favorite drink based on the numbers below." << std::endl;
        std::cout << "When all users have chosen, enter ? to view the results.\n" << std::endl;
    
        std::cout << "(1) Coffee" << std::endl;
        std::cout << "(2) Tea" << std::endl;
        std::cout << "(3) Coke" << std::endl;
        std::cout << "(4) Orange Juice" << std::endl;
        std::cout << "(?) View results" << std::endl;

        currentInput = std::cin.get();
        std::cin.ignore();

        if (currentInput == '1') { // Coffee
            coffeeTally++;
        } else if (currentInput == '2') { // Tea
            teaTally++;
        } else if (currentInput == '3') { // Coke
            cokeTally++;
        } else if (currentInput == '4') { // Orange Juice
            orangeJuiceTally++;
        }
    }

    std::cout << std::endl;

    // Display results
    std::cout << "Here are the results of the survey:" << std::endl;
    std::cout << "Coffee: " << coffeeTally << std::endl;
    std::cout << "Tea: " << teaTally << std::endl;
    std::cout << "Coke: " << cokeTally << std::endl;
    std::cout << "Orange Juice: " << orangeJuiceTally << std::endl;
}
