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
#include "Adapter.h"
#include "BuildingTarget.h"
#include "Government.h"
#include "TaxationDepartment.h"
#include"BudgetDepartment.h"
#include "PoliciesDepartment.h"
#include "PublicServicesDepartment.h"
#include "Education.h"
#include "LawEnforcment.h"
#include "HealthCare.h"
#include "City.h"



void TestingComposite() {
    // Create composite building with initial population and job values
    CompositeBuilding* city = new CompositeBuilding(30000, 15000);

    // Create residential, commercial, and industrial buildings
    Residential* house = new Residential();
    Residential* townhouse = new Residential();
    Residential* apartment = new Residential();

    Commercial* shop = new Shop();
    Commercial* mall = new Mall();
    Commercial* office = new Office();

    Industrial* factory = new Factories();
    Industrial* plant = new Plants();
    Industrial* warehouse = new Warehouses();

    // Create landmarks
    Landmarks* park = new Park();
    Landmarks* culturalCenter = new CulturalCenter();
    Landmarks* monument = new Monument();

    // Add buildings to the city
    city->addBuilding(house);
    city->addBuilding(townhouse);
    city->addBuilding(apartment);
    city->addBuilding(shop);
    city->addBuilding(mall);
    city->addBuilding(office);
    city->addBuilding(factory);
    city->addBuilding(plant);
    city->addBuilding(warehouse);
    city->addBuilding(park);
    city->addBuilding(culturalCenter);
    city->addBuilding(monument);

    // Display initial state of the city
    std::cout << "\nInitial City State:\n";
    city->displayCityState();

    // Test population and job increase
    city->increasePopulation(5000);  // Test increasing population
    city->increaseJobs(2000);        // Test increasing jobs

    // Display state after population and job adjustments
    std::cout << "\nCity State after Population and Job Adjustments:\n";
    city->displayCityState();

    // Test utility expansion
    std::cout << "\nExpanding Utilities:\n";
    city->expandUtilities();

    // Test building maintenance
    std::cout << "\nPerforming Maintenance:\n";
    city->maintainBuildings();

    // Test satisfaction tracking
    std::cout << "\nTracking Satisfaction:\n";
    city->trackSatisfaction();

    // Calculate and display tax revenue
    double taxRevenue = city->calculateTaxRevenue();
    std::cout << "\nTotal Tax Revenue: $" << taxRevenue << "\n";

    // Remove a building and display city state afterward
    city->removeBuilding(warehouse);
    std::cout << "\nCity State after Removing the Warehouse:\n";
    city->displayCityState();

    // Clean up
    delete city;
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





void testCityUtilitiesIntegration() {
    std::cout << "Testing City-Utilities Integration with Various Building Types...\n" << std::endl;

    ResourceFactory* factory = new ResourceFactory(1000000.0f, 2500000.0f,340000.0f,5000000.0f);
    std::cout << "\nInitial Resource Capacities:" << std::endl;
    factory->displayResourceStatus();
    City testCity("TestCity", 1000, 500000, factory);

    Building* residentialBuilding = new Residential();
    Building* commercialBuilding = new Commercial();
    Building* industrialBuilding = new Industrial();
    Building* landmarkBuilding = new Landmarks();



    // Apply WasteManagement utility to residential building
    std::cout << R"(                  
                          ██████████████████████████████████████████████                 
                          █  ███   ███████   ██████    ███████  ███████ ████             
                          █  ███   ███████   ██████    ███████   ████████   ██           
                          █  ███   ███████   ██████    ███████   ███████████  ██         
                          █  ███   ███████   ██████    ███████    █    ██████  ██        
                          █  ███   ███████   ██████    ███████    █████ ███████ ██       
              █████████████  ███   ███████   ██████    ███████     █████████████ ██      
             ██         ███  ███   ███████   ██████    ███████     ██████████████ ██     
            ███████████ ███  ███   ███████   ██████    ███████      █████████████ ██     
           ████      ██ ███  ███   ███████   ██████    ███████      ██████████████ ██    
          ████       ██ ███  ███   ███████   ██████    ███████       █████████████  ██   
         ████        ██ ███  ███   ███████   ██████    ███████       ██████████████  █   
         █  ██████████  ███  ███   ███████   ██████    ███████        █████████████████  
        ██           ███████ ███   ███████  ████████   ███████        ██████████████████ 
        █       ██████████████████████████████████████████████████████ ██████████████████
        █     ████████████████████████████████████████████████████████ ██████████████████
        █    ███████    █████████████████████████████████████████████████████████████████
        ██████████         ██████████████████      ███████       ██████ █████████████████
        █████████  ██████  ████████████████   ████   ████  █████   ████                  
        █████████  ██████   ███████████████  ██████  ███   ██████  ████                  
                █    ███   ██            ██   █████  ████  █████   █                     
                ███      ███              ██        ██  ██       ███                     
                   ██████                   ████████     █████████                                                                                                                                                                                                          
    )" << std::endl;
    WasteManagement wasteManagement(residentialBuilding, 10000.0f, factory, 500);
    wasteManagement.applyUtility(residentialBuilding);
    std::cout << "\nWasteManagement applied to Residential: Waste capacity checked." << std::endl;

    // Apply WaterSupply utility to commercial building
    // Apply SewageSystems utility to industrial building
    std::cout << R"(                  
                                ██████████████████████████                   
                                ██       ███   ███       ██                  
                                ████████████   ████████████                  
                                █████████  ██████  ████████                  
                                           ██████                            
                                            ██████                            
                                            ████████        ███████████████     
                                            ██  ██████ ██   ███      ██████████   
                                        ██████████████  ██          █████████  
                                        █████████████████████           █████████ 
                    ██████████████████████████████████  ████████████    █████████
                ██████                   █████           ██       ███    ████████
            ███       ███████████████████████          █████████████   ████████
            ██    ████████████████████████████           ██       ███  █████████
            ██   ██████       ████████████████          ███       ██████████████
            ██   ████ ███████████████████████████████████████████████████████████
            ██   ███ █████████████████████████          █████████████████████████
            ██  ███  █████              ████████████████  ██████████████████████ 
            ███  ███  █████                                 ████████████████████    
            ███  ███ ███████                                    ████████████      
            ████████████████                                                      
            ███████████████                                                       
                ████████                                                      
                    ██                                                           
                    ███                                                           
                  ███████                                                          
                 ██ ██████                                                         
                ██  ███████                                                        
                ██  ████████                                                      
                ██  █████████                                                     
                ███  ████████                                                     
                ████ ███████                                                      
                    ██████                                                        
                                                                                                                                                                                                             
    )" << std::endl;
    WaterSupply waterSupply(commercialBuilding, factory, 20000.0f);
    waterSupply.applyUtility(commercialBuilding);
    std::cout << "\nWaterSupply applied to Commercial: Water supplied to building." << std::endl;

    // Apply SewageSystems utility to industrial building
    std::cout << R"(                  
                              ████████████████                                         
                           ██         █        ██                                      
                         ██   ██████   ██        █████████████████████                 
                        ██  ██      ██   █         █                  ██               
                       █   █          █   █         █                   █              
                      ██  █          █ ██  █        ██                   █             
                      █  ██         █   █  █         █                    █            
                     ██  █         ██   ██  █        ██                   █            
                     █  ██         █     █  █         █                   █            
                     █  ██         █     █  █         █                    █                  
                     █  ██         █     █  █         █                   █            
                     ██  █         ██   ██  █        ██                   █            
                      █  ████████████████  █         █                    █            
                      ███   ████████████   █        ██                   █             
                       ██ ██   ████████   █         █                   █              
                        █ █  █      ██   █         █                  ██               
                        █ █ █  █████   ██        ████████████████████                  
                        █ █ █  █      █        ██                                      
                        █ █ █  ███████████████                                                                                               
                        █ █ █  █                                                       
           ███         ██████  █      █████                                            
              ██     ██      ███   ██      ██                                          
                 ███            ██            █                                        
                                                                                       
             ██       ██    ██      ██    ██                                           
               ██████         ██████         ██                                                                                                                                                               
    )" << std::endl;
    SewageSystems sewageSystem(industrialBuilding, 15000.0f, factory, 400);
    sewageSystem.applyUtility(industrialBuilding);
    std::cout << "\nSewageSystems applied to Industrial: Sewage managed for building." << std::endl;


    // ASCII art displayed before PowerPlant construction
    std::cout << R"(                                                                                
                                                ███████████                     
                                              ██          ██                    
                                        ███████           ██                    
                                      ██                ██                      
                                    ███                ██                       
                                 ███                 ███                        
                                ██                ███                           
                                █████████████████████                           
                               ██                  ██                           
                               ██                   █                           
                               █                    █                           
                        █████████████████           ██                          
                        █               █           ██                          
                       ██               ██          ██████                      
                       ██               ██████████████   █                      
                       ██               ██           █████                      
                       ██               ██████████████████                      
                       █                ██           █████                      
                       █                ███          █████████                  
                      ██                 ██           ████████                  
                      █                   ██           ███████                  
                     █                     ██           ██   █                  
                ████████████████████████████████████████████████                
               ██████████████████████████████████████████████████               
                                                                                                                    
    )" << std::endl;
    // Apply PowerPlants utility to landmark building
    PowerPlants powerPlant(landmarkBuilding, factory, 300.0f);
    powerPlant.applyUtility(landmarkBuilding);
    std::cout << "\nPowerPlant applied to Landmark: Electricity provided to building." << std::endl;

    // Display the remaining resource capacities
    std::cout << "\nFinal Resource Capacities:" << std::endl;
    factory->displayResourceStatus();

    std::cout << "\nCity-Utilities Integration Test Completed." << std::endl;

    // Clean up dynamically allocated resources
    delete residentialBuilding;
    delete commercialBuilding;
    delete industrialBuilding;
    delete landmarkBuilding;
    delete factory;
}

