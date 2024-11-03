#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "Residential.h"

class Townhouse : public Residential {
public:
   Townhouse();
   ~Townhouse() override;

    void display() const override;
    void calculateOccupancyRate();
};

#endif
