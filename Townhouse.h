#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "Residential.h"

class Townhouse : public Residential {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void calculateOccupancyRate();
};

#endif
