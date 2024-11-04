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
#include "Townhouse.h"
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
#include "Builder.h"
#include "CityBuilder.h"
#include "Director.h"



void TestingComposite() {
    // Create a CompositeBuilding (city) to manage all buildings
    //CompositeBuilding cityComposite;

    // Create a CityBuilder and Director to construct the city
    CityBuilder cityBuilder;
    Director cityDirector(&cityBuilder);

    // Step 1: Construct the city with population growth, housing, economic development, and infrastructure
    std::cout << "Constructing city...\n";
    cityDirector.constructCityGrowth(100);
    CompositeBuilding* city = cityBuilder.getCompositeBuilding();

    // Step 2: Add various types of buildings to the city
    std::cout << "\nAdding buildings to the city...\n";
    Residential* residentialBuilding = new Townhouse();
    Commercial* commercialBuilding = new Shop();
    Industrial* industrialBuilding = new Plants();

    city->addBuilding(residentialBuilding);
    city->addBuilding(commercialBuilding);
    city->addBuilding(industrialBuilding);

    // Display the city layout with all buildings
    std::cout << "\nDisplaying city layout:\n";
    city->display();

    // Step 3: Test population and job expansion
    city->increasePopulation(1000);
    city->increaseJobs(500);

    // Step 4: Manage capacity to ensure building occupancy is within limits
    std::cout << "\nManaging capacity...\n";
    city->manageCapacity();

    // Step 5: Perform maintenance on all buildings in the city
    std::cout << "\nPerforming maintenance...\n";
    city->performMaintenance();

    // Step 6: Expand utilities across all buildings
    std::cout << "\nExpanding utilities...\n";
    city->expandUtilities();

    // Step 7: Display the overall state of the city
    std::cout << "\nDisplaying overall city state:\n";
    city->displayCityState();

    // Step 8: Track citizen satisfaction (hypothetical tracking)
    std::cout << "\nTracking citizen satisfaction:\n";
    city->trackSatisfaction();

    // Step 9: Remove a building and display the updated city layout
    std::cout << "\nRemoving a building...\n";
    city->removeBuilding(residentialBuilding);
    std::cout << "\nUpdated city layout after removing a building:\n";
    city->display();


    //std::cout << "here\n";
    // Cleanup
    //delete city;
    //std::cout << "its a destructor\n";
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

    std::cout << "\n===== Public Service Department request handling =====" << std::endl;
    PublicServicesDepartment* publicServe = new PublicServicesDepartment(&city);
    PublicServicesDepartment* health = new HealthCare(&city);
    PublicServicesDepartment* law = new LawEnforcment(&city);
    PublicServicesDepartment* education = new Education(&city);
    law->setNextHandler(education);
    health->setNextHandler(law);
    publicServe->setNextHandler(health);
    publicServe->handleRequest(1);
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
   // City testCity("TestCity", 1000, 500000, factory);

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
    WasteManagement wasteManagement(residentialBuilding, 100.0f, factory, 500);
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
    WaterSupply waterSupply(commercialBuilding, factory, 300.0f, 100);
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
    SewageSystems sewageSystem(industrialBuilding, 150.0f, factory, 400);
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
    PowerPlants powerPlant(landmarkBuilding, factory, 300.0f,100);
    powerPlant.applyUtility(landmarkBuilding);
    std::cout << "\nPowerPlant applied to Landmark: Electricity provided to building." << std::endl;

    // Display the remaining resource capacities
    std::cout << "\nFinal Resource Capacities:" << std::endl;
    factory->displayResourceStatus();

    std::cout << "\nCity-Utilities Integration Test Completed." << std::endl;

    // Clean up dynamically allocated resources with null checks
    if (residentialBuilding) {
        delete residentialBuilding;
        residentialBuilding = nullptr;
    }
    if (commercialBuilding) {
        delete commercialBuilding;
        commercialBuilding = nullptr;
    }
    if (industrialBuilding) {
        delete industrialBuilding;
        industrialBuilding = nullptr;
    }
    if (landmarkBuilding) {
        delete landmarkBuilding;
        landmarkBuilding = nullptr;
    }
    if (factory) {
        delete factory;
        factory = nullptr;
    }
 
}

void TestingResourcesAndUtilities(){
    testCityUtilitiesIntegration();
}

void TestingAdapter(){
    std::cout<<endl;
    std::cout<<"=================Testing Adapter=================";
    std::cout<<endl;
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
    std::cout<<std::endl;
    std::cout<<"=================Testing Observer=================";
    std::cout<<std::endl;
    
    City* city = new City();

    std::shared_ptr<PublicServicesDepartment> publicServicesDept = std::make_shared<PublicServicesDepartment>(city);

    std::vector<Citizen*> citizens;
    for (int i = 0; i < 27; ++i) {
        std::string name = "Citizen" + std::to_string(i + 1);
        Citizen* citizen = new Citizen(name, nullptr, publicServicesDept);
        citizens.push_back(citizen);
    }

    std::cout << "Registering citizens as observers...\n";
    for (Citizen* citizen : citizens) {
        publicServicesDept->addObserver(citizen);
    }

    std::cout << "\nUpdating available public services...\n";
    std::vector<std::string> updatedServices = {"HealthCare", "Education", "LawEnforcement"};
    publicServicesDept->updatePublicServices(updatedServices);

    std::cout << "\nNotifying citizens about the updates...\n";
    publicServicesDept->notifyObservers();

    std::cout << "\nDisplaying updated citizen satisfaction levels...\n";
    for (Citizen* citizen : citizens) {
        citizen->displayInfo();
        std::cout<<std::endl;
    }

    std::cout << "\nRemoving a few citizens as observers...\n";
    for (int i = 0; i < 5; ++i) {
        publicServicesDept->removeObserver(citizens[i]);
    }

    std::cout << "\nDisplaying updated citizen satisfaction levels...\n";
    for (int i = 5; i < citizens.size(); ++i) {
        citizens[i]->displayInfo();
        std::cout<<std::endl;
    }

    for (Citizen* citizen : citizens) {
        delete citizen;
    }
    delete city;
}

void testTemplate(){
    City *city= new City();
    PoliciesDepartment* pol = new PoliciesDepartment(city);
    pol->implementPolicy("Smack bad people");
    pol->Report();
    
    std::cout <<"here1\n";
    TaxationDepartment* tax =new TaxationDepartment(city);
    tax->updateTaxes(20);
    std::cout <<"here2\n";
    tax->Report();
    std::cout <<"here3\n";
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

    TestingResourcesAndUtilities();
    TestingComposite();
    //TestingCommand();
    TestingStrategyAndState();
    TestingAdapter();
    TestingObserver();
   // testTemplate();
    // testChain();
    
    
    return 0;
   
}
