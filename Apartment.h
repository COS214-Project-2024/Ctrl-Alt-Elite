#ifndef APARTMENT_H
#define APARTMENT_H

#include "Residential.h"

class Apartment : public Residential {
public:
   Apartment();
   ~Apartment() override;
   
    void display() const override;
    void calculateOccupancyRate();
};

#endif
