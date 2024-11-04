#include "Estate.h"
#include <iostream>

Estate::Estate(int numResidents, int availableUnits) 
    : Residential(numResidents, availableUnits) {}

Estate::~Estate() {}

void Estate::display()  {
    calculateOccupancyRate();

    std::cout << "Estate - Occupancy Rate: " << occupancyRate << "%\n";
    std::cout << "   /\\   \n";
    std::cout << "  /  \\  \n";
    std::cout << " /____\\ \n";
    std::cout << "|      |\n";
}

void Estate::calculateOccupancyRate() {
    Residential::calculateOccupancyRate();
}

int Estate::getNumResidents(){
    return numResidents;
}

 void Estate::performMaintenance()  {
    std::cout << "Maintaining Estate: Inspecting landscaping, security checks.\n";
}

void Estate::setNumResident(int num)
{ this->numResidents = num;
}
