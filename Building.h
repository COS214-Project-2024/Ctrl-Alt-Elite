#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>

#include "Citizen.h"
#include "Utilities.h"
#include "Resource.h"
#include "Iterator.h"

class Building {
protected:
    std::vector<Citizen*> citizens;
    Utilities* utilities;
    bool hasElectricity;
    bool hasWaterSupply;
    bool wasteCollected;
    bool sewageManaged;
    bool underConstruction;
    bool available;

public:
    virtual ~Building() = default;

    virtual void display() const = 0;
    virtual Building* clone() const = 0;

    void allocateResources(Resource* resource);
    
};

#endif
