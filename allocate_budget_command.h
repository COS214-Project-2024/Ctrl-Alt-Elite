#ifndef ALLOCATE_BUDGET_COMMAND_H
#define ALLOCATE_BUDGET_COMMAND_H

#include "command.h"
#include "City.h"
#include "BudgetDepartment.h"

/**
 * @class AllocateBudgetCommand
 * @brief A command to allocate a specified budget amount via the BudgetDepartment.
 * 
 * This class is responsible for executing a budget allocation command,
 * delegating the allocation to the BudgetDepartment, and triggering
 * city management operations.
 */
class AllocateBudgetCommand : public Command {
private:
    BudgetDepartment* budgetDepartment; /**< Pointer to the BudgetDepartment handling budget allocation. */
    float amount; /**< Amount of budget to allocate. */

public:
    /**
     * @brief Constructs an AllocateBudgetCommand with a specified department and amount.
     * @param dept Pointer to the BudgetDepartment responsible for allocation.
     * @param amt The amount to be allocated to the budget.
     */
    AllocateBudgetCommand(BudgetDepartment* dept, float amt);

    /**
     * @brief Executes the budget allocation by invoking the appropriate methods in BudgetDepartment.
     */
    void execute() override;
};

#endif // ALLOCATE_BUDGET_COMMAND_H
