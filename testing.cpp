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
#include "City.h"
#include "TaxationDepartment.h"
#include "BudgetDepartment.h"
#include "PoliciesDepartment.h"
#include "PublicServicesDepartment.h"
#include "tax_command.h"
#include "allocate_budget_command.h"
#include "policy_command.h"
#include "public_services_command.h"
#include "Citizen.h"
//#include "TransportSelector.h"
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



void TestingComposite(){
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


}

void TestingCommand(){
    // Create City instance
    City city;

    // Create government department instances
    TaxationDepartment taxDept(&city);
    BudgetDepartment budgetDept(&city);
    PoliciesDepartment policyDept(&city);
    PublicServicesDepartment publicServiceDept(&city);

    // Set initial commands and test basic functionality
    std::cout << "===== Initial Commands Test =====" << std::endl;

    // Test TaxCommand
    TaxCommand taxCommand(&taxDept, 20.0); // Set tax rate to 20%
    taxCommand.execute();

    // Test AllocateBudgetCommand
    AllocateBudgetCommand budgetCommand(&budgetDept, 50000); // Allocate $50,000 to the budget
    budgetCommand.execute();

    // Test PolicyCommand
    PolicyCommand policyCommand(&policyDept, "Environmental Protection"); // Set policy to Environmental Protection
    policyCommand.execute();

    // Test PublicServicesCommand
    std::vector<std::string> services = {"Healthcare", "Education", "Law Enforcement"};
    PublicServicesCommand publicServiceCommand(&publicServiceDept, services);
    publicServiceCommand.execute();

    // Generate Government Report
    std::cout << "\n===== Government Report =====" << std::endl;
    policyDept.Report();
}




void testTransportModes() {
    std::cout << "=== Testing Transport Modes ===\n";

    auto bus = std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>());
    std::cout << "Bus: ";
    bus->travel();

    auto train = std::make_shared<Train>(100, 5, 20.0, std::make_shared<ModerateState>());
    std::cout << "Train: ";
    train->travel();

    auto taxi = std::make_shared<Taxi>(4, 0, 2.5, std::make_shared<BusyState>());
    std::cout << "Taxi: ";
    taxi->travel();

    auto plane = std::make_shared<Plane>(200, 2, 150.0, std::make_shared<QuietState>());
    std::cout << "Plane: ";
    plane->travel();

    auto car = std::make_shared<Car>(5, 0.7, std::make_shared<PrivateQuietState>());
    std::cout << "Car: ";
    car->travel();

    auto bike = std::make_shared<Bike>(1, std::make_shared<PrivateModerateState>());
    std::cout << "Bike: ";
    bike->travel();

    auto walk = std::make_shared<Walk>(std::make_shared<PrivateQuietState>());
    std::cout << "Walk: ";
    walk->travel();
}

void testStates() {
    std::cout << "\n=== Testing States ===\n";

    auto transport = std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>());

    BusyState busyState;
    std::cout << "Busy State - Handle and Change:\n";
    busyState.handle(transport);
    busyState.changeState(transport);

    QuietState quietState;
    std::cout << "Quiet State - Handle and Change:\n";
    quietState.handle(transport);
    quietState.changeState(transport);

    ModerateState moderateState;
    std::cout << "Moderate State - Handle and Change:\n";
    moderateState.handle(transport);
    moderateState.changeState(transport);

    PrivateBusyState privateBusyState;
    std::cout << "Private Busy State - Handle and Change:\n";
    privateBusyState.handle(transport);
    privateBusyState.changeState(transport);

    PrivateQuietState privateQuietState;
    std::cout << "Private Quiet State - Handle and Change:\n";
    privateQuietState.handle(transport);
    privateQuietState.changeState(transport);

    PrivateModerateState privateModerateState;
    std::cout << "Private Moderate State - Handle and Change:\n";
    privateModerateState.handle(transport);
    privateModerateState.changeState(transport);
}

void testCitizen() {
    std::cout << "\n=== Testing Citizen ===\n";

    Citizen citizen("John Doe");

    std::cout << "Setting preferred transport modes for Citizen:\n";
    citizen.setTransportStrategy(std::make_shared<Bus>(50, 10, 1.5, std::make_shared<QuietState>()), 0);
    citizen.setTransportStrategy(std::make_shared<Car>(5, 0.7, std::make_shared<PrivateQuietState>()), 1);
    citizen.setTransportStrategy(std::make_shared<Walk>(std::make_shared<PrivateModerateState>()), 2);

    std::cout << "\nChecking if Citizen can travel with current modes:\n";
    if (citizen.canTravel()) {
        std::cout << "Citizen can travel. Initiating travel.\n";
        citizen.travel();
    } else {
        std::cout << "No available transport mode for Citizen.\n";
    }

    citizen.displayInfo();

    std::cout << "\nUpdating satisfaction:\n";
    citizen.updateSatisfaction(-10);
    citizen.displayInfo();
}

// void testTransportSelector() {
//     std::cout << "\n=== Testing Transport Selector ===\n";

//     TransportSelector selector;

//     selector.chooseTransportMode();
//     selector.setState();
//     selector.testCommuteTime();
//     selector.checkAvailability();
// }

void TestingStrategyAndState(){
    testTransportModes();     // Test individual transport modes and their travel() methods
    testStates();             // Test individual states and their handle() / changeState() methods
    testCitizen();            // Test the Citizen class functionality with different transport modes
   // testTransportSelector();  // Test the TransportSelector workflow
}



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
    // Residential residentialBuilding("Townhouses", 50, 10);
    // Commercial commercialBuilding("Shops", 5, 8, 10000.0f);
    // Industrial industrialBuilding("Factories", 7, 0.5f);
    // Landmarks landmarkBuilding("Parks", 8, 2000.0f);

    Residential residentialBuilding;
    Commercial commercialBuilding;
    Industrial industrialBuilding;
    Landmarks landmarkBuilding;



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

void TestingResourcesAndUtilities(){
    testResources();
    testResourceFactory();
    testCityUtilitiesIntegration();
}

int main() {
    TestingComposite();
    TestingCommand();
    TestingStrategyAndState();
    TestingResourcesAndUtilities();
    //salome - observer and adapter
    //orabile - template and chain of respon
    //oj - iterator
    return 0;
   
}
