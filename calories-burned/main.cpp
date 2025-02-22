//
// Kaden Duckwitz
// 2/21/2025
// Calories Burned Programming Project
// COSC 1030
//

#include <iostream>

const double CALORIES_PER_MIN = 3.6;

int main() {
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = minutes * CALORIES_PER_MIN;

        std::cout << "After " << minutes << " minutes, you burned ";
        std::cout << caloriesBurned << " calories." << std::endl;
    }
}