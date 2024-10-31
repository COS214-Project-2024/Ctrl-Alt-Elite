#include "Budget.h"

Budget::Budget(float amount, float cost) : Resource(cost), budgetAmount(amount) {}

int Budget::getCapacity() const {
    return budgetAmount;
}

void Budget::consume(int amount) {
    if (amount <= budgetAmount) budgetAmount -= amount;
}

void Budget::replenish(int amount) {
    budgetAmount += amount;
}
