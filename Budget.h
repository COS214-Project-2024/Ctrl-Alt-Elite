#ifndef BUDGET_H
#define BUDGET_H

#include "Resource.h"

class Budget : public Resource {
private:
    float budgetAmount;

public:
    Budget(float amount, float cost);
    int getCapacity() const override;
    void consume(int amount) override;
    void replenish(int amount) override;
};

#endif
