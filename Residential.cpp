#include "Residential.h"

Residential::Residential() {
    this->numResidents = 100;
    this->availableUnits = 150;
    this->occupancyRate = 0.5;
}

Residential::Residential(int numResidents, int availableUnits)
    : numResidents(numResidents), availableUnits(availableUnits), occupancyRate(0.0) {
    calculateOccupancyRate();
}

Residential::~Residential() {}

void Residential::display() {
    std::cout << "Residential Building - Occupancy Rate: " << occupancyRate << "%\n";
    std::cout << " * * * \n";
    std::cout << "* * * *\n";
    std::cout << " * * * \n";
    std::cout << "* * * *\n";
    std::cout << " * * * \n";
}


void Residential::calculateOccupancyRate() {
    if (availableUnits > 0) {
        occupancyRate = (static_cast<double>(numResidents) / availableUnits) * 100;
    } else {
        occupancyRate = 0.0;  // Handle edge case where availableUnits is 0
    }
}

Building* Residential::clone() const {
    return new Residential(*this);
}


double Residential::getOccupancyRate() const {
    return occupancyRate;
}

int Residential::getNumResidents(){
    return numResidents;
}

void Residential::performMaintenance()
{
    std::cout << "Performing general residential maintenance.\n";
    calculateOccupancyRate();
}

void Residential::setNumResident(int num)
{
    this->numResidents = num;
}
