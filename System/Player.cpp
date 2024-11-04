#include "Player.h"
#include "City.h"
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


Player::Player()  {
    std::cout << "Welcome, Mayor! You are now in control of the city.\n";
    government = nullptr;
    policyDepartment = nullptr;
    budgetDepartment = nullptr;
    publicDepartment = nullptr;
    healthCare = nullptr;
    education = nullptr;
    lawEnforement = nullptr;
}

void Player::createCity() {
    std::cout << "Creating a new city.\n";
    std::cout << "1. Create Default City\n";
    std::cout << "2. Create Own City\n";

    int choice;
    std::cin >> choice;

    switch(choice){

        case 1 : this->city = new City (); 
        break;

        case 2 :{ 
            std::cout << "Enter Name of City:";
            std::string name ;
            int population; 
            std::cin >> name;
            std::cout << "Enter population City:";
            std::cin >> population;
    
            City* city = new City(name, population, 0.0);
            city->displayCityInformation();
        }
    }
    
}

void Player::addBuilding() { 
    std::cout << "Adding a building to the city.\n";
    std::cout << "1. Default Composite Building\n";
    std::cout << "2. Residential\n";
    std::cout << "3. Commercial\n";
    std::cout << "4. Industrial\n";
    std::cout << "5. Landmarks\n";
    std::cout << "6. All\n";
    
    int choice;
    std::cin >> choice;

    switch(choice) {
        case 1:
            this->compositeBuilding = new CompositeBuilding();
            std::cout << "Default composite building created.\n";
            break;

        case 2: {
            std::cout << "Enter amount of residential buildings to add: ";
            int amount;
            std::cin >> amount;

            this->compositeBuilding = new CompositeBuilding();

            for(int i = 0; i < amount; i++) {
                Residential* house = new House();
                Residential* townhouse = new Townhouse(); // Corrected typo here
                Residential* apartment = new Apartment();
                Residential* estate = new Estate();

                compositeBuilding->addBuilding(house);
                compositeBuilding->addBuilding(townhouse);
                compositeBuilding->addBuilding(apartment);
                compositeBuilding->addBuilding(estate);
            }
            std::cout << amount << " residential buildings added.\n";
            break;
        }

        case 3: {
            std::cout << "Enter amount of commercial buildings to add: ";
            int amount;
            std::cin >> amount;

            this->compositeBuilding = new CompositeBuilding();

            for(int i = 0; i < amount; i++) {
                Commercial* shop = new Shop();
                Commercial* mall = new Mall();
                Commercial* office = new Office();

                compositeBuilding->addBuilding(shop);
                compositeBuilding->addBuilding(mall);
                compositeBuilding->addBuilding(office);
            }
            std::cout << amount << " commercial buildings added.\n";
            break;
        }

        case 4: {
            std::cout << "Enter amount of industrial buildings to add: ";
            int amount;
            std::cin >> amount;

            this->compositeBuilding = new CompositeBuilding();

            for(int i = 0; i < amount; i++) {
                Industrial* factory = new Factories();
                Industrial* warehouse = new Warehouses();
                Industrial* plant = new Plants();

                compositeBuilding->addBuilding(factory);
                compositeBuilding->addBuilding(warehouse);
                compositeBuilding->addBuilding(plant);
            }
            std::cout << amount << " industrial buildings added.\n";
            break;
        }

        case 5: {
            std::cout << "Enter amount of landmarks to add: ";
            int amount;
            std::cin >> amount;

            this->compositeBuilding = new CompositeBuilding();

            for(int i = 0; i < amount; i++) {
                Landmarks* culturalCenter = new CulturalCenter();
                Landmarks* park = new Park();
                Landmarks* monument = new Monument();

                compositeBuilding->addBuilding(culturalCenter);
                compositeBuilding->addBuilding(park);
                compositeBuilding->addBuilding(monument);
            }
            std::cout << amount << " landmarks added.\n";
            break;
        }

        case 6:
            // Optionally implement the logic to add all types of buildings here
            std::cout << "Adding buildings of all types.\n";
            std::cout << "Enter amount of buildings to add: ";
            int amount;
            std::cin >> amount;

            this->compositeBuilding = new CompositeBuilding();

            for(int i = 0; i < amount; i++) {
                Residential* house = new House();
                Residential* townhouse = new Townhouse(); 
                Residential* apartment = new Apartment();
                Residential* estate = new Estate();

                compositeBuilding->addBuilding(house);
                compositeBuilding->addBuilding(townhouse);
                compositeBuilding->addBuilding(apartment);
                compositeBuilding->addBuilding(estate);

                Commercial* shop = new Shop();
                Commercial* mall = new Mall();
                Commercial* office = new Office();

                compositeBuilding->addBuilding(shop);
                compositeBuilding->addBuilding(mall);
                compositeBuilding->addBuilding(office);

                Industrial* factory = new Factories();
                Industrial* warehouse = new Warehouses();
                Industrial* plant = new Plants();

                compositeBuilding->addBuilding(factory);
                compositeBuilding->addBuilding(warehouse);
                compositeBuilding->addBuilding(plant);

                Landmarks* culturalCenter = new CulturalCenter();
                Landmarks* park = new Park();
                Landmarks* monument = new Monument();

                compositeBuilding->addBuilding(culturalCenter);
                compositeBuilding->addBuilding(park);
                compositeBuilding->addBuilding(monument);
            }
            std::cout << amount << " Buildings added.\n";
            break;
            

        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
    }
}


