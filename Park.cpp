#include "Park.h"
#include <iostream>

Park::Park() : Landmarks() {}

Park::~Park() {}

void Park::display() const {
    std::cout << "Park - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
}

void Park::updateEntertainmentRating() {
    entertainmentRating += 4; // Specific increase for Park
}
