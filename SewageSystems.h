#ifndef SEWAGE_SYSTEMS_H
#define SEWAGE_SYSTEMS_H

#include "Utilities.h"

class SewageSystems : public Utilities {
private:
    int sewageCapacity;
    int sewageGenerated;

public:
    SewageSystems(Building* building, float cost, ResourceFactory* factory, int capacity);
    void applyUtility(Building* building) override;
    bool checkSewageCapacity();
    void updateSewageCapacity(int newCapacity);

    // Getters
    int getSewageCapacity() const { return sewageCapacity; }
    int getSewageGenerated() const { return sewageGenerated; }
};

#endif // SEWAGE_SYSTEMS_H