void Player::addCitizens() {
    std::cout << "Adding citizens to the city.\n";
    std::cout << "Enter amount of Citizens to add: ";

    int amount;
    std::cin >> amount;

    for(int i =0; i < amount; i++){
        Citizen* citizen = new Citizen;
        this->citizens.push_back(citizen);
    }
}

void Player::addGovernment() {
    std::cout << "Establishing government for the city.\n";
    government = new Government(this->city);
    taxDepartment = new TaxationDepartment(this->city);
    policyDepartment = new PoliciesDepartment(this->city);
    budgetDepartment = new BudgetDepartment(this->city);
    publicDepartment = new PublicServicesDepartment(this->city);
    healthCare = new HealthCare(this->city);
    education = new Education(this->city);
    lawEnforement = new LawEnforcment(this->city);

    
    int choice = -1;
    while(choice!=4)
    {
    std::cout << "Make updates to:\n";
    std::cout << "1. Tax rate\n";
    std::cout << "2. Budget\n";
    std::cout << "3. Policy\n";
    std::cout << "4. Return to menu\n";
    std::cin>>choice;
    switch(choice){
        case 1: {
            std::cout<<"Enter tax rate (1-50%):\n";
            float taxRate;
            std::cin>>taxRate;
            TaxCommand taxCommand(taxDepartment, taxRate);
            taxCommand.execute();
            taxDepartment->Report();
            break;
        };
        case 2:{
            std::cout<<"Enter budget:\n";
            float budget;
            std::cin>>budget;
            AllocateBudgetCommand budgetCommand(budgetDepartment, budget);
            budgetCommand.execute();
            budgetDepartment->Report();
            break;
        }
        case 3:{
            std::cout<<"Enter policy:\n";
            std::string policy;
            std::cin>>policy;
            PolicyCommand policyCommand(policyDepartment, policy);
            policyCommand.execute();
            policyDepartment->Report();
            break;
        }
        case 4:{
            choice=4;
            break;
        }
        default:
                std::cout << "Invalid choice. Please try again.\n";
                choice = 4;
                break;
    }
    }

    
}

void Player::performGovernmentPolicies() {
    if(publicDepartment){
        std::cout<<"Availible Public Services:";
	int count=0,choice=-1;
	for(std::string service:publicDepartment->getAvailableServices())
	{

		std::cout<<" \t"<<std::to_string(count++)<<"."<<service<<std::endl;
		std::cout<<"                          ";
	}
    std::cin>>choice;
    lawEnforement->setNextHandler(education);
    healthCare->setNextHandler(lawEnforement);
    publicDepartment->setNextHandler(healthCare);
    publicDepartment->handleRequest(choice);

    }
    else{
        std::cout<<"No public service available. Please ensure that you have added government to city\n";
    }
}

