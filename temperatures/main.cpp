//
// Kaden Duckwitz
// 3/28/2025
// Temperatures
// COSC 1030
//

#include <iostream>
#include <iomanip>

double calculateAverage(double [], int);
double calculateHighestTemp(double [], int);
double calculateLowestTemp(double [], int);

int main()
{
    int numberOfTemperatures;

    std::cout << "Please input how many temperatures you would like to read: ";
    std::cin >> numberOfTemperatures;

    while (numberOfTemperatures > 50)
    {
        std::cout << std::endl;
        std::cout << "You can't input more than 50 temperatures! Please try again." << std::endl;
        std::cout << "Please input how many temperatures you would like to read: ";
        std::cin >> numberOfTemperatures;
    }

    typedef double TempArray[numberOfTemperatures];
    TempArray tempArr;

    std::cout << std::endl;

    for (int i = 0; i < numberOfTemperatures; i++)
    {
        std::cout << "Please input the temperature for day " << (i + 1) << ": ";
        std::cin >> tempArr[i];
    }

    double average = calculateAverage(tempArr, numberOfTemperatures);
    double highest = calculateHighestTemp(tempArr, numberOfTemperatures);
    double lowest = calculateLowestTemp(tempArr, numberOfTemperatures);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << std::endl;
    std::cout << "Average temperature: " << average << std::endl;
    std::cout << "Highest temperature: " << highest << std::endl;
    std::cout << "Lowest temperature: " << lowest << std::endl;
}

double calculateAverage(double tempArr[], int size)
{
    double total = 0.0;

    for (int i = 0; i < size; i++)
    {
        total += tempArr[i];
    }

    return total / size;
}

double calculateHighestTemp(double tempArr[], int size)
{
    double highest = tempArr[0];

    for (int i = 0; i < size; i++)
    {
        if (tempArr[i] > highest)
        {
            highest = tempArr[i];
        }
    }

    return highest;
}

double calculateLowestTemp(double tempArr[], int size)
{
    double lowest = tempArr[0];

    for (int i = 0; i < size; i++)
    {
        if (tempArr[i] < lowest)
        {
            lowest = tempArr[i];
        }
    }

    return lowest;
}