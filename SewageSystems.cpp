#include "SewageSystems.h"
#include "Budget.h"
SewageSystems::SewageSystems(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, factory, cost), sewageCapacity(capacity), sewageGenerated(0) {

    if (factory) {
       Budget *budgetResource = dynamic_cast<Budget *>(factory->getResource("Budget"));
        Resource* materialsResource = factory->getResource("Materials");

        float materialCostFactor = 5.0f;  // Cost factor for materials
        float materialRequirement = cost / materialCostFactor;

        if (budgetResource && materialsResource) {
            // Check if sufficient budget and materials exist
            if (budgetResource->getCapacity() >= cost && materialsResource->getCapacity() >= materialRequirement) {
                budgetResource->consume(cost);               // Deduct from budget
                materialsResource->consume(materialRequirement);  // Deduct materials based on requiremen
                std::cout << "SewageSystems constructed using $" << cost << " from budget and "
                          << materialRequirement << " units of Materials." << std::endl;
            } else {
                std::cout << "Insufficient Budget or Materials to construct SewageSystem." << std::endl;
            }
        } else {
            std::cout << "Budget or Materials resource is missing from factory." << std::endl;
        }
    }
}


void SewageSystems::applyUtility(Building* building) {
    if (checkSewageCapacity()) {
        building->setSewageManaged(true);
        sewageGenerated++;
    }
}

bool SewageSystems::checkSewageCapacity() {
    return sewageCapacity >= sewageGenerated;
}

void SewageSystems::updateSewageCapacity(int newCapacity) {
    sewageCapacity += newCapacity;
}
