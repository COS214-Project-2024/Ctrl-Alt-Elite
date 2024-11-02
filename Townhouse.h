#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "Residential.h"

class Townhouse : public Residential {
public:
   Townhouse(int numResidents = 0, int availableUnits = 1);
   ~Townhouse() override;

    void display() override;
    void calculateOccupancyRate() override;
    int getNumResidents()override;
    void performMaintenance() override;
    void setNumResident(int ) override;
};

#endif
