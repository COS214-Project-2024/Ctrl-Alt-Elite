#include "Commercial.h"

Commercial::Commercial() : entertainmentRating(0), employmentRating(0), revenue(0.0f) {}

Commercial::~Commercial() {}

void Commercial::addBuilding(Building* building) {
    // Commercial does not add sub-buildings
}

void Commercial::removeBuilding(Building* building) {
    // Commercial does not remove sub-buildings
}

void Commercial::display() const {
    // Display commercial building information
}

void Commercial::updateEmploymentRating() {
    // Logic to update employment rating
}

void Commercial::updateEntertainmentRating() {
    // Logic to update entertainment rating
}

Building* Commercial::clone() const {
    return new Commercial(*this);
}
