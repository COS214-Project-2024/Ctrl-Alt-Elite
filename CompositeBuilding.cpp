#include "CompositeBuilding.h"
#include "Residential.h"
#include <iostream>
#include <algorithm>

CompositeBuilding::CompositeBuilding()
{
    this->population =0;
    this->jobs =0;
    std::cout<< "Creating City\n";
    std::cout << "                      .|\n";
    std::cout << "                       | |\n";
    std::cout << "                       |'|            ._____\n";
    std::cout << "               ___    |  |            |.   |' .---\"|\n";
    std::cout << "       _    .-'   '-. |  |     .--'|  ||   | _|    |\n";
    std::cout << "    .-'|  _.|  |    ||   '-__  |   |  |    ||      |\n";
    std::cout << "    |' | |.    |    ||       | |   |  |    ||      |\n";
    std::cout << " ___|  '-'     '    \"\"       '-'   '-.'    '`      |____\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}


CompositeBuilding::CompositeBuilding(int population, int jobs)
{
    this->population = population;
    this->jobs = jobs;
    std::cout<< "Creating City\n";
    std::cout << "                      .|\n";
    std::cout << "                       | |\n";
    std::cout << "                       |'|            ._____\n";
    std::cout << "               ___    |  |            |.   |' .---\"|\n";
    std::cout << "       _    .-'   '-. |  |     .--'|  ||   | _|    |\n";
    std::cout << "    .-'|  _.|  |    ||   '-__  |   |  |    ||      |\n";
    std::cout << "    |' | |.    |    ||       | |   |  |    ||      |\n";
    std::cout << " ___|  '-'     '    \"\"       '-'   '-.'    '`      |____\n";
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

CompositeBuilding::~CompositeBuilding() {
    for (Building* building : buildings) {
        delete building;
    }
    buildings.clear();
}

void CompositeBuilding::addBuilding(Building* building) {
    buildings.push_back(building);
    std::cout << "Adding building to City.\n";
    
    std::cout << "      /\\-\\\\" << std::endl; // Use double backslashes for escaping
    std::cout << "     _||\"|_" << std::endl;
    std::cout << "    ~^~^~^~^" << std::endl;
}

void CompositeBuilding::removeBuilding(Building* building) {
    auto it = std::find(buildings.begin(), buildings.end(), building);
    if (it != buildings.end()) {
        delete *it;
        buildings.erase(it);
        std::cout << "Building removed from CompositeBuilding.\n";
    }
}

std::vector<Building *> CompositeBuilding::getbuildings()
{
    return this->buildings;
}

void CompositeBuilding::display()  {
    std::cout << "City Layout:\n";
    for ( Building* building : buildings) {
        building->display();
        std::cout << "-------------------\n";  
    }
}


Building* CompositeBuilding::clone() const {
    return new CompositeBuilding(*this);
}

void CompositeBuilding::performMaintenance(){
    maintainBuildings();
}

void CompositeBuilding::increasePopulation(int amount) {
    population += amount;
    std::cout << "Population increased by " << amount << ". Current population: " << population << "\n";
}

void CompositeBuilding::increaseJobs(int amount) {
    jobs += amount;
    std::cout << "Jobs increased by " << amount << ". Current jobs: " << jobs << "\n";
}

void CompositeBuilding::expandUtilities() {
    std::cout << "Expanding utilities for CompositeBuilding.\n";
    integrateUtilities();
}

void CompositeBuilding::displayCityState() {
    std::cout << "Displaying overall city state:\n";
    std::cout << "Total Population: " << population << "\n";
    std::cout << "Total Jobs: " << jobs << "\n";
    std::cout << "Total Tax Revenue: $" << calculateTaxRevenue() << "\n";
}

void CompositeBuilding::manageCapacity() {
    std::cout << "Managing capacity for each building.\n";
    for (Building* building : buildings) {
        Residential* residentialBuilding = dynamic_cast<Residential*>(building);
        if (residentialBuilding) {
            residentialBuilding->calculateOccupancyRate();
            double occupancyRate = residentialBuilding->getOccupancyRate();
            
            if (occupancyRate > 100) {
                std::cout << "Warning: Building over capacity!\n";
            } else if (occupancyRate < 80) {
                std::cout << "Building has available capacity.\n";
            }
        }
    }
}

void CompositeBuilding::maintainBuildings() {
    std::cout << "Performing maintenance on each building.\n";
    for (Building* building : buildings) {
        building->performMaintenance();
        std::cout << "Maintenance completed for building.\n";
    }
}



void CompositeBuilding::integrateUtilities() {
    // Adjust building functionalities based on utilities availability
    std::cout << "Integrating utilities for each building.\n";
    for (Building* building : buildings) {
        // Check and adjust based on utility availability
    }
}

// double CompositeBuilding::calculateTax()
// {
//     return 0.0;
// }

double CompositeBuilding::calculateTaxRevenue() const {
    double totalTaxRevenue = 0.0;
    // for (const Building* building : buildings) {
    //     // Hypothetical tax calculation based on building type and policies
    //     totalTaxRevenue += building->calculateTax();
    // }
    return totalTaxRevenue;
}



void CompositeBuilding::trackSatisfaction() {
    // std::cout << "Tracking satisfaction levels across all buildings.\n";
    // double totalSatisfaction = 0.0;
    // int numBuildings = 0;

    // for (Building* building : buildings) {
    //     double satisfactionRating = building->getSatisfactionRating();
    //     totalSatisfaction += satisfactionRating;
    //     numBuildings++;
    // }

    // if (numBuildings > 0) {
    //     double averageSatisfaction = totalSatisfaction / numBuildings;
    //     std::cout << "Overall city satisfaction rating: " << averageSatisfaction << "\n";
    // } else {
    //     std::cout << "No buildings to track satisfaction.\n";
    // }
}


BuildingIterator CompositeBuilding::createIterator() 
{
    return BuildingIterator(buildings.begin(), buildings.end());
}
