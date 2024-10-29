#include "WasteManagement.h"

WasteManagement::WasteManagement(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, cost, factory), wasteCapacity(capacity), wasteGenerated(0) {
    resource = resourceFactory->getResource("Waste");
}

void WasteManagement::applyUtility(Building* building) {
    if (checkWasteCapacity()) {
        building->setWasteCollected(true);
        wasteGenerated += building->getWasteOutput();
    }
}

void WasteManagement::increaseRecyclingRate(float rate) {
    wasteCapacity += static_cast<int>(wasteCapacity * rate);
}

bool WasteManagement::checkWasteCapacity() {
    return wasteCapacity >= wasteGenerated;
}
