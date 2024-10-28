// policy_command.cpp
#include "policy_command.h"

PolicyCommand::PolicyCommand(City& c, const std::string& pol) : city(c), policy(pol) {}

void PolicyCommand::execute() {
    city.enforcePolicy(policy);
}
