#ifndef BUDGETDEPARTMENT_H
#define BUDGETDEPARTMENT_H

#include "Government.h"

/**
 * @class BudgetDepartment
 * @brief Handles budget allocation and financial management within the city government.
 * 
 * The BudgetDepartment is responsible for managing the city's budget, including allocation
 * and other financial adjustments. It extends the Government class and overrides key methods 
 * related to budget management.
 */
class BudgetDepartment : public Government {
public:
    /**
     * @brief Constructs a BudgetDepartment associated with a specific city.
     * @param city Pointer to the city this department is managing.
     */
    BudgetDepartment(City* city);

    /**
     * @brief Manages the city by executing budget-related tasks.
     * 
     * This includes notifying citizens and observers when budget allocations are made.
     */
    void manageCity() override;

    /**
     * @brief Allocates a specified budget for the city's operations.
     * @param budget The amount of budget to allocate.
     */
    void allocateBudget(float budget);

    /**
     * @brief Updates the tax rate for the city.
     * @param newTaxRate The new tax rate to apply.
     */
    void updateTaxes(float newTaxRate);

    /**
     * @brief Implements a specific policy in the city.
     * @param policy A string representing the policy to implement.
     */
    void implementPolicy(const std::string& policy);

    /**
     * @brief Updates the list of public services provided by the city.
     * @param services A list of services to be updated.
     */
    void updatePublicServices(const std::vector<std::string>& services);

    /**
     * @brief Gets the current tax rate in the city.
     * @return The current tax rate as a float.
     */
    float getTaxrate();
};

#endif // BUDGETDEPARTMENT_H
