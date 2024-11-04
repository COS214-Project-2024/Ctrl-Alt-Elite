#include "Monument.h"
#include <iostream>

Monument::Monument() : Landmarks() {}

Monument::~Monument() {}

void Monument::display() {
    std::cout << "Monument - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
    std::cout << "   ^^^^\n";
    std::cout << " ^ MONUMENT^\n";
    std::cout << " ^^^^^^\n";
}

void Monument::updateEntertainmentRating() {
    entertainmentRating += 10; // Specific increase for Monument
}

void Monument::performMaintenance(){
    std::cout << "Maintaining Monument: Cleaning, structural inspection.\n";
}
