#include "SewageSystems.h"

SewageSystems::SewageSystems(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, factory, cost), sewageCapacity(capacity), sewageGenerated(0) {
    resource = resourceFactory->getResource("Sewage");
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
