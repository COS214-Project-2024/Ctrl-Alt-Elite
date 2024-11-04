#include "WasteManagement.h"
#include "Budget.h"

WasteManagement::WasteManagement(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, factory, cost), wasteCapacity(capacity), wasteGenerated(0) {

    if (factory) {
        Budget *budgetResource = dynamic_cast<Budget *>(factory->getResource("Budget"));
        Resource* materialsResource = factory->getResource("Materials");

        float materialCostFactor = 5.0f;  // Cost factor for materials
        float materialRequirement = cost / materialCostFactor;

        if (budgetResource && materialsResource) {
            // Check if sufficient budget and materials exist
            if (budgetResource->getCapacity() >= cost && materialsResource->getCapacity() >= materialRequirement) {
                budgetResource->consume(cost);               // Deduct from budget
                materialsResource->consume(materialRequirement);  // Deduct materials based on requirement
                std::cout << "WasteManagement constructed using $" << cost << " from budget and "
                          << materialRequirement << " units of Materials." << std::endl;
            } else {
                std::cout << "Insufficient Budget or Materials to construct WasteManagement." << std::endl;
            }
        } else {
            std::cout << "Budget or Materials resource is missing from factory." << std::endl;
        }
    }
}



void WasteManagement::applyUtility(Building* building) {
    if (checkWasteCapacity()) {
        building->setWasteCollected(true);
        wasteGenerated++;
    }
}

void WasteManagement::increaseRecyclingRate(float rate) {
    wasteCapacity += wasteCapacity * rate;
}

bool WasteManagement::checkWasteCapacity() {
    return wasteCapacity >= wasteGenerated;
}
