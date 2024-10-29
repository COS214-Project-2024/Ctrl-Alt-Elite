#include "PowerPlants.h"

PowerPlants::PowerPlants(Building* building, float cost, ResourceFactory* factory, int generated)
    : Utilities(building, cost, factory), powerGenerated(generated), powerConsumed(0) {
    resource = resourceFactory->getResource("Energy");
}

void PowerPlants::applyUtility(Building* building) {
    if (checkPowerAvailability()) {
        building->setHasElectricity(true);
        powerConsumed += building->getPowerRequirement();
    }
}

bool PowerPlants::checkPowerAvailability() {
    return powerGenerated >= powerConsumed;
}

void PowerPlants::updatePowerGeneration(int additionalPower) {
    powerGenerated += additionalPower;
}
