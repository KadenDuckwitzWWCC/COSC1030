//
// Kaden Duckwitz
// 4/3/2025
// Search Benchmarks Programming Project
// COSC 1030
//

#include <iostream>

const int ARRAY_SIZE = 20;

int linearSearch(int [], int);
int binarySearch(int [], int);

int main()
{
    int numsArray[ARRAY_SIZE];

    for (int i = 1; i <= ARRAY_SIZE; i++)
    {
        numsArray[i] = i;
    }

    int linearSearchStepCount = linearSearch(numsArray, 13);
    int binarySearchStepCount = binarySearch(numsArray, 13);

    std::cout << "Linear search step count: " << linearSearchStepCount << std::endl;
    std::cout << "Binary search step count: " << binarySearchStepCount << std::endl;
}

int linearSearch(int numsArray[], int targetValue)
{
    int stepCount = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (numsArray[i] == targetValue)
        {
            break;
        }

        stepCount++;
    }

    return stepCount;
}

int binarySearch(int numsArray[], int targetValue)
{
    int stepCount = 0;
    int left = 0;
    int right = ARRAY_SIZE - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (targetValue == numsArray[middle])
        {
            break;
        } else if (targetValue < numsArray[middle])
        {
            right = middle - 1;
        } else
        {
            left = middle + 1;
        }

        stepCount++;
    }

    return stepCount;
}