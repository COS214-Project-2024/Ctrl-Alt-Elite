#ifndef ENERGY_H
#define ENERGY_H

#include "Resource.h"

class Energy : public Resource {
private:
    int capacity;

public:
    Energy(int cap, float cost);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
