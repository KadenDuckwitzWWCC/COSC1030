//
// Kaden Duckwitz
// 3/15/2025
// Grades Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

void calculateGradeAverage(double &, int);

int main() {
    double gradeAverage = 0.0;
    int gradeCount = 0;
    double currentGrade = 0.0;

    while (currentGrade != -1) {
        std::cout << "Please input the current grade below." << std::endl;
        std::cout << "When you're done entering grades, enter -1 to continue." << std::endl;
        std::cin >> currentGrade;
        std::cout << std::endl;

        if (currentGrade != -1) {
            gradeAverage += currentGrade;
            gradeCount++;
        }
    }

    calculateGradeAverage(gradeAverage, gradeCount);

    char letterGrade;

    if (gradeAverage < 59) {
        letterGrade = 'F';
    } else if (gradeAverage < 69) {
        letterGrade = 'D';
    } else if (gradeAverage < 79) {
        letterGrade = 'C';
    } else if (gradeAverage < 89) {
        letterGrade = 'B';
    } else {
        letterGrade = 'A';
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Your grade average (numeric) is: " << gradeAverage << "%" << std::endl;
    std::cout << "Your grade average (letter grade) is: " << letterGrade << std::endl;
}

void calculateGradeAverage(double &gradeAverage, int gradeCount) {
    gradeAverage /= gradeCount;
}