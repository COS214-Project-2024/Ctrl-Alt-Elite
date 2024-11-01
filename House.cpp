#include "House.h"

House::House() : Residential() {}

House::~House() {}


void House::display() const {
	std::cout << "Displaying House information.\n";
}

void House::calculateOccupancyRate() {
	std::cout << "Calculating occupancy rate for House.\n";
}
