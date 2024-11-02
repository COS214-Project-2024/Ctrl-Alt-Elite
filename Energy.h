#ifndef ENERGY_H
#define ENERGY_H

#include "Resource.h"
#include <iostream>

class Energy : public Resource {
private:
    int capacity; //in Kilowatts, an average could be 500 000 KW

public:
    Energy(int cap);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
