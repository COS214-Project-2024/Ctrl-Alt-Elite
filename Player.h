#ifndef PLAYER_H
#define PLAYER_H

#include "CityBuilder.h"
#include "CompositeBuilding.h"
#include "City.h"
#include <iostream>
#include <vector>
#include "Residential.h"
#include "Commercial.h"
#include "Industrial.h"
#include "Landmarks.h"
#include "CulturalCenter.h"
#include "Monument.h"
#include "Park.h"
#include "Factories.h"
#include "Plants.h"
#include "Warehouses.h"
#include "Shop.h"
#include "Mall.h"
#include "Office.h"
#include "Townhouse.h"
#include "House.h"
#include "Apartment.h"
#include "Estate.h"
#include "Government.h"
#include "TaxationDepartment.h"
#include "PoliciesDepartment.h"
#include "BudgetDepartment.h"
#include "PublicServicesDepartment.h"
#include "HealthCare.h"
#include "Education.h"
#include "LawEnforcment.h"
#include "WasteManagement.h"
#include "SewageSystems.h"
#include "WaterSupply.h"
#include "PowerPlants.h"
#include "Bus.h"
#include "Train.h"
#include "Taxi.h"
#include "Plane.h"
#include "Car.h"
#include "Bike.h"
#include "Walk.h"
#include "BusyState.h"
#include "QuietState.h"
#include "ModerateState.h"
#include "PrivateBusyState.h"
#include "PrivateQuietState.h"
#include "PrivateModerateState.h"
#include "CityBuilder.h"
#include "Citizen.h"
#include "BusyState.h"
#include "QuietState.h"
#include "ModerateState.h"
#include "tax_command.h"
#include "policy_command.h"
#include "allocate_budget_command.h"
#include "ResourceFactory.h"

/**
 * @class Player
 * @brief Represents a player managing a city in the simulation.
 * 
 * The Player class provides functionality to create and manage
 * a city, including adding buildings, citizens, government,
 * resources, and utilities. The player can also perform various
 * actions related to city management and transport.
 */
class Player {
public:
    /**
     * @brief Default constructor for the Player class.
     * 
     * Initializes a new instance of the Player class with an empty
     * city and related components.
     */
    Player();

    /**
     * @brief Creates a new city.
     * 
     * Sets up the initial parameters and components of the city,
     * preparing it for further modifications.
     */
    void createCity();

    /**
     * @brief Adds a building to the city.
     * 
     * Prompts the user to input building details and adds the
     * building to the city.
     */
    void addBuilding();

    /**
     * @brief Adds citizens to the city.
     * 
     * Prompts the user for details and adds the specified number
     * of citizens to the city's population.
     */
    void addCitizens();

    /**
     * @brief Adds a government structure to the city.
     * 
     * Initializes and adds government policies and structures to 
     * the city.
     */
    void addGovernment();

    /**
     * @brief Adds resources to the city.
     * 
     * Enables the player to allocate and manage various resources
     * within the city.
     */
    void addResources();

    /**
     * @brief Adds utilities to the city.
     * 
     * Sets up and integrates utilities such as water and electricity
     * into the city’s infrastructure.
     */
    void addUtilities();

    /**
     * @brief Performs government policies.
     * 
     * Executes policies that affect the city based on the current 
     * state and needs of the citizens.
     */
    void performGovernmentPolicies();

    /**
     * @brief Performs maintenance tasks for the city.
     * 
     * Executes necessary maintenance operations for buildings and 
     * infrastructure to ensure the city operates smoothly.
     */
    void performMaintenance();

    /**
     * @brief Performs transport-related actions.
     * 
     * Manages transportation logistics and operations within the city.
     */
    void performTransport();

    /**
     * @brief Allows the player to choose a mode of transport.
     * 
     * Prompts the user to select between different transportation
     * options available in the city.
     */
    void chooseTransportMode();

    /**
     * @brief Allows the player to choose public transport.
     * 
     * Sets up public transport options for citizens within the city.
     */
    void choosePublicTransport();

    /**
     * @brief Allows the player to choose private transport.
     * 
     * Sets up private transport options for citizens within the city.
     */
    void choosePrivateTransport();

    /**
     * @brief Sets the state of the player or city.
     * 
     * Updates the current state of the player or the city based on
     * the game's progression and actions taken.
     */
    void setState();

    /**
     * @brief Tests the commuting time for citizens.
     * 
     * Simulates and calculates the commuting time for citizens
     * within the city based on chosen transport modes and routes.
     */
    void testCommuteTime();

    /**
     * @brief Checks the availability of transport options.
     * 
     * Verifies the availability of transport modes for citizens
     * before they travel.
     */
    void checkAvailability();

    /**
     * @brief Manages citizen travel within the city.
     * 
     * Coordinates travel activities for citizens based on transport
     * selections and availability.
     */
    void travelCitizen();

    /**
     * @brief Updates the satisfaction of citizens.
     * 
     * Adjusts citizen satisfaction levels based on city conditions
     * and government actions.
     */
    void updateSatisfaction();

    /**
     * @brief Removes a building from the city.
     * 
     * Prompts the user to specify a building to remove from the city.
     */
    void removeBuilding();

    // void removeCitizen();
    // void removeGovernment();
    // void removeResource();
    // void removeUtility();

    /**
     * @brief Increases the population of the city.
     * 
     * Adds a specified number of citizens to the city's population.
     * 
     * @param amount The number of citizens to add to the population.
     */
    void increasePopulation(int amount);

    /**
     * @brief Increases the number of jobs available in the city.
     * 
     * Adds a specified number of jobs to the city, improving 
     * employment opportunities.
     * 
     * @param amount The number of jobs to add.
     */
    void increaseJobs(int amount);

    /**
     * @brief Displays the current state of the city.
     * 
     * Outputs relevant information about the city's status,
     * including population, employment, and resources.
     */
    void showCityState();

private:
    City* city;                                ///< Pointer to the city being managed by the player.
    CompositeBuilding* compositeBuilding;      ///< Pointer to the composite building structure.
    CityBuilder* builder;                      ///< Pointer to the city builder instance.
    std::vector<Citizen*> citizens;           ///< Vector of citizens residing in the city.
    std::shared_ptr<TransportStrategy> selectedTransport; ///< Selected transport strategy for the player.
    std::shared_ptr<TransportationState> currentState;    ///< Current transport state for the player.
    Government* government ;
    TaxationDepartment* taxDepartment ;
    PoliciesDepartment* policyDepartment ;
    BudgetDepartment* budgetDepartment;
    PublicServicesDepartment* publicDepartment ;
    HealthCare* healthCare ;
    Education* education ;
    LawEnforcment* lawEnforement;
    ResourceFactory* factory;
};

#endif
