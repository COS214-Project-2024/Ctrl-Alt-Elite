#include "Apartment.h"

Apartment::Apartment() : Residential() {}

Apartment::~Apartment() {}

void Apartment::display() const {
	std::cout << "Displaying Apartment information.\n";
}

void Apartment::calculateOccupancyRate() {
	std::cout << "Calculating occupancy rate for Apartment.\n";
}
