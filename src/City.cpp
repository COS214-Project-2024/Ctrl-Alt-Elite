#include "City.h"
#include <iostream>

City::City(const std::string& name, int pop, float budget, ResourceFactory* factory)
    : cityName(name), population(pop), cityBudget(budget), resourceFactory(factory) {}

void City::addBuilding(Building* building) {
    // Implementation for adding a building
}

void City::allocateResources(const std::string& resourceType) {
    Resource* resource = resourceFactory->getResource(resourceType);

    // Additional logic for allocating the retrieved resource to city components, if needed
    if (resource) {
        // Use resource as required
        resources.push_back(resource); // Example usage; assume resources is a vector or list of Resource* in City
    }
}

void City::updateCitizenSatisfaction() {
    // Implementation for updating citizen satisfaction
}

void City::simulateGrowth() {
    // Implementation for simulating city growth
}

void City::displayCityInformation() const {
    std::cout << "City Name: " << cityName << std::endl;
    std::cout << "Population: " << population << std::endl;
    std::cout << "Budget: $" << cityBudget << std::endl;
    // Additional city information can be displayed here
}
