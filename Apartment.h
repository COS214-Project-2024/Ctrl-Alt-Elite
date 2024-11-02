#ifndef APARTMENT_H
#define APARTMENT_H

#include "Residential.h"

class Apartment : public Residential {
public:
   Apartment(int numResidents = 0, int availableUnits = 1);
   ~Apartment() override;
   
    void display()  override;
    void calculateOccupancyRate();
    int getNumResidents()override;
    void performMaintenance() override;
    void setNumResident(int ) override;
};

#endif
