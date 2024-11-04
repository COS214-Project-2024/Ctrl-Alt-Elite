#include "allocate_budget_command.h"

/**
 * @brief Constructor initializing the BudgetDepartment and amount to allocate.
 * @param dept Pointer to the BudgetDepartment responsible for handling the budget allocation.
 * @param amt Amount to allocate.
 */
AllocateBudgetCommand::AllocateBudgetCommand(BudgetDepartment* dept, float amt)
        : budgetDepartment(dept), amount(amt) {}

/**
 * @brief Executes the allocation command by delegating budget allocation and management tasks to BudgetDepartment.
 */
void AllocateBudgetCommand::execute() {
    budgetDepartment->allocateBudget(amount);
    budgetDepartment->manageCity();
}
