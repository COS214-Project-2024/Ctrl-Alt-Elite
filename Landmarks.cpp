#include "Landmarks.h"
#include <iostream>

Landmarks::Landmarks() : entertainmentRating(0), maintenanceCost(0.0f) {}

Landmarks::~Landmarks() {}

void Landmarks::display()  {
    std::cout << "Landmark - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
    std::cout << "  * * *\n";
    std::cout << " *     *\n";
    std::cout << "* LAND *\n";
    std::cout << " *     *\n";
    std::cout << "  * * *\n";
}



void Landmarks::updateEntertainmentRating() {
    entertainmentRating += 5; // Example logic to increase entertainment rating
}

int Landmarks::getEntertainmentRating() const {
    return entertainmentRating;
}

Building* Landmarks::clone() const {
    return new Landmarks(*this);
}

void Landmarks::performMaintenance() {
    std::cout << "Performing general landmark maintenance.\n";
}
