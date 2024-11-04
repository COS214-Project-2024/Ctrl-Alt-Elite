#include "BudgetDepartment.h"
#include <iostream>

/**
 * @brief Constructs a BudgetDepartment and associates it with a city.
 * @param city The city that the BudgetDepartment will manage.
 */
BudgetDepartment::BudgetDepartment(City* city) : Government(city) {}

/**
 * @brief Manages the city’s budget-related tasks, notifying citizens of budget allocation.
 */
void BudgetDepartment::manageCity() {
    std::cout << "City budget has been allocated, notifying citizens..." << std::endl;
    // notifyObservers();
}

/**
 * @brief Allocates a specific budget amount to the city's financial resources.
 * @param budget The amount of money to allocate for city expenditures.
 */
void BudgetDepartment::allocateBudget(float budget) {
    allocatedBudget = budget;
}

/**
 * @brief Retrieves the current tax rate for the city.
 * @return The current tax rate as a float.
 */
float BudgetDepartment::getTaxrate() {
    return taxRate;
}
