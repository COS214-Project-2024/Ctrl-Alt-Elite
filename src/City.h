#ifndef CITY_H
#define CITY_H

#include <string>
#include "Building.h"
#include "Utilities.h"
//#include "Government.h"
//#include "Citizen.h"
#include "ResourceFactory.h"
#include <vector>

class City {
private:
    std::string cityName;
    int population;
    float cityBudget;
    Building* buildings;
    Utilities* utilities;
    //Government* government;
    //Citizen* citizens;
    std::vector<Resource*> resources; 
    ResourceFactory* resourceFactory;

public:
    City(const std::string& name, int pop, float budget, ResourceFactory* factory);
    void addBuilding(Building* building);
    void allocateResources(const std::string& resourceType);
    void updateCitizenSatisfaction();
    void simulateGrowth();
    void displayCityInformation() const;
};

#endif
