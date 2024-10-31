#ifndef HOUSE_H
#define HOUSE_H

#include "Residential.h"

class House : public Residential {
public:
    House();
	~House()override;

    void display() const override;
    void calculateOccupancyRate();
};

#endif
