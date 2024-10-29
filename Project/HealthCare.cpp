#include "HealthCare.h"

void HealthCare::handleRequest(int requestType) {
	if(services[requestType]=="Health")
	{
		"Health care services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
