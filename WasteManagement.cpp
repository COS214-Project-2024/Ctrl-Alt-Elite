#include "WasteManagement.h"

WasteManagement::WasteManagement(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, factory, cost ), wasteCapacity(capacity), wasteGenerated(0) {
    resource = resourceFactory->getResource("Waste");
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