void Player::addResources() {
    float energyAmount , waterAmount, materialsAmount, budgetAmount;

    std::cout << "Adding resources to the city.\n";
    std::cout << "Enter Resource amount:\n";
    std::cout << "1. Default \n";
    std::cout << "2. Energy Amount:";
    std::cin >> energyAmount;
    std::cout << "2. Water Amount:";
    std::cin >> waterAmount;
    std::cout << "3. Materials Amount:";
    std::cin >> materialsAmount;
    std::cout << "2. Budget Amount:";
    std::cin>> budgetAmount;

   
    this->factory = new ResourceFactory(energyAmount, waterAmount,materialsAmount,budgetAmount);
    this->factory->displayResourceStatus();
    
}

void Player::addUtilities() {
    if (!compositeBuilding) {
        std::cout << "No composite building found. Please create a city first.\n";
        return;
    }

    std::cout << "Adding utilities to the city.\n";
    
    // Get the list of buildings in the composite building
    std::vector<Building*> buildings = compositeBuilding->getbuildings();

    if (buildings.empty()) {
        std::cout << "No buildings available in the city to add utilities.\n";
        return;
    }

    // Loop through each building and apply the appropriate utility
    for (Building* building : buildings) {
        if (!building) {
            std::cout << "Encountered a null building entry. Skipping.\n";
            continue;
        }
        
        try {

            factory->displayResourceStatus();
            // Check if the building is Residential and apply WasteManagement
            if (Residential* residentialBuilding = dynamic_cast<Residential*>(building)) {
                WasteManagement wasteManagement(residentialBuilding, 200, factory, 100);
                wasteManagement.applyUtility(residentialBuilding);
                std::cout << "Applied Waste Management to Residential Building.\n";
            }
            
            // Check if the building is Commercial and apply WaterSupply
            else if (Commercial* commercialBuilding = dynamic_cast<Commercial*>(building)) {
                std::cout << " here \n";
                WaterSupply waterSupply(commercialBuilding, factory, 200, 100);
                waterSupply.applyUtility(commercialBuilding);
                std::cout << "Applied Water Supply to Commercial Building.\n";
            }
            
            // Check if the building is Industrial and apply SewageSystems
            else if (Industrial* industrialBuilding = dynamic_cast<Industrial*>(building)) {
                SewageSystems sewageSystem(industrialBuilding, 200, factory, 100);
                sewageSystem.applyUtility(industrialBuilding);
                std::cout << "Applied Sewage System to Industrial Building.\n";
            }
            
            // Check if the building is a Landmark and apply PowerPlant
            else if (Landmarks* landmarkBuilding = dynamic_cast<Landmarks*>(building)) {
                PowerPlants powerPlant(landmarkBuilding, factory, 200, 100);
                powerPlant.applyUtility(landmarkBuilding);
                std::cout << "Applied Power Plant to Landmark Building.\n";
            } else {
                std::cout << "Building type is unrecognized. No utility applied.\n";
            }
        } catch (const std::exception& e) {
            std::cout << "An error occurred while applying utilities: " << e.what() << "\n";
        }
    }
}




void Player::performMaintenance() {
    std::cout << "Performing city maintenance.\n";
    compositeBuilding->performMaintenance();
}

