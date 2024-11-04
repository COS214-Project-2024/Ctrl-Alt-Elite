#ifndef PUBLIC_SERVICES_COMMAND_H
#define PUBLIC_SERVICES_COMMAND_H

#include "command.h"
#include "PublicServicesDepartment.h"
#include <vector>

/**
 * @class PublicServicesCommand
 * @brief Command class for managing public services within a city.
 * 
 * This class encapsulates the command to update and manage public services
 * provided by the PublicServicesDepartment. It holds the necessary data to
 * execute the command and interacts with the public services department.
 */
class PublicServicesCommand : public Command {
private:
    PublicServicesDepartment* publicServicesDepartment; ///< Pointer to the PublicServicesDepartment.
    std::vector<std::string> services; ///< List of services to be managed.

public:
    /**
     * @brief Constructs a PublicServicesCommand instance.
     * 
     * @param dept Pointer to the PublicServicesDepartment to be managed.
     * @param svc Vector containing the names of the services to be updated.
     */
    PublicServicesCommand(PublicServicesDepartment* dept, const std::vector<std::string>& svc);
    
    /**
     * @brief Executes the command to update public services.
     * 
     * This method updates the services in the PublicServicesDepartment
     * and manages the city services accordingly.
     */
    void execute() override;
};

#endif // PUBLIC_SERVICES_COMMAND_H
