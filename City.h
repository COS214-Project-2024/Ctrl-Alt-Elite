#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>
#include <vector>
#include "Building.h"
#include "Utilities.h"
#include "ResourceFactory.h"
#include "Resource.h"

class Building;
class Utilities;
class Government;
class PublicServicesDepartment;
class City {
private:
    std::string cityName;        // Name of the city
    int population;              // Population of the city
    float cityBudget;            // Budget for city operations
    Building* buildings;         // Pointer to buildings in the city
    Utilities* utilities;        // Utilities associated with the city
    std::vector<Resource*> resources; // Vector to store allocated resources
    ResourceFactory* resourceFactory; // Factory for creating resources

public:
    // Constructors
    City(); // Default constructor
    City(const std::string& name, int pop, float budget, ResourceFactory* factory);

    // Methods for handling various city-related commands
    void collectTaxes();
    void allocateBudget(const std::string& department, double amount);
    void enforcePolicy(const std::string& policy);
    void providePublicService(const std::string& service);

    // Additional methods for managing city growth and resources
    void updateInfrastructure();
    void manageResources(const std::string& resourceType, double amount);
    void reportStatus();

    // Methods for managing buildings and resources
    void addBuilding(Building* building);
    void allocateResources(const std::string& resourceType);
    void updateCitizenSatisfaction();
    void simulateGrowth();
    void displayCityInformation() const;
};

#endif // CITY_H
