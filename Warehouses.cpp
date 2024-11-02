#include "Warehouses.h"
#include <iostream>

Warehouses::Warehouses() : Industrial() {}

Warehouses::~Warehouses() {}

void Warehouses::display()  {
    std::cout << "Warehouse - Employment Rating: " << employmentRating
              << ", Pollution Level: " << pollutionLevel << "\n";
    std::cout << "############\n";
    std::cout << "# WAREHOUSE#\n";
    std::cout << "#__________#\n";
    std::cout << "#== == == ==#\n";
}

void Warehouses::updateEmploymentRating() {
    employmentRating += 1; 
}

void Warehouses::updatePollutionLevel() {
    pollutionLevel += 0.3f; 
}

void Warehouses::performMaintenance() {
    std::cout << "Maintaining Warehouse: Inventory checks, equipment maintenance.\n";
}
