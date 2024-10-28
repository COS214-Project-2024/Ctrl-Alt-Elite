// public_services_command.h
#ifndef PUBLIC_SERVICES_COMMAND_H
#define PUBLIC_SERVICES_COMMAND_H

#include "command.h"
#include "city.h"

class PublicServicesCommand : public Command {
private:
    City& city;
    std::string service;

public:
    PublicServicesCommand(City& c, const std::string& svc);
    void execute() override;
};

#endif // PUBLIC_SERVICES_COMMAND_H
