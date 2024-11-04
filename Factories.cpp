#include "Factories.h"
#include <iostream>

Factories::Factories() : Industrial() {}

Factories::~Factories() {}

void Factories::display() {
    std::cout << "Factory - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
    std::cout << "##########\n";
    std::cout << "# FACTORY #\n";
    std::cout << "#_________#\n";
    std::cout << "# || || ||#\n";
}

void Factories::updateEmploymentRating() {
    employmentRating += 3; 
}

void Factories::updatePollutionLevel() {
    pollutionLevel += 1.0f; 
}

  void Factories::performMaintenance(){
        std::cout << "Maintaining Factory: Machinery inspection, pollution control.\n";
    }
