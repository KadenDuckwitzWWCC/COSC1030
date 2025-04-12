//
// Kaden Duckwitz
// 4/11/25
// Monthly Sales Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

double calculateYearlySum(double *);
double calculateAverage(double *);

int numberOfSales;

int main()
{
    std::cout << "Please input the number of monthly sales you will be inputting: ";
    std::cin >> numberOfSales;

    while (numberOfSales <= 0)
    {
        std::cout << std::endl;
        std::cout << "Sales amount must be above 0! Please try again.";
        std::cout << "Please input the number of monthly sales you will be inputting: ";
        std::cin >> numberOfSales;
    }

    std::cout << std::endl;

    double *salesArr = new double[numberOfSales];

    for (int i = 0; i < numberOfSales; i++)
    {
        std::cout << "Please input the sales total for month " << (i + 1) << ": ";
        std::cin >> salesArr[i];
        std::cout << std::endl;
    }

    double yearlySum = calculateYearlySum(salesArr);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your yearly sum is: " << yearlySum << std::endl;

    double average = calculateAverage(salesArr);

    std::cout << "Your yearly sales average is: " << average << std::endl;
}

double calculateYearlySum(double *salesArr)
{
    double sum = 0.0;

    for (int i = 0; i < numberOfSales; i++)
    {
        sum += salesArr[i];
    }

    return sum;
}

double calculateAverage(double *salesArr)
{
    return calculateYearlySum(salesArr) / numberOfSales;
}