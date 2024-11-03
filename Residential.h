#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include "Building.h"

class Residential : public Building {
private:
    int numResidents;
    int availableUnits;
    double occupancyRate; 
	
public:
    Residential();
    ~Residential();

    void display() const override;
    void calculateOccupancyRate();
    int getNumResidents();
    

    Building* clone() const override;
};

#endif
