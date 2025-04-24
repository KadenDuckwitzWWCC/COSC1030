//
// Kaden Duckwitz
// 4/23/25
// Dental Bill Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>
#include <cctype>

double calculateTotalBill(double, double, double);
double calculateTotalBill(double, double);

int main()
{
    double serviceCharge;
    double testFees;
    double medicineFees;
    char isMemberChar;

    std::cout << "Are you a member of the dental plan (y or n)? ";
    isMemberChar = std::cin.get();
    std::cin.ignore();

    std::cout << std::endl;

    std::cout << "Please input the service charge for the appointment: ";
    std::cin >> serviceCharge;

    std::cout << std::endl;

    std::cout << "Please input the test fees for the appointment: ";
    std::cin >> testFees;

    std::cout << std::endl;

    double totalBill;

    if (tolower(isMemberChar) == 'y')
    {
        totalBill = calculateTotalBill(serviceCharge, testFees);
    } else
    {
        std::cout << "Please input the medicine fees for the appointment: ";
        std::cin >> medicineFees;

        std::cout << std::endl;

        totalBill = calculateTotalBill(serviceCharge, testFees, medicineFees);
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your total bill is: $" << totalBill;
    std::cout << std::endl;
}

double calculateTotalBill(double serviceCharge, double testFees, double medicineFees)
{
    return serviceCharge + testFees + medicineFees;
}

double calculateTotalBill(double serviceCharge, double testFees)
{
    return serviceCharge + testFees;
}