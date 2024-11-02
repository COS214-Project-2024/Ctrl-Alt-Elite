#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include "Building.h"

class Residential : public Building {
protected:
    int numResidents;
    int availableUnits;
    double occupancyRate; 
	
public:
    Residential();
    Residential(int numResidents, int avaiableUnits);
    virtual ~Residential();

    virtual void display() override;
    virtual void calculateOccupancyRate();
    virtual double getOccupancyRate() const;
    virtual int getNumResidents();
    virtual void performMaintenance();
    

    Building* clone() const override;
};

#endif
