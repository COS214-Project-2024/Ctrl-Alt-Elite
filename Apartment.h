#ifndef APARTMENT_H
#define APARTMENT_H

#include "Residential.h"

class Apartment : public Residential {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void calculateOccupancyRate();
};

#endif
