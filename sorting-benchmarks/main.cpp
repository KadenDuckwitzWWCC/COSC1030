//
// Kaden Duckwitz
// 4/25/25
// Sorting Benchmarks Programming Project
// COSC 1030
//

#include <iostream>

const int SIZE = 20;

int bubbleSort(int []);
int selectionSort(int []);

int main()
{
    int array1[SIZE];
    int array2[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << "Please input element number " << (i + 1) << ": ";

        int currentNumber;
        std::cin >> currentNumber;

        array1[i] = currentNumber;
        array2[i] = currentNumber;

        std::cout << std::endl;
    }

    int bubbleSortSwapCount = bubbleSort(array1);
    int selectionSortSwapCount = selectionSort(array2);

    std::cout << "Bubble Sorted Array: ";

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << array1[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Selection Sorted Array: ";

    for (int i = 0; i < SIZE; i++)
    {
        std::cout << array2[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Bubble Sort Swap Count: " << bubbleSortSwapCount << std::endl;
    std::cout << "Selection Sort Swap Count: " << selectionSortSwapCount << std::endl;
}

int bubbleSort(int array[])
{
    int numberOfSwaps = 0;
    int lastElementIndex = SIZE - 1;

    while (lastElementIndex >= 1)
    {
        for (int i = 0; i < lastElementIndex; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                numberOfSwaps++;
            }
        }

        lastElementIndex--;
    }

    return numberOfSwaps;
}

int selectionSort(int array[])
{
    int numberOfSwaps = 0;
    int startingIndex = 0;

    while (startingIndex < (SIZE - 1))
    {
        int minimumIndex = startingIndex;

        for (int i = startingIndex; i < SIZE; i++)
        {
            if (array[i] < array[minimumIndex])
            {
                minimumIndex = i;
            }
        }

        int temp = array[startingIndex];
        array[startingIndex] = array[minimumIndex];
        array[minimumIndex] = temp;
        
        numberOfSwaps++;
        startingIndex++;
    }

    return numberOfSwaps;
}