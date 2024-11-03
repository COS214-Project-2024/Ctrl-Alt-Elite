#ifndef WATER_SUPPLY_H
#define WATER_SUPPLY_H

#include "Utilities.h"

class WaterSupply : public Utilities {
private:
    int waterCapacity;
    int waterConsumed;

public:
    WaterSupply(Building* bld, ResourceFactory* rf, float cost);
    void applyUtility(Building* building) override;
    bool checkWaterSupply() const;
    void updateWaterConsumption(int newUsage);
};

#endif
