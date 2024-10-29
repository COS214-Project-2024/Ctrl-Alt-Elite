#include "Industrial.h"
#include <iostream>

Industrial::Industrial() : employmentRating(0), pollutionLevel(0.0f) {}

Industrial::~Industrial() {}

void Industrial::display() const {
    std::cout << "Industrial Building - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
}

void Industrial::updateEmploymentRating() {
    employmentRating += 1; 
}

void Industrial::updatePollutionLevel() {
    pollutionLevel += 0.5f; 
}

int Industrial::getEmploymentRating() const {
    return employmentRating;
}

Building* Industrial::clone() const {
    return new Industrial(*this);
}
