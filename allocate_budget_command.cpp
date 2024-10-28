// allocate_budget_command.cpp
#include "allocate_budget_command.h"

AllocateBudgetCommand::AllocateBudgetCommand(City& c, const std::string& dept, double amt)
        : city(c), department(dept), amount(amt) {}

void AllocateBudgetCommand::execute() {
    city.allocateBudget(department, amount);
}
