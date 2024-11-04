#ifndef POLICY_COMMAND_H
#define POLICY_COMMAND_H

#include "command.h"
#include "PoliciesDepartment.h"

/**
 * @class PolicyCommand
 * @brief Represents a command to implement a policy in the Policies Department.
 * 
 * The PolicyCommand class encapsulates the details necessary to implement
 * a specific policy through the PoliciesDepartment, following the command pattern.
 */
class PolicyCommand : public Command {
private:
    PoliciesDepartment* policiesDepartment; ///< Pointer to the PoliciesDepartment associated with this command.
    std::string newPolicy; ///< The new policy to be implemented.

public:
    /**
     * @brief Constructs a PolicyCommand with the specified PoliciesDepartment and policy.
     * 
     * @param dept Pointer to the PoliciesDepartment where the policy will be implemented.
     * @param policy The policy string that needs to be implemented.
     */
    PolicyCommand(PoliciesDepartment* dept, const std::string& policy);

    /**
     * @brief Executes the command to implement the policy in the Policies Department.
     * 
     * This method calls the implementPolicy method on the associated PoliciesDepartment
     * and manages the city according to the new policy.
     */
    void execute() override;
};

#endif // POLICY_COMMAND_H
