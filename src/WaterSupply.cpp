#include "WaterSupply.h"

WaterSupply::WaterSupply(Building* building, float cost, ResourceFactory* factory, int capacity)
    : Utilities(building, cost, factory), waterCapacity(capacity), waterConsumed(0) {
    resource = resourceFactory->getResource("Water");
}

void WaterSupply::applyUtility(Building* building) {
    if (checkWaterSupply()) {
        building->setHasWaterSupply(true);
        waterConsumed += building->getWaterRequirement();
    }
}

bool WaterSupply::checkWaterSupply() {
    return waterCapacity >= waterConsumed;
}

void WaterSupply::updateWaterConsumption(int newUsage) {
    waterConsumed += newUsage;
}
