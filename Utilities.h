#ifndef UTILITIES_H
#define UTILITIES_H

#include "Resource.h"
#include "ResourceFactory.h"
#include "Building.h"

class Building;

class Utilities {
protected:
    Building* building;
    float utilityCost;
    Resource* resource;
    ResourceFactory* resourceFactory;

public:
    Utilities(Building* bld, ResourceFactory* rf, float cost);
    virtual ~Utilities() = default;

    virtual void applyUtility(Building* building) = 0;
    float getUtilityCost() const;
};

#endif
