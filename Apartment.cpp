#include "Apartment.h"
#include <iostream>

Apartment::Apartment(int numResidents, int availableUnits) 
    : Residential(numResidents, availableUnits) {}

Apartment::~Apartment() {}

void Apartment::display()  {
	calculateOccupancyRate();

    std::cout << "Apartment - Occupancy Rate: " << occupancyRate << "%\n";
    std::cout << " _______ \n";
    std::cout << "|       |\n";
    std::cout <<"|APARTMENT|\n";
    std::cout << "|_______|\n";
}

void Apartment::calculateOccupancyRate() {
    Residential::calculateOccupancyRate();
}

int Apartment::getNumResidents(){
    return numResidents;
}

void Apartment::performMaintenance() {
    std::cout << "Maintaining Apartment: Checking occupancy, repairing shared facilities.\n";
}

void Apartment::setNumResident(int num)
{
	this->numResidents = num;
}
