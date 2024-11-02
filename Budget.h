#ifndef BUDGET_H
#define BUDGET_H

#include "Resource.h"
#include <iostream>
class Budget : public Resource {
private:
    float budget;

public:
    Budget(float amount);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
