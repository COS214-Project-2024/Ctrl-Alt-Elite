#include "PowerPlants.h"
#include "Energy.h"

PowerPlants::PowerPlants(Building* bld, ResourceFactory* rf, float cost)
    : Utilities(bld, rf, cost), powerGenerated(1000), powerConsumed(500) {
    resource = resourceFactory->getResource("Energy");
}

void PowerPlants::applyUtility(Building* building) {
    if (checkPowerAvailability()) {
        dynamic_cast<Energy*>(resource)->consume(powerConsumed);
        building->setHasElectricity(true);
    } else {
        building->setHasElectricity(false);
    }
}

bool PowerPlants::checkPowerAvailability() const {
    return dynamic_cast<Energy*>(resource)->getCapacity() >= powerConsumed;
}

void PowerPlants::updatePowerGeneration(int additionalPower) {
    powerGenerated += additionalPower;
}
