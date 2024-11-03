#ifndef ESTATE_H
#define ESTATE_H

#include "Residential.h"

class Estate : public Residential {
public:

	Estate();
	~Estate();
   
    void display() const override;
    void calculateOccupancyRate();
};

#endif
