#include <iostream>
#include "ResourceFactory.h"
#include "City.h"
#include "Utilities.h"
#include "Energy.h"
#include "Water.h"
#include "Materials.h"
#include "Budget.h"
#include "Building.h"
#include "ResourceFactory.h"
#include "WasteManagement.h"
#include "WaterSupply.h"
#include "SewageSystems.h"
#include "PowerPlants.h"
void testResources() {
    std::cout << "Testing Resources..." << std::endl;
    
    // Test creation of specific resource types
    Energy energy(10000, 0.5f);
    Water water(5000, 0.2f);
    Materials materials(20000, 1.0f);
    Budget budget(10000000, 0.3f);

    std::cout << "Energy resource created with capacity: 10000 and efficiency: 0.5" << std::endl;
    std::cout << "Water resource created with capacity: 5000 and efficiency: 0.2" << std::endl;
    std::cout << "Materials resource created with capacity: 20000 and efficiency: 1.0" << std::endl;
    std::cout << "Budget resource created with capacity: 10000000 and efficiency: 0.3" << std::endl;
}

void testResourceFactory() {
    std::cout << "Testing ResourceFactory..." << std::endl;

    ResourceFactory resourceFactory;

    // Test factory method for getting resources
    Resource* energy = resourceFactory.getResource("Energy");
    Resource* water = resourceFactory.getResource("Water");
    Resource* materials = resourceFactory.getResource("Materials");
    Resource* budget = resourceFactory.getResource("Budget");

    std::cout << "Energy resource obtained from factory." << std::endl;
    std::cout << "Water resource obtained from factory." << std::endl;
    std::cout << "Materials resource obtained from factory." << std::endl;
    std::cout << "Budget resource obtained from factory." << std::endl;

    // Verify resource allocation works
    City testCity("TestCity", 1000, 500000, &resourceFactory);
    testCity.allocateResources("Energy");
    testCity.allocateResources("Water");
    testCity.allocateResources("Materials");
    testCity.allocateResources("Budget");

    std::cout << "Resources allocated to city." << std::endl;
}

void testCityUtilitiesIntegration() {
    std::cout << "Testing City-Utilities Integration with Various Building Types..." << std::endl;

    ResourceFactory resourceFactory;
    City testCity("TestCity", 1000, 500000, &resourceFactory);

    // Create instances of different building types
    Residential residentialBuilding("Townhouses", 50, 10);
    Commercial commercialBuilding("Shops", 5, 8, 10000.0f);
    Industrial industrialBuilding("Factories", 7, 0.5f);
    Landmarks landmarkBuilding("Parks", 8, 2000.0f);

    // Apply WasteManagement utility to residential building
    WasteManagement wasteManagement(&residentialBuilding, 100.0f, &resourceFactory, 500);
    wasteManagement.applyUtility(&residentialBuilding);
    std::cout << "WasteManagement applied to Residential: Waste capacity checked." << std::endl;

    // Apply WaterSupply utility to commercial building
    WaterSupply waterSupply(&commercialBuilding, &resourceFactory, 200.0f);
    waterSupply.applyUtility(&commercialBuilding);
    std::cout << "WaterSupply applied to Commercial: Water supplied to building." << std::endl;

    // Apply SewageSystems utility to industrial building
    SewageSystems sewageSystem(&industrialBuilding, 150.0f, &resourceFactory, 400);
    sewageSystem.applyUtility(&industrialBuilding);
    std::cout << "SewageSystems applied to Industrial: Sewage managed for building." << std::endl;

    // Apply PowerPlants utility to landmark building
    PowerPlants powerPlant(&landmarkBuilding, &resourceFactory, 300.0f);
    powerPlant.applyUtility(&landmarkBuilding);
    std::cout << "PowerPlant applied to Landmark: Electricity provided to building." << std::endl;

    std::cout << "City-Utilities Integration Test Completed." << std::endl;
}
int main() {
    std::cout << "Starting Tests..." << std::endl;
    
    testResources();
    testResourceFactory();
    testCityUtilitiesIntegration();

    std::cout << "All tests completed successfully." << std::endl;
    return 0;
}
