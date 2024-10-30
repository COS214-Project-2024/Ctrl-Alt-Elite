#ifndef WATER_H
#define WATER_H

#include "Resource.h"

class Water : public Resource {
private:
    int capacity;

public:
    Water(int cap, float cost);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
