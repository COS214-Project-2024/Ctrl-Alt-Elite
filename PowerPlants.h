#ifndef POWER_PLANTS_H
#define POWER_PLANTS_H

#include "Utilities.h"

class PowerPlants : public Utilities {
private:
    int powerGenerated;
    int powerConsumed;

public:
    PowerPlants(Building* bld, ResourceFactory* rf, float cost);
    void applyUtility(Building* building) override;
    bool checkPowerAvailability() const;
    void updatePowerGeneration(int additionalPower);

    // Getters
    int getPowerGenerated() const { return powerGenerated; }
    int getPowerConsumed() const { return powerConsumed; }
};

#endif
