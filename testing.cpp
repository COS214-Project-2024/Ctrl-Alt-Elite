#include <iostream>
#include <vector>
#include "Building.h"
#include "CompositeBuilding.h"
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

int main() {
    // Create composite building
    CompositeBuilding city;

    // Create some residential buildings
    Residential* house = new Residential();
    Residential* townhouse = new Residential();
    Residential* apartment = new Residential();
    house->display();
    townhouse->display();
    apartment->display();

    // Create some commercial buildings
    Commercial* shop = new Shop();
    Commercial* mall = new Mall();
    Commercial* office = new Office();
    shop->display();
    mall->display();
    office->display();

    // Create some industrial buildings
    Industrial* factory = new Factories();
    Industrial* plant = new Plants();
    Industrial* warehouse = new Warehouses();
    factory->display();
    plant->display();
    warehouse->display();

    // Create some landmarks
    Landmarks* park = new Park();
    Landmarks* culturalCenter = new CulturalCenter();
    Landmarks* monument = new Monument();
    park->display();
    culturalCenter->display();
    monument->display();

    // Add buildings to the city
    city.addBuilding(house);
    city.addBuilding(townhouse);
    city.addBuilding(apartment);
    city.addBuilding(shop);
    city.addBuilding(mall);
    city.addBuilding(office);
    city.addBuilding(factory);
    city.addBuilding(plant);
    city.addBuilding(warehouse);
    city.addBuilding(park);
    city.addBuilding(culturalCenter);
    city.addBuilding(monument);

    // Display the state of the city
    std::cout << "City state after adding buildings:\n";
    city.displayCityState();

    // Remove a building from the city
    city.removeBuilding(warehouse);
    std::cout << "\nCity state after removing the warehouse:\n";
    city.displayCityState();

    // Clean up dynamic memory (optional in simple test, but good practice)
    delete house;
    delete townhouse;
    delete apartment;
    delete shop;
    delete mall;
    delete office;
    delete factory;
    delete plant;
    delete warehouse;  // Note: Removed from the city
    delete park;
    delete culturalCenter;
    delete monument;

    return 0;
}
