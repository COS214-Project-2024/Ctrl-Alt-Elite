#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include "Building.h"

class Residential : public Building {
private:
    int numResidents;
    int availableUnits;

public:
    Residential();
    ~Residential();

    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void calculateOccupancyRate();
    int getNumResidents();
    

    Building* clone() const override;
};

#endif
