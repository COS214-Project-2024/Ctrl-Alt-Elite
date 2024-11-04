#include "Park.h"
#include <iostream>

Park::Park() : Landmarks() {}

Park::~Park() {}

void Park::display() {
    std::cout << "Park - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
    std::cout << "  .      .\n";
    std::cout << ".   PARK   .\n";
    std::cout << "   .   .   \n";
    std::cout << "      .    \n";
}

void Park::updateEntertainmentRating() {
    entertainmentRating += 4; // Specific increase for Park
}

void Park::performMaintenance() {
    std::cout << "Maintaining Park: Landscaping, playground inspection.\n";
}
