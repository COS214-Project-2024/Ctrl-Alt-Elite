#ifndef HOUSE_H
#define HOUSE_H

#include "Residential.h"

class House : public Residential {
public:

    House(int numResidents = 0, int availableUnits = 1);
    ~House() override;

    void display() override;
    void calculateOccupancyRate() override;
    int getNumResidents();
    void performMaintenance() override;
    void setNumResident(int ) override;
};

#endif
