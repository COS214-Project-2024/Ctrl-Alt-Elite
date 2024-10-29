#include "HealthCare.h"

void HealthCare::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Health")
	{
		"Health care services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
