#include "Estate.h"
#include <iostream>

Estate::Estate()  : Residential() {}

Estate::~Estate() {}


void Estate::display() const {
    std::cout << "Displaying Estate details.\n";
    // Additional display logic specific to Estate
}

void Estate::calculateOccupancyRate() {
     // Specific logic to calculate the occupancy rate for an Estate
    std::cout << "Calculating occupancy rate for Estate.\n";
}
