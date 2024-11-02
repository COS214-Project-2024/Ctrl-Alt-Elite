#include "Budget.h"

// cost is 0 because making a budget is not expense
Budget::Budget(float amount) : Resource(0), budget(amount) {}

int Budget::getCapacity() const {
    return budget;
}

void Budget::consume(int amount) {
    if (amount <= budget) {
        budget -= amount;
    }
    else std::cout << "Amount/Cost is above current budget" << std::endl;
}

void Budget::replenish(int amount) {
    budget += amount;
}
