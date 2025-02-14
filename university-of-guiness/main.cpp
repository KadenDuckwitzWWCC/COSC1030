//
// Kaden Duckwitz
// 2/14/2025
// University of Guiness Programming Project
// COSC 1030
//

#include <iostream>

const int CHARGE_IN_STATE = 3000;
const int CHARGE_OUT_OF_STATE = 4500;
const int ROOM_AND_BOARD_IN_STATE = 2500;
const int ROOM_AND_BOARD_OUT_OF_STATE = 3500;

int main() {
    std::cout << "Welcome to the University of Guiness Terminal Program!\n" << std::endl;

    std::cout << "Please input a number based on the options below:" << std::endl;
    std::cout << "1) I am an in-state student" << std::endl;
    std::cout << "2) I am an out-of-state student" << std::endl;

    int stateChoice = std::cin.get();
    std::cin.ignore();

    std::cout << std::endl;

    std::cout << "Do you require room and board? (Y or N): ";

    int roomAndBoardChoice = std::cin.get();
    std::cin.ignore();

    std::cout << std::endl;

    int totalBill = 0;

    // In-state and out-of-state semester cost

    /*
    ASCII Codes Used:
    
    49 == ASCII code for 1
    50 == ASCII code for 2
    */

    if (stateChoice == 49) {
        totalBill += CHARGE_IN_STATE;
    } else if (stateChoice == 50) {
        totalBill += CHARGE_OUT_OF_STATE;
    }

    // In-state and out-of-state room and board cost
    
    /*
    ASCII Codes Used:

    89 == ASCII code for Y
    121 == ASCII code for y
    */

    if (roomAndBoardChoice == 89 || roomAndBoardChoice == 121) {
        if (stateChoice == 49) {
            totalBill += ROOM_AND_BOARD_IN_STATE;
        } else if (stateChoice == 50) {
            totalBill += ROOM_AND_BOARD_OUT_OF_STATE;
        }
    }

    std::cout << "Your total bill: " << totalBill << std::endl;
}