#include "WaterSupply.h"
#include "Water.h"

WaterSupply::WaterSupply(Building* bld, ResourceFactory* rf, float cost)
    : Utilities(bld, rf, cost), waterCapacity(1000), waterConsumed(200) {
    resource = resourceFactory->getResource("Water");
}

void WaterSupply::applyUtility(Building* building) {
    if (checkWaterSupply()) {
        dynamic_cast<Water*>(resource)->consume(waterConsumed);
        building->setHasWaterSupply(true);
    } else {
        building->setHasWaterSupply(false);
    }
}

bool WaterSupply::checkWaterSupply() const {
    return dynamic_cast<Water*>(resource)->getCapacity() >= waterConsumed;
}

void WaterSupply::updateWaterConsumption(int newUsage) {
    waterConsumed = newUsage;
}
