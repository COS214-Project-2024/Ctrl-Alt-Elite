#include "Industrial.h"
#include <iostream>

Industrial::Industrial() : employmentRating(0), pollutionLevel(0.0f) {}

Industrial::~Industrial() {}

void Industrial::display()  {
    std::cout << "Industrial Building - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
    std::cout << "||||||||||\n";
    std::cout << "| FACTORY|\n";
    std::cout << "|________|\n";
    std::cout << "|== == ==|\n";
    std::cout << "||||||||||\n";
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

void Industrial::performMaintenance() {
    std::cout << "Performing general industrial maintenance.\n";
    updatePollutionLevel(); // Update pollution level as part of maintenance
}
