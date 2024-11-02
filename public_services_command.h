// public_services_command.h
#ifndef PUBLIC_SERVICES_COMMAND_H
#define PUBLIC_SERVICES_COMMAND_H

#include "command.h"
#include "PublicServicesDepartment.h"

class PublicServicesCommand : public Command {
private:
    PublicServicesDepartment* publicServicesDepartment;
    std::vector<std::string> services;

public:
    PublicServicesCommand(PublicServicesDepartment* dept, const std::vector<std::string>& svc);
    void execute() override;
};

#endif // PUBLIC_SERVICES_COMMAND_H
