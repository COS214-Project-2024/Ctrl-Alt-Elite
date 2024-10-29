#include "Landmarks.h"

Landmarks::Landmarks() : entertainmentRating(0), maintenanceCost(0.0f) {}

Landmarks::~Landmarks() {}

void Landmarks::addBuilding(Building* building) {
    // Landmarks do not add sub-buildings
}

void Landmarks::removeBuilding(Building* building) {
    // Landmarks do not remove sub-buildings
}

void Landmarks::display() const {
    // Display landmark information
}

void Landmarks::updateEntertainmentRating() {
    // Logic to update entertainment rating
}

Building* Landmarks::clone() const {
    return new Landmarks(*this);
}

int getEntertainmentRating(){
    return entertainmentRating;
}
