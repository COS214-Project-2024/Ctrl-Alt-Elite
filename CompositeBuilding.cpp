#include "CompositeBuilding.h"
#include <iostream>
#include <algorithm>

CompositeBuilding::CompositeBuilding(int population, int jobs){
    this->population = population;
    this->jobs = jobs;
}

CompositeBuilding::~CompositeBuilding() {
    for (Building* building : buildings) {
        delete building;
    }
    buildings.clear();
}

void CompositeBuilding::addBuilding(Building* building) {
    buildings.push_back(building);
    std::cout << "Building added to CompositeBuilding.\n";
}

void CompositeBuilding::removeBuilding(Building* building) {
    auto it = std::find(buildings.begin(), buildings.end(), building);
    if (it != buildings.end()) {
        delete *it;
        buildings.erase(it);
        std::cout << "Building removed from CompositeBuilding.\n";
    }
}

void CompositeBuilding::display() const {
    std::cout << "Displaying Composite Building:\n";
    for (const Building* building : buildings) {
        building->display();
    }
}

Building* CompositeBuilding::clone() const {
    return new CompositeBuilding(*this);
}

void CompositeBuilding::increasePopulation(int amount) {
    population += amount;
    std::cout << "Population increased by " << amount << ". Current population: " << population << "\n";
}

void CompositeBuilding::increaseJobs(int amount) {
    jobs += amount;
    std::cout << "Jobs increased by " << amount << ". Current jobs: " << jobs << "\n";
}

void CompositeBuilding::expandUtilities() {
    std::cout << "Expanding utilities for CompositeBuilding.\n";
    integrateUtilities();
}

void CompositeBuilding::displayCityState() {
    std::cout << "Displaying overall city state:\n";
    std::cout << "Total Population: " << population << "\n";
    std::cout << "Total Jobs: " << jobs << "\n";
    std::cout << "Total Tax Revenue: $" << calculateTaxRevenue() << "\n";
}

void CompositeBuilding::manageCapacity() {
    // Loop through buildings and enforce maximum capacity limits
    for (Building* building : buildings) {
        // Call hypothetical occupancy tracking for each building
    }
}

void CompositeBuilding::integrateUtilities() {
    // Adjust building functionalities based on utilities availability
    std::cout << "Integrating utilities for each building.\n";
    for (Building* building : buildings) {
        // Check and adjust based on utility availability
    }
}

// double CompositeBuilding::calculateTax()
// {
//     return 0.0;
// }

double CompositeBuilding::calculateTaxRevenue() const {
    double totalTaxRevenue = 0.0;
    // for (const Building* building : buildings) {
    //     // Hypothetical tax calculation based on building type and policies
    //     totalTaxRevenue += building->calculateTax();
    // }
    return totalTaxRevenue;
}

void CompositeBuilding::maintainBuildings() {
    std::cout << "Performing maintenance for each building.\n";
    for (Building* building : buildings) {
        // Hypothetical maintenance operation
    }
}

void CompositeBuilding::trackSatisfaction() {
    std::cout << "Tracking building satisfaction and impact on quality of life.\n";
    for (Building* building : buildings) {
        // Hypothetical tracking based on conditions and satisfaction ratings
    }
}

// std::vector<Building*>::iterator CompositeBuilding::createIterator() {
//     return buildings.begin();
// }
