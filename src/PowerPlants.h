#ifndef POWER_PLANTS_H
#define POWER_PLANTS_H

#include "Utilities.h"

class PowerPlants : public Utilities {
private:
    int powerGenerated;
    int powerConsumed;

public:
    PowerPlants(Building* building, float cost, ResourceFactory* factory, int generated);
    void applyUtility(Building* building) override;
    bool checkPowerAvailability();
    void updatePowerGeneration(int additionalPower);
};

#endif // POWER_PLANTS_H
