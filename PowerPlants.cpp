#include "PowerPlants.h"
#include "Energy.h"
#include "Budget.h"
PowerPlants::PowerPlants(Building *bld, ResourceFactory *rf, float cost, int capacity)
    : Utilities(bld, rf, cost), powerGenerated(capacity), powerConsumed(50) {
    
    //resource = nullptr;  // Default to nullptr until successful construction

    if (rf) {
        Budget* budgetResource = dynamic_cast<Budget*>(rf->getResource("Budget"));
        Resource* materialsResource = rf->getResource("Materials");

        float materialCostFactor = 5.0f;  // Cost factor for materials
        float materialRequirement = cost / materialCostFactor;

        if (budgetResource && materialsResource) {
            // Check if sufficient budget and materials exist
            if (budgetResource->getCapacity() >= cost && materialsResource->getCapacity() >= materialRequirement) {
                budgetResource->consume(cost);               // Deduct from budget
                materialsResource->consume(materialRequirement);  // Deduct materials based on requirement
                resource = rf->getResource("Energy");        // Only assign resource if deductions are successful
                std::cout << "PowerPlants constructed using $" << cost << " from budget and "
                          << materialRequirement << " units of Materials." << std::endl;
            } else {
                std::cout << "Insufficient Budget or Materials to construct PowerPlant." << std::endl;
            }
        } else {
            std::cout << "Budget or Materials resource is missing from factory." << std::endl;
        }
    }
}

void PowerPlants::applyUtility(Building* building) {
    if (checkPowerAvailability()) {
        Energy* energyResource = dynamic_cast<Energy*>(resource);

        if (energyResource && energyResource->getCapacity() >= powerConsumed) {
            energyResource->consume(powerConsumed);
            building->setHasElectricity(true);
            std::cout << "PowerPlants: Successfully supplied " << powerConsumed 
                      << " units of electricity to the building." << std::endl;
        } else {
            building->setHasElectricity(false);
            std::cout << "PowerPlants: Insufficient energy available. Only " 
                      << (energyResource ? energyResource->getCapacity() : 0) 
                      << " units remain, but " << powerConsumed 
                      << " units are required." << std::endl;
        }
    } else {
        building->setHasElectricity(false);
        std::cout << "PowerPlants: Unable to provide electricity due to insufficient supply." << std::endl;
    }
}


bool PowerPlants::checkPowerAvailability() const {
    return dynamic_cast<Energy*>(resource)->getCapacity() >= powerConsumed;
}

void PowerPlants::updatePowerGeneration(int additionalPower) {
    powerGenerated += additionalPower;
}
