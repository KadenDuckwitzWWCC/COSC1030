//
// Kaden Duckwitz
// 3/28/2025
// Chips and Salsa Programming Project
// COSC 1030
//

#include <string>
#include <iostream>

const int AMOUNT = 5;

int main()
{
    std::string salsaArray[AMOUNT] = {"mild", "medium", "sweet", "hot", "zesty"};
    int salesArray[AMOUNT] = {0, 0, 0, 0, 0};

    for (int i = 0; i < AMOUNT; i++)
    {
        std::cout << "How many jars of " << salsaArray[i] << " salsa did we sell last month? ";
        std::cin >> salesArray[i];
    }

    std::cout << std::endl;
    std::cout << "   Salsa Sales Report" << std::endl;
    std::cout << "Name\t\tJars Sold" << std::endl;
    std::cout << "--------------------------" << std::endl;

    for (int i = 0; i < AMOUNT; i++)
    {
        std::cout << salsaArray[i] << "\t\t" << salesArray[i] << std::endl;
    }

    std::cout << std::endl;
    
    int totalSales = 0;

    for (int sale : salesArray)
    {
        totalSales += sale;
    }

    std::cout << "Total Sales:\t" << totalSales << std::endl;

    int highestSellingIndex = 0;
    int lowestSellingIndex = 0;

    for (int i = 0; i < AMOUNT; i++)
    {
        if (salesArray[i] > salesArray[highestSellingIndex])
        {
            highestSellingIndex = i;
        }

        if (salesArray[i] < salesArray[lowestSellingIndex])
        {
            lowestSellingIndex = i;
        }
    }

    std::cout << "High Seller: " << salsaArray[highestSellingIndex] << std::endl;
    std::cout << "Low Seller: " << salsaArray[lowestSellingIndex] << std::endl;

    return 0;
}