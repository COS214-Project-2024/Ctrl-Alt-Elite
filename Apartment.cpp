#include "Apartment.h"
#include <iostream>

/**
 * @brief Constructs an Apartment with a given number of residents and units.
 * @param numResidents Initial number of residents in the apartment.
 * @param availableUnits Number of available units in the apartment.
 */
Apartment::Apartment(int numResidents, int availableUnits) 
    : Residential(numResidents, availableUnits) {}

/**
 * @brief Destructor for the Apartment class.
 */
Apartment::~Apartment() {}

/**
 * @brief Displays the apartment's occupancy rate and a simple ASCII representation.
 */
void Apartment::display() {
    calculateOccupancyRate();

    std::cout << "Apartment - Occupancy Rate: " << occupancyRate << "%\n";
    std::cout << " _______ \n";
    std::cout << "|       |\n";
    std::cout << "|APARTMENT|\n";
    std::cout << "|_______|\n";
}

/**
 * @brief Calculates the occupancy rate for the apartment.
 */
void Apartment::calculateOccupancyRate() {
    Residential::calculateOccupancyRate();
}

/**
 * @brief Retrieves the number of residents in the apartment.
 * @return Current number of residents.
 */
int Apartment::getNumResidents() {
    return numResidents;
}

/**
 * @brief Performs maintenance, such as checking occupancy and repairing shared facilities.
 */
void Apartment::performMaintenance() {
    std::cout << "Maintaining Apartment: Checking occupancy, repairing shared facilities.\n";
}

/**
 * @brief Sets the number of residents in the apartment.
 * @param num The new resident count.
 */
void Apartment::setNumResident(int num) {
    this->numResidents = num;
}