void TestingResourcesAndUtilities(){
    testCityUtilitiesIntegration();
}

void TestingAdapter(){
    std::cout<<endl;
    std::cout<<"=================Testing Adapter=================";
    //creating a CompositeBuilding to represent the entire city
    CompositeBuilding* city = new CompositeBuilding(318000, 15000);

    //creating an Adapter to interact with different types of buildings
    Adapter cityAdapter(city);

    //adding different types of buildings to the city using the adapter
    int residentialUnits = 15;
    int commercialUnits = 11;
    int industrialUnits = 7;
    int landmarkUnits = 5;

    std::cout<<"Adding Residential Units...\n";
    cityAdapter.addResidentialUnits(residentialUnits);

    std::cout<<"\nAdding Commercial Units...\n";
    cityAdapter.addCommercialUnits(commercialUnits);

    std::cout<<"\nAdding Industrial Units...\n";
    cityAdapter.addIndustrialUnits(industrialUnits);

    std::cout<<"\nAdding Landmark Units...\n";
    cityAdapter.addLandmarkUnits(landmarkUnits);

    std::cout<<"\nDisplaying City Status:\n";
    cityAdapter.displayCityStatus();

    delete city;
}

void TestingObserver(){

}

void testTemplate(){
    City *city= new City();
    PoliciesDepartment* pol = new PoliciesDepartment(city);
    pol->implementPolicy("Smack bad people");
    pol->Report();

    TaxationDepartment* tax =new TaxationDepartment(city);
    tax->updateTaxes(20);
    tax->Report();
}

void testChain(){
    City *city= new City();
    PublicServicesDepartment* publicServe = new PublicServicesDepartment(city);
    PublicServicesDepartment* health = new HealthCare(city);
    PublicServicesDepartment* law = new LawEnforcment(city);
    PublicServicesDepartment* education = new Education(city);
    law->setNextHandler(education);
    health->setNextHandler(law);
    publicServe->setNextHandler(health);
    publicServe->handleRequest(1);
}

int main() {
    TestingComposite();
    TestingCommand();
    TestingStrategyAndState();
    TestingResourcesAndUtilities();
    TestingAdapter();
    TestingObserver();
    testTemplate();
    testChain();
    
    //orabile - template and chain of respon
    //oj - iterator
    return 0;
   
}
