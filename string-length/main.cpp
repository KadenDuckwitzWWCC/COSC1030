//
// Kaden Duckwitz
// 4/25/25
// String Length Programming Project
// COSC 1030
//

#include <iostream>

const int MAX_SIZE = 100;

int stringLength(char []);

int main()
{
    char inputString[MAX_SIZE];

    std::cout << "Please input a string: ";
    std::cin.getline(inputString, MAX_SIZE);

    int length = stringLength(inputString);

    std::cout << "The length of the string is: " << length << std::endl;
}

int stringLength(char string[])
{
    int index = 0;

    while (string[index] != '\0')
    {
        index++;
    }

    return index;
}