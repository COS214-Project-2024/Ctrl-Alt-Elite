#ifndef ESTATE_H
#define ESTATE_H

#include "Residential.h"

class Estate : public Residential {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void calculateOccupancyRate();
};

#endif
