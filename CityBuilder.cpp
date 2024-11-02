#include "CityBuilder.h"
#include "Residential.h"
#include "House.h"
#include "Apartment.h"
#include "Estate.h"
#include "Townhouse.h"
#include "Commercial.h"
#include "Shop.h"
#include "Mall.h"
#include "Office.h"
#include "Industrial.h"
#include "Factories.h"
#include "Warehouses.h"
#include "Plants.h"
#include <iostream>

CityBuilder::CityBuilder() : buildingComposite(new CompositeBuilding()) {}

CityBuilder::~CityBuilder() {
    delete buildingComposite;
}

void CityBuilder::buildPopulationGrowth() {
    std::cout << "Building for population growth: Adding residential building...\n";
    
    // Logic for supporting population growth could involve adding apartment complexes or townhouses
    Residential* residentialBuilding = new Apartment(); // Example type of residential building
    residentialBuilding->setNumResident(200); // Hypothetical function to set residents
    buildingComposite->addBuilding(residentialBuilding);
}

void CityBuilder::buildHousingExpansion() {
    std::cout << "Building for housing expansion: Adding diverse residential units...\n";

    // Adds multiple types of housing for diversity
    Residential* estate = new Estate();
    estate->setNumResident(20); // Large estate with fewer residents

    Residential* townhouse = new Townhouse();
    townhouse->setNumResident(50); // Smaller townhouse for moderate occupancy

    buildingComposite->addBuilding(estate);
    buildingComposite->addBuilding(townhouse);
}

void CityBuilder::buildEconomicDevelopment() {
    std::cout << "Building for economic development: Adding commercial areas...\n";

    // Creates a variety of commercial spaces like shops, offices, and malls
    Commercial* shop = new Shop();
    shop->IncEmploymentRating(); // Increase employment rating based on building type

    Commercial* mall = new Mall();
    mall->IncEntertainmentRating(); // Enhance entertainment value for economic growth

    buildingComposite->addBuilding(shop);
    buildingComposite->addBuilding(mall);
}

void CityBuilder::buildInfrastructureExpansion() {
    std::cout << "Building for infrastructure expansion: Adding industrial buildings...\n";

    // Industrial buildings can include factories and warehouses to support infrastructure
    Industrial* factory = new Factories();
    factory->updatePollutionLevel(); // Update pollution based on factory specifics

    Industrial* warehouse = new Warehouses();
    warehouse->updateEmploymentRating(); // Warehouses could influence employment

    buildingComposite->addBuilding(factory);
    buildingComposite->addBuilding(warehouse);
}

CompositeBuilding* CityBuilder::getCompositeBuilding() {
    return buildingComposite;
}
