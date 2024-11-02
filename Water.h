#ifndef WATER_H
#define WATER_H

#include "Resource.h"
#include <iostream>

class Water : public Resource {
private:
    int capacity; //in Kilolitres, an average could be 1 000 000 KL

public:
    Water(int cap);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
