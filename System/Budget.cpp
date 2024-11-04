#include "Budget.h"

/**
 * @brief Constructs a Budget with the given initial amount.
 * @param amount The initial budget allocation.
 */
Budget::Budget(float amount) : Resource(0), budget(amount) {}

/**
 * @brief Returns the current budget amount.
 * @return The current budget as an integer.
 */
int Budget::getCapacity() const {
    return budget;
}

/**
 * @brief Consumes a specified amount from the budget if there are sufficient funds.
 * @param amount Amount to be deducted from the budget.
 */
void Budget::consume(int amount) {
    if (amount <= budget) {
        budget -= amount;
    } else {
        std::cout << "Amount/Cost is above current budget" << std::endl;
    }
}

/**
 * @brief Replenishes the budget by the specified amount.
 * @param amount The amount to add to the budget.
 */
void Budget::replenish(int amount) {
    budget += amount;
}
