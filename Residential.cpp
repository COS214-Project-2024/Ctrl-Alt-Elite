#include "Residential.h"

Residential::Residential() : numResidents(0), availableUnits(0), occupancyRate(0.0) {}

Residential::~Residential() {}

void Residential::display() const {
    std::cout << "Residential Building - Occupancy Rate: " << occupancyRate << "%\n";
  
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

int Residential::getNumResidents(){
    return numResidents;
}
