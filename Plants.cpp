#include "Plants.h"
#include <iostream>

Plants::Plants() : Industrial() {}

Plants::~Plants() {}

void Plants::display() {
    std::cout << "Plant - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
    std::cout << "    ||||||\n";
    std::cout << "   || PL ||\n";
    std::cout << "  || ANTS ||\n";
    std::cout << " ||_______||\n";
}

void Plants::updateEmploymentRating() {
    employmentRating += 2; 
}

void Plants::updatePollutionLevel() {
    pollutionLevel += 0.8f; 
}

void Plants:: performMaintenance(){
    std::cout << "Maintaining Plant: Process checks, waste management.\n";
}

