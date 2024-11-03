#include "Landmarks.h"
#include <iostream>

Landmarks::Landmarks() : entertainmentRating(0), maintenanceCost(0.0f) {}

Landmarks::~Landmarks() {}

void Landmarks::display() const {
    std::cout << "Landmark - Entertainment Rating: " << entertainmentRating
              << ", Maintenance Cost: " << maintenanceCost << "\n";
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
