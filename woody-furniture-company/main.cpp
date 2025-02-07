//
// Kaden Duckwitz
// 2/6/2025
// Woody Furniture Company Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

// Define global constants - price per chair in dollars
const double AMERICAN_COLONIAL_COST = 85.00;
const double MODERN_COST = 57.50;
const double FRENCH_CLASSICAL_COST = 127.75;

int main() {
    // Define needed variables
    double chairsSoldAmericanColonial, chairsSoldModern, chairsSoldFrenchClassical;
    double profitAmericanColonial, profitModern, profitFrenchClassical;
    double totalProfit;

    // Read how many chairs were sold of each type
    std::cout << "Please input the amount of American Colonial chairs that were sold: ";
    std::cin >> chairsSoldAmericanColonial;

    std::cout << "Please input the amount of Modern chairs that were sold: ";
    std::cin >> chairsSoldModern;

    std::cout << "Please input the amount of French Classical chairs that were sold: ";
    std::cin >> chairsSoldFrenchClassical;
    
    // Calculate the profit of all three types
    profitAmericanColonial = chairsSoldAmericanColonial * AMERICAN_COLONIAL_COST;

    profitModern = chairsSoldModern * MODERN_COST;

    profitFrenchClassical = chairsSoldFrenchClassical * FRENCH_CLASSICAL_COST;

    // Print all three sale profit variables
    std::cout << "Profit made from American Colonial chairs: $";
    std::cout << std::setprecision(2) << std::fixed << profitAmericanColonial << std::endl;

    std::cout << "Profit made from Modern chairs: $";
    std::cout << std::setprecision(2) << std::fixed << profitModern << std::endl;

    std::cout << "Profit made from French Classical chairs: $";
    std::cout << std::setprecision(2) << std::fixed << profitFrenchClassical << std::endl;

    // Calculate the total profit
    totalProfit = profitAmericanColonial + profitModern + profitFrenchClassical;

    // Print the total profit
    std::cout << "Total profit made of all chairs: $";
    std::cout << std::setprecision(2) << std::fixed << totalProfit << std::endl;
}