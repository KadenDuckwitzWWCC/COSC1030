//
// Kaden Duckwitz
// 1/29/25
// Restaurant Bill Programming Project
// COSC 1030
//

#include <iostream>
using namespace std;

// Variable declarations
double purchaseAmount;
double salesTax;
double tip;
double total;

// Constants for the tax rate and tip percentage
const double TAX_RATE = 0.0675;
const double TIP_PERCENTAGE = 0.20;

int main() {
    // Get the amount of the purchase.
    purchaseAmount = 88.67;
    // Calculate the sales tax.
    salesTax = purchaseAmount * TAX_RATE;
    // Calculate the tip.
    tip = purchaseAmount * TIP_PERCENTAGE;
    // Calculate the total of the sale.
    total = purchaseAmount + salesTax + tip;
    // Print information about the sale.
    cout << "Meal cost: " << purchaseAmount << endl;
    cout << "Tax amount: " << salesTax << endl;
    cout << "Tip amount: " << tip << endl;
    cout << "Total bill: " << total << endl;
}