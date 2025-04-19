//
// Kaden Duckwitz
// 4/19/25
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>

void displayBackwardString(char *);

int main()
{
    const int SIZE = 80;
    char input[SIZE];

    std::cout << "Enter a string and I will display it backward:\n";
    std::cin.getline(input, SIZE);

    displayBackwardString(input);

    return 0;
}

void displayBackwardString(char *str)
{
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        std::cout << str[i];
    }

    std::cout << std::endl;
}