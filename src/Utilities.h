#ifndef UTILITIES_H
#define UTILITIES_H

#include "Building.h"
#include "Resource.h"
#include "ResourceFactory.h"

class Utilities {
protected:
    Building* building;
    float utilityCost;
    Resource* resource;
    ResourceFactory* resourceFactory;

public:
    Utilities(Building* building, float cost, ResourceFactory* factory);
    virtual void applyUtility(Building* building) = 0;
    float getUtilityCost();
};

#endif // UTILITIES_H
