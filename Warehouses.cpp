#include "Warehouses.h"
#include <iostream>

Warehouses::Warehouses() : Industrial() {}

Warehouses::~Warehouses() {}

void Warehouses::display() const {
    std::cout << "Warehouse - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
}

void Warehouses::updateEmploymentRating() {
    employmentRating += 1; 
}

void Warehouses::updatePollutionLevel() {
    pollutionLevel += 0.3f; 
}
