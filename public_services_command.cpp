// public_services_command.cpp
#include "public_services_command.h"

PublicServicesCommand::PublicServicesCommand(City& c, const std::string& svc) : city(c), service(svc) {}

void PublicServicesCommand::execute() {
    city.providePublicService(service);
}
