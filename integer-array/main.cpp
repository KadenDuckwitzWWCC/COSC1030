//
// Kaden Duckwitz
// 4/3/2025
// Integer Array
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

void selectionSort(int []);
int binarySearch(int [], int);
double calculateMean(int []);
void printOutputToFile(int [], int [], int, int, double);

int arraySize;

int main()
{
    std::string filePath;

    std::cout << "This program works with a file." << std::endl;

    std::cout << std::endl;

    std::cout << "The file should follow the following format:" << std::endl;
    std::cout << "- The first line should contain the size of the array" << std::endl;
    std::cout << "- The second line should contain the integer to search for in the array" << std::endl;
    std::cout << "- The third line should contain the integer array elements, separated by spaces" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "With these requirements in mind, please enter the path of the file you are using: ";
    std::cin >> filePath;

    std::cout << std::endl;
    
    std::cout << "Loading file " << filePath << "..." << std::endl;

    std::ifstream inputStream("array-details.txt");
    std::string currentWord;
    int wordIndex = 0;
    int numberToSearchFor;

    while (wordIndex < 2 && inputStream >> currentWord)
    {
        int currentNumber = std::stoi(currentWord);

        switch (wordIndex)
        {
            case 0:
                arraySize = currentNumber;

                if (arraySize < 1 || arraySize > 50)
                {
                    std::cout << "Array size must be between 1 and 50! Please edit the file and try again." << std::endl;
                    return 1;
                }

                break;
            case 1:
                numberToSearchFor = currentNumber;
                break;
        }
        
        wordIndex++;
    }

    int integerArray[arraySize];

    while (inputStream >> currentWord)
    {
        int currentNumber = std::stoi(currentWord);
        integerArray[wordIndex - 2] = currentNumber;
        wordIndex++;
    }

    inputStream.close();

    int originalIntegerArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        originalIntegerArray[i] = integerArray[i];
    }

    selectionSort(integerArray);
    int indexOfNumFound = binarySearch(integerArray, numberToSearchFor);
    double mean = calculateMean(integerArray);

    printOutputToFile(integerArray, originalIntegerArray, numberToSearchFor, indexOfNumFound, mean);

    std::cout << "Calculations complete! The results were sent to a file titled output.txt!" << std::endl;

    return 0;
}

void selectionSort(int integerArray[])
{
    for (int i = 0; i < arraySize; i++)
    {
        int minimumIndex = i;

        for (int j = i + 1; j < arraySize; j++)
        {
            if (integerArray[j] < integerArray[minimumIndex])
            {
                minimumIndex = j;
            }
        }

        int temp = integerArray[i];
        integerArray[i] = integerArray[minimumIndex];
        integerArray[minimumIndex] = temp;
    }
}

int binarySearch(int integerArray[], int targetValue)
{
    int indexOfTarget = -1;
    int left = 0;
    int right = arraySize - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (targetValue == integerArray[middle])
        {
            indexOfTarget = middle;
            break;
        } else if (targetValue < integerArray[middle])
        {
            right = middle - 1;
        } else
        {
            left = middle + 1;
        }
    }

    return indexOfTarget;
}

double calculateMean(int integerArray[])
{
    double sum = 0;

    for (int i = 0; i < arraySize; i++)
    {
        sum += integerArray[i];
    }

    return sum / arraySize;
}

void printOutputToFile(int integerArray[], int originalIntegerArray[], int numberToSearchFor, int indexOfNumFound, double mean)
{
    std::ofstream outputStream("output.txt");

    outputStream << "Here are the results of the calculations:" << std::endl;

    outputStream << std::endl;

    outputStream << "Size of the array entered: " << arraySize << std::endl;

    outputStream << std::endl;

    outputStream << "Array as entered by user:" << std::endl;

    for (int i = 0; i < arraySize; i++)
    {
        outputStream << originalIntegerArray[i] << " ";
    }

    outputStream << std::endl << std::endl;

    outputStream << "Array after sorting:" << std::endl;

    for (int i = 0; i < arraySize; i++)
    {
        outputStream << integerArray[i] << " ";
    }

    outputStream << std::endl << std::endl;

    outputStream << "Integer that was searched for: " << numberToSearchFor << std::endl;

    if (indexOfNumFound != -1)
    {
        outputStream << "Index of the integer in the sorted array: " << indexOfNumFound << std::endl;
    } else
    {
        outputStream << "The integer was not found in the sorted array." << std::endl;
    }

    outputStream << std::fixed << std::setprecision(2);
    outputStream << "The mean of the data set: " << mean;

    outputStream.close();
}