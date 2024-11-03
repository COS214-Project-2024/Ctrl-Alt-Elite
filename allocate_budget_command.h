// allocate_budget_command.h
#ifndef ALLOCATE_BUDGET_COMMAND_H
#define ALLOCATE_BUDGET_COMMAND_H

#include "command.h"
#include "City.h"
#include "BudgetDepartment.h"

class AllocateBudgetCommand : public Command {
private:
    BudgetDepartment* budgetDepartment;
    float amount;

public:
    AllocateBudgetCommand(BudgetDepartment* dept, float amt);
    void execute() override;
    float getAllocatedBudget();
};

#endif // ALLOCATE_BUDGET_COMMAND_H
