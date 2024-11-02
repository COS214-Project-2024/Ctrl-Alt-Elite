// allocate_budget_command.cpp
#include "allocate_budget_command.h"

AllocateBudgetCommand::AllocateBudgetCommand(BudgetDepartment* dept, float amt)
        : budgetDepartment(dept), amount(amt) {}

void AllocateBudgetCommand::execute() {
    budgetDepartment->allocateBudget(amount);
    budgetDepartment->setAllocatedBudget(amount);
    budgetDepartment->manageCity();
}
