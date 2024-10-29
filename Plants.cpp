#include "Plants.h"
#include <iostream>

Plants::Plants() : Industrial() {}

Plants::~Plants() {}

void Plants::display() const {
    std::cout << "Plant - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
}

void Plants::updateEmploymentRating() {
    employmentRating += 2; 
}

void Plants::updatePollutionLevel() {
    pollutionLevel += 0.8f; 
}