void Player::performTransport() {
    int action;
        do {
            std::cout << "\nSelect an action:\n"
                      << "1. Choose Transport Mode\n"
                      << "2. Set Transport State\n"
                      << "3. Test Commute Time\n"
                      << "4. Check Availability\n"
                      << "5. Citizen Travel\n"
                      << "6. Display Citizen Info\n"
                      << "7. Update Satisfaction\n"
                      << "0. Exit\n";
            std::cin >> action;

            switch (action) {
                case 1: chooseTransportMode(); break;
                case 2: setState(); break;
                case 3: testCommuteTime(); break;
                case 4: checkAvailability(); break;
                case 5: travelCitizen(); break;
                // case 6: citizen.displayInfo(); break;
                // case 7: updateSatisfaction(); break;
                case 0: std::cout << "Exiting tests.\n"; break;
                default: std::cout << "Invalid action.\n"; break;
            }
        } while (action != 0);
}


    void Player:: chooseTransportMode() {
        int type, index;
        std::cout << "Choose mode type:\n1. Public Transport\n2. Private Transport\n";
        std::cin >> type;

        if (type == 1) {
            Player::choosePublicTransport();
        } else if (type == 2) {
            Player::choosePrivateTransport();
        } else {
            std::cout << "Invalid type.\n";
            return;
        }

        std::cout << "Assign transport to which slot (0-2) in citizen’s preferred modes? ";
        std::cin >> index;

       for (auto citizen : citizens) {
            if (citizen && index >= 0 && index < 3) {
                citizen->setTransportStrategy(this->selectedTransport, index);
            } else {
                std::cout << "Invalid slot or null citizen.\n";
            }
        }

        
    }

    void Player:: choosePublicTransport() {
        int option;
        std::cout << "Choose Public Transport:\n1. Bus\n2. Train\n3. Taxi\n4. Plane\n";
        std::cin >> option;

        switch (option) {
            case 1:
                selectedTransport = std::make_shared<Bus>(50, 10, 1.5, currentState);
                break;
            case 2:
                selectedTransport = std::make_shared<Train>(100, 5, 20.0, currentState);
                break;
            case 3:
                selectedTransport = std::make_shared<Taxi>(4, 0, 2.5, currentState);
                break;
            case 4:
                selectedTransport = std::make_shared<Plane>(200, 2, 150.0, currentState);
                break;
            default:
                std::cout << "Invalid public transport selection.\n";
                return;
        }
        std::cout << "Public transport mode selected.\n";
    }

    void Player:: choosePrivateTransport() {
        int option;
        std::cout << "Choose Private Transport:\n1. Car\n2. Bike\n3. Walk\n";
        std::cin >> option;

        switch (option) {
            case 1:
                selectedTransport = std::make_shared<Car>(5, 0.7, currentState);
                break;
            case 2:
                selectedTransport = std::make_shared<Bike>(1, currentState);
                break;
            case 3:
                selectedTransport = std::make_shared<Walk>(currentState);
                break;
            default:
                std::cout << "Invalid private transport selection.\n";
                return;
        }
        std::cout << "Private transport mode selected.\n";
    }

    void Player:: setState() {
        int stateOption;
        std::cout << "Set transport state:\n1. Busy\n2. Quiet\n3. Moderate\n";
        std::cin >> stateOption;

        switch (stateOption) {
            case 1:
                currentState = std::make_shared<BusyState>();
                std::cout << "State set to Busy.\n";
                break;
            case 2:
                currentState = std::make_shared<QuietState>();
                std::cout << "State set to Quiet.\n";
                break;
            case 3:
                currentState = std::make_shared<ModerateState>();
                std::cout << "State set to Moderate.\n";
                break;
            default:
                std::cout << "Invalid state selection.\n";
                return;
        }

        if (this->selectedTransport) {
            selectedTransport->setState(currentState);
        }
    }

    void Player:: testCommuteTime() {
        if (selectedTransport) {
            float distance;
            std::cout << "Enter travel distance in km: ";
            std::cin >> distance;

            // Determine mode type to pass to calculateCommuteTime
            std::string mode;
            if (std::dynamic_pointer_cast<Walk>(selectedTransport)) mode = "walk";
            else if (std::dynamic_pointer_cast<Bike>(selectedTransport)) mode = "bike";
            else if (std::dynamic_pointer_cast<Car>(selectedTransport)) mode = "car";
            else if (std::dynamic_pointer_cast<Bus>(selectedTransport)) mode = "bus";
            else if (std::dynamic_pointer_cast<Train>(selectedTransport)) mode = "train";
            else if (std::dynamic_pointer_cast<Taxi>(selectedTransport)) mode = "taxi";
            else if (std::dynamic_pointer_cast<Plane>(selectedTransport)) mode = "plane";
            else mode = "default";

            // Calculate and print commute time
            float time = selectedTransport->calculateCommuteTime(distance, -1, mode);
            std::cout << "Calculated commute time: " << time << " hours.\n";
        } else {
            std::cout << "No transport selected.\n";
        }
    }

    void Player:: checkAvailability() {
        if (selectedTransport && selectedTransport->isAvailable()) {
            std::cout << "The selected transport mode is available.\n";
        } else {
            std::cout << "The selected transport mode is not available.\n";
        } 
    }

    void Player::travelCitizen() {
        for (auto citizen : citizens) {
            if (citizen->canTravel()) {
                citizen->travel();
            } else {
                std::cout << "No available preferred transport mode for citizen.\n";
            }
        }
    }



    void Player::updateSatisfaction() {
        float updateValue;
        std::cout << "Enter satisfaction change (e.g., -5 for decrease, 5 for increase): ";
        std::cin >> updateValue;
        for (auto citizen : citizens) {
            citizen->updateSatisfaction(updateValue);
        }
    }



    void Player::removeBuilding() {
        std::cout << "Removing a building from the city.\n";
        if (!this->compositeBuilding) {
            std::cout << "No buildings available in the city to remove.\n";
            return;
        }

        std::cout << "Enter the type of building to remove:\n";
        std::cout << "1. Residential\n";
        std::cout << "2. Commercial\n";
        std::cout << "3. Industrial\n";
        std::cout << "4. Landmark\n";
        
        int choice;
        std::cin >> choice;

        BuildingIterator cityIt = this->compositeBuilding->createIterator();
        Building* buildingToRemove = nullptr;

        while (cityIt.hasNext()) {
            Building* current = cityIt.next();
            
            switch (choice) {
                case 1:
                    if (dynamic_cast<Residential*>(current)) {
                        buildingToRemove = current;
                    }
                    break;
                case 2:
                    if (dynamic_cast<Commercial*>(current)) {
                        buildingToRemove = current;
                    }
                    break;
                case 3:
                    if (dynamic_cast<Industrial*>(current)) {
                        buildingToRemove = current;
                    }
                    break;
                case 4:
                    if (dynamic_cast<Landmarks*>(current)) {
                        buildingToRemove = current;
                    }
                    break;
                default:
                    std::cout << "Invalid choice.\n";
                    return;
            }

            if (buildingToRemove) {
                compositeBuilding->removeBuilding(buildingToRemove);
                std::cout << "Building removed from the city.\n";
                //delete buildingToRemove;  // Clean up memory
                return;
            }
        }

        std::cout << "No matching building found to remove.\n";
    }


