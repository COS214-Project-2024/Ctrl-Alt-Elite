#include "Residential.h"

Residential::Residential() : numResidents(0), availableUnits(0) {}

Residential::~Residential() {}

void Residential::addBuilding(Building* building) {
    // Residential does not add sub-buildings
}

void Residential::removeBuilding(Building* building) {
    // Residential does not remove sub-buildings
}

void Residential::display() const {
    // Display residential building information
}

void Residential::calculateOccupancyRate() {
    // Logic to calculate occupancy rate
}

Building* Residential::clone() const {
    return new Residential(*this);
}

int Residential::getNumResidents(){
    return numResidents;
}
