#ifndef WASTE_MANAGEMENT_H
#define WASTE_MANAGEMENT_H

#include "Utilities.h"

class WasteManagement : public Utilities {
private:
    int wasteCapacity;
    int wasteGenerated;

public:
    WasteManagement(Building* building, float cost, ResourceFactory* factory, int capacity);
    void applyUtility(Building* building) override;
    void increaseRecyclingRate(float rate);
    bool checkWasteCapacity();
};

#endif // WASTE_MANAGEMENT_H