// void Player::removeCitizen() {
//     std::cout << "Removing a citizen from the city.\n";
    
//     if (!this->city->getCitizens().empty()) {
//         // Option 1: Remove a specific citizen by index
//         int index;
//         std::cout << "Enter the index of the citizen to remove: ";
//         std::cin >> index;

//         if (index >= 0 && index < this->city->getCitizens().size()) {
//             this->city->removeCitizen(index);
//             std::cout << "Citizen at index " << index << " removed.\n";
//         } else {
//             std::cout << "Invalid index. No citizen removed.\n";
//         }
//     } else {
//         std::cout << "No citizens to remove.\n";
//     }
// }


// void Player::removeGovernment() {
//     std::cout << "Removing government structure from the city.\n";
    
//     if (this->city->hasGovernment()) {
//         this->city->removeGovernment();
//         std::cout << "Government structure removed from the city.\n";
//     } else {
//         std::cout << "No government structure to remove.\n";
//     }
// }

// void Player::removeResource() {
//     std::cout << "Removing a resource from the city.\n";
    
//     std::cout << "Select resource type to remove:\n";
//     std::cout << "1. Energy\n2. Water\n3. Materials\n4. Budget\n";
    
//     int choice;
//     std::cin >> choice;
    
//     switch (choice) {
//         case 1:
//             this->city->removeResource("Energy");
//             std::cout << "Energy resource removed.\n";
//             break;
//         case 2:
//             this->city->removeResource("Water");
//             std::cout << "Water resource removed.\n";
//             break;
//         case 3:
//             this->city->removeResource("Materials");
//             std::cout << "Materials resource removed.\n";
//             break;
//         case 4:
//             this->city->removeResource("Budget");
//             std::cout << "Budget resource removed.\n";
//             break;
//         default:
//             std::cout << "Invalid choice. No resource removed.\n";
//             break;
//     }
// }



// void Player::removeUtility() {
//     std::cout << "Removing a utility from the city.\n";
//     // Logic for removing utilities from the city
// }

void Player::increasePopulation(int amount) {
    std::cout << "Increasing population by " << amount << ".\n";
    CityBuilder builder;
    builder.buildPopulationGrowth(amount);
    this->compositeBuilding = builder.getCompositeBuilding();
}

void Player::increaseJobs(int amount) {
    std::cout << "Increasing jobs by " << amount << ".\n";
    CityBuilder builder;
    builder.buildJobGrowth(amount);
    this->compositeBuilding = builder.getCompositeBuilding();
}

void Player::showCityState() {
    std::cout << "Displaying the current state of the city.\n";
    this->compositeBuilding->display();
}
//end
