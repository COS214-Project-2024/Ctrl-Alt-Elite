// policy_command.cpp
#include "policy_command.h"

PolicyCommand::PolicyCommand(PoliciesDepartment* dept, const std::string& policy)
        : policiesDepartment(dept), newPolicy(policy) {}

void PolicyCommand::execute() {
    policiesDepartment->implementPolicy(newPolicy);
    policiesDepartment->manageCity();
}
