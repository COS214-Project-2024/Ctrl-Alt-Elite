#ifndef WATER_SUPPLY_H
#define WATER_SUPPLY_H

#include "Utilities.h"

class WaterSupply : public Utilities {
private:
    int waterCapacity;
    int waterConsumed;

public:
    WaterSupply(Building* building, float cost, ResourceFactory* factory, int capacity);
    void applyUtility(Building* building) override;
    bool checkWaterSupply();
    void updateWaterConsumption(int newUsage);
};

#endif // WATER_SUPPLY_H
