//
// Kaden Duckwitz
// 2/28/2025
// Hotel Occupancy Programming Project
// COSC 1030
//

#include <iostream>
#include <iomanip>

int main() {
    // Formatting
    std::cout << std::fixed << std::setprecision(2);

    // Gather input - number of hotel floors
    int hotelFloors;

    std::cout << "Please input the amount of floors the hotel has: ";
    std::cin >> hotelFloors;

    while (hotelFloors < 1) { // Validate input: Hotels can't have less than 1 floor
        std::cout << "Your hotel can't have less than 1 floor! Please try again." << std::endl;
        std::cout << "Please input the amount of floors the hotel has: ";
        std::cin >> hotelFloors;
    }

    std::cout << std::endl;

    // Initialize variables to calculate
    int totalRoomCount = 0;
    int totalOccupiedRoomCount = 0;
    int totalUnoccupiedRoomCount = 0;
    double percentageOfRoomsOccupied = 0; // # of rooms occupied / # of rooms

    // Loop through each floor
    for (int i = 0; i < hotelFloors; i++) {
        // Skip the 13th floor
        int floorNumber = i + 1;

        if (floorNumber == 13) {
            continue;
        }

        // Initialize input variables
        int roomCount;
        int occupiedRoomCount;

        // Gather input - number of rooms on current floor
        std::cout << "How many rooms on floor " << floorNumber << "? ";
        std::cin >> roomCount;

        while (roomCount < 10) { // Validate input: floor can't have less than 10 rooms
            std::cout << "A floor can't have less than 10 rooms! Please try again." << std::endl;
            std::cout << "How many rooms on floor " << floorNumber << "? ";
            std::cin >> roomCount;
        }

        // Gather input - number of occupied rooms on current floor
        std::cout << "How many rooms are occupied on floor " << floorNumber << "? ";
        std::cin >> occupiedRoomCount;

        std::cout << std::endl;

        // Update totals
        totalRoomCount += roomCount;
        totalOccupiedRoomCount += occupiedRoomCount;
    }

    // Calculate the rest of our needed data
    totalUnoccupiedRoomCount = totalRoomCount - totalOccupiedRoomCount;
    percentageOfRoomsOccupied = (float) totalOccupiedRoomCount / totalRoomCount;

    // Display data
    std::cout << std::endl;
    std::cout << "Here is your occupancy rate for your hotel:" << std::endl;
    std::cout << "Total room count: " << totalRoomCount << std::endl;
    std::cout << "Total occupied room count: " << totalOccupiedRoomCount << std::endl;
    std::cout << "Total unoccupied room count: " << totalUnoccupiedRoomCount << std::endl;
    std::cout << "Percentage of rooms occupied: %" << (percentageOfRoomsOccupied * 100) << std::endl;
}