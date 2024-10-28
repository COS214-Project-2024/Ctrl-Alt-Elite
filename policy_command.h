// policy_command.h
#ifndef POLICY_COMMAND_H
#define POLICY_COMMAND_H

#include "command.h"
#include "city.h"

class PolicyCommand : public Command {
private:
    City& city;
    std::string policy;

public:
    PolicyCommand(City& c, const std::string& pol);
    void execute() override;
};

#endif // POLICY_COMMAND_H
