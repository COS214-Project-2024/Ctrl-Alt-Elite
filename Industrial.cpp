#include "Industrial.h"

Industrial::Industrial() : employmentRating(0), pollutionLevel(0.0f) {}

Industrial::~Industrial() {}

void Industrial::addBuilding(Building* building) {
    // Industrial does not add sub-buildings
}

void Industrial::removeBuilding(Building* building) {
    // Industrial does not remove sub-buildings
}

void Industrial::display() const {
    // Display industrial building information
}

void Industrial::updateEmploymentRating() {
    // Logic to update employment rating
}

void Industrial::updatePollutionLevel() {
    // Logic to update pollution level
}

Building* Industrial::clone() const {
    return new Industrial(*this);
}

int Industrial::getEmploymentRating(){
    return employmentRating;
}
