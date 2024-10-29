#ifndef HOUSE_H
#define HOUSE_H

#include "Residential.h"

class House : public Residential {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void calculateOccupancyRate();
};

#endif
