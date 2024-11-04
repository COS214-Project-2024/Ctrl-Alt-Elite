#ifndef CITY_H
#define CITY_H

#include <string>
#include <iostream>
#include <vector>
#include "Building.h"
#include "CompositeBuilding.h"
#include "Utilities.h"
#include "ResourceFactory.h"
#include "Resource.h"

class Building;
class Utilities;
class Government;
class PublicServicesDepartment;

/**
 * @class City
 * @brief Manages various aspects of a city, including buildings, utilities, resources, and citizen services.
 * 
 * The City class is responsible for handling the population, budget, resources, and infrastructure within
 * a city. It provides methods for collecting taxes, allocating budgets, enforcing policies, and providing
 * public services, alongside managing resources and city growth.
 */
class City {
private:
    std::string cityName;                ///< Name of the city.
    int population;                      ///< Population of the city.
    float cityBudget;                    ///< Budget available for city operations.
    Building* buildings;                 ///< Pointer to the list of buildings in the city.
    Utilities* utilities;                ///< Utilities associated with the city.
    std::vector<Resource*> resources;    ///< Vector to store allocated resources.

public:
    /**
     * @brief Default constructor for City.
     */
    City();

    /**
     * @brief Constructs a City object with specified name, population, and budget.
     * @param name Name of the city.
     * @param pop Initial population of the city.
     * @param budget Initial budget allocated to the city.
     */
    City(const std::string& name, int pop, float budget);

    /**
     * @brief Destructor for City, releasing allocated resources.
     */
    ~City();

    /**
     * @brief Collects taxes from citizens and businesses within the city.
     */
    void collectTaxes();

    /**
     * @brief Allocates a specified amount of budget to a given department.
     * @param department Name of the department receiving the allocation.
     * @param amount Amount of budget to be allocated.
     */
    void allocateBudget(const std::string& department, double amount);

    /**
     * @brief Enforces a specific policy within the city.
     * @param policy Description of the policy to enforce.
     */
    void enforcePolicy(const std::string& policy);

    /**
     * @brief Provides a public service within the city, such as healthcare or education.
     * @param service Type of public service to provide.
     */
    void providePublicService(const std::string& service);

    /**
     * @brief Updates the city's infrastructure to support population growth.
     */
    void updateInfrastructure();

    /**
     * @brief Manages city resources by allocating a specified amount of a particular resource type.
     * @param resourceType Type of resource to manage.
     * @param amount Amount of the resource to allocate.
     */
    void manageResources(const std::string& resourceType, double amount);

    /**
     * @brief Reports the status of city operations, resources, and budget allocation.
     */
    void reportStatus();

    /**
     * @brief Adds a new building to the city.
     * @param building Pointer to the CompositeBuilding object to add.
     */
    void addBuilding(CompositeBuilding* building);

    /**
     * @brief Allocates resources for city operations based on the specified resource type.
     * @param resourceType Type of resource to allocate (e.g., water, energy).
     */
    void allocateResources(const std::string& resourceType);

    /**
     * @brief Updates citizen satisfaction based on current city conditions.
     */
    void updateCitizenSatisfaction();

    /**
     * @brief Simulates the growth of the city, affecting population and infrastructure.
     */
    void simulateGrowth();

    /**
     * @brief Displays an overview of the city's current state, including name, population, and budget.
     */
    void displayCityInformation() const;
};

#endif // CITY_H
