#include "Townhouse.h"

Townhouse::Townhouse() : Residential() {}

Townhouse::~Townhouse() {}

void Townhouse::display() const {
	std::cout << "Displaying Townouse information.\n";
}

void Townhouse::calculateOccupancyRate() {
	std::cout << "Calculating occupancy rate for Townouse.\n";
}
