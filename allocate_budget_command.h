// allocate_budget_command.h
#ifndef ALLOCATE_BUDGET_COMMAND_H
#define ALLOCATE_BUDGET_COMMAND_H

#include "command.h"
#include "city.h"

class AllocateBudgetCommand : public Command {
private:
    City& city;
    std::string department;
    double amount;

public:
    AllocateBudgetCommand(City& c, const std::string& dept, double amt);
    void execute() override;
};

#endif // ALLOCATE_BUDGET_COMMAND_H
