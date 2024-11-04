#ifndef BUDGET_H
#define BUDGET_H

#include "Resource.h"
#include <iostream>

/**
 * @class Budget
 * @brief Manages the financial resources allocated for various city functions.
 * 
 * The Budget class, inheriting from Resource, tracks the city's budget, allowing
 * for consumption and replenishment. It also allows querying the available budget.
 */
class Budget : public Resource {
private:
    float budget; ///< Available budget amount

public:
    /**
     * @brief Initializes the Budget with a specified amount.
     * @param amount Initial budget allocation.
     */
    Budget(float amount);

    /**
     * @brief Returns the current available budget.
     * @return The current budget as an integer.
     */
    int getCapacity() const override;

    /**
     * @brief Decreases the budget by a specified amount if sufficient funds are available.
     * @param amount The amount to consume from the budget.
     */
    void consume(int amount) override;

    /**
     * @brief Increases the budget by a specified amount.
     * @param amount The amount to add to the budget.
     */
    void replenish(int amount) override;
};

#endif // BUDGET_H
