//
// Kaden Duckwitz
// 3/15/2025
// Markup Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

double calculateRetail(double, double);

int main() {
    double wholesaleCost, markupPercentage;

    std::cout << "Enter the item's wholesale cost: ";
    std::cin >> wholesaleCost;

    while (wholesaleCost < 0) {
        std::cout << "Enter a non-negative value: ";
        std::cin >> wholesaleCost;
    }

    std::cout << "Enter the item's markup percentage: ";
    std::cin >> markupPercentage;

    while (markupPercentage < 0) {
        std::cout << "Enter a non-negative value: ";
        std::cin >> markupPercentage;
    }

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The retail price is $" << retailPrice << std::endl;
}

double calculateRetail(double wholesaleCost, double markupPercentage) {
    double addedCost = wholesaleCost * (markupPercentage / 100);

    return wholesaleCost + addedCost;
}