// policy_command.h
#ifndef POLICY_COMMAND_H
#define POLICY_COMMAND_H

#include "command.h"
#include "PoliciesDepartment.h"

class PolicyCommand : public Command {
private:
    PoliciesDepartment* policiesDepartment;
    std::string newPolicy;

public:
    PolicyCommand(PoliciesDepartment* dept, const std::string& policy);
    void execute() override;
    std::string getPolicy();
};

#endif // POLICY_COMMAND_H
