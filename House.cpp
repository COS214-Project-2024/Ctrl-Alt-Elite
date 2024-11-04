#include "House.h"
#include <iostream>

House::House(int numResidents, int availableUnits) 
    : Residential(numResidents, availableUnits) {}

House::~House() {}

void House::display()  {

	House::calculateOccupancyRate();

    std::cout << "House - Occupancy Rate: " << occupancyRate  << "%\n";
    std::cout << "  []  \n";
    std::cout << " [  ] \n";
    std::cout << "[____]\n";
}

void House::calculateOccupancyRate() {
    Residential::calculateOccupancyRate();
}


int House::getNumResidents(){
    return numResidents;
}

void House::performMaintenance() {
    std::cout << "Maintaining House: General upkeep and inspections.\n";
}

void House::setNumResident(int num)
{
	this->numResidents  = num;
}
