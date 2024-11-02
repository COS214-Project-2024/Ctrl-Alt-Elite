#ifndef ESTATE_H
#define ESTATE_H

#include "Residential.h"

class Estate : public Residential {
public:

	Estate(int numResidents = 0, int availableUnits = 1);
	~Estate();
   
    void display() override;
    void calculateOccupancyRate() override;
    int getNumResidents()override;
    void performMaintenance() override;
    void setNumResident(int ) override;
};

#endif
