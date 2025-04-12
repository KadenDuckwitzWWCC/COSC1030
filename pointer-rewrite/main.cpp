//
// Kaden Duckwitz
// 4/11/25
// Pointer Rewrite Programming Project
// COSC 1030
//

#include <iostream>

int doSomething(int *, int *);

int main()
{
    int x = 10, y = 2;

    std::cout << "Before calling the function:\n" 
    << "x = " << x << std::endl 
    << "y = " << y << std::endl << std::endl;

    std::cout << "The function returns " 
    << doSomething(&x, &y) << std::endl << std::endl;

    std::cout << "After calling the function:\n" 
    << "x = " << x << std::endl 
    << "y = " << y << std::endl << std::endl;

    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}