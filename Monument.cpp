#include "Monument.h"
#include <iostream>

Monument::Monument() : Landmarks() {}

Monument::~Monument() {}

void Monument::display() const {
    std::cout << "Monument - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
}

void Monument::updateEntertainmentRating() {
    entertainmentRating += 10; // Specific increase for Monument
}
