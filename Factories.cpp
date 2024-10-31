#include "Factories.h"
#include <iostream>

Factories::Factories() : Industrial() {}

Factories::~Factories() {}

void Factories::display() const {
    std::cout << "Factory - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
}

void Factories::updateEmploymentRating() {
    employmentRating += 3; 
}

void Factories::updatePollutionLevel() {
    pollutionLevel += 1.0f; 
}
