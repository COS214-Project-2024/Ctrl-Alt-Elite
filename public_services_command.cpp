// public_services_command.cpp
#include "public_services_command.h"

PublicServicesCommand::PublicServicesCommand(PublicServicesDepartment* dept, const std::vector<std::string>& svc)
        : publicServicesDepartment(dept), services(svc) {}

void PublicServicesCommand::execute() {
    publicServicesDepartment->updatePublicServices(services);
    publicServicesDepartment->manageCity();
}
