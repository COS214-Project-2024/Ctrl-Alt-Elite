#include "Townhouse.h"
#include <iostream>

Townhouse::Townhouse(int numResidents, int availableUnits) 
    : Residential(numResidents, availableUnits) {}

Townhouse::~Townhouse() {}

void Townhouse::display()  {

    calculateOccupancyRate();

    std::cout << "Townhouse - Occupancy Rate: " << occupancyRate << "%\n";
    std::cout << "  ||||  \n";
    std::cout << " [ || ] \n";
    std::cout << "[______]\n";
}

void Townhouse::calculateOccupancyRate() {
    Residential::calculateOccupancyRate();
}

int Townhouse::getNumResidents(){
    return numResidents;
}

void Townhouse::performMaintenance() {
	std::cout << "Maintaining Townhouse: Checking shared walls, garden upkeep.\n";
}
