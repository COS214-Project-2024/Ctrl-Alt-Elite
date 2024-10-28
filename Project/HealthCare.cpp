#include "HealthCare.h"

void HealthCare::handleRequest(int requestType) {
	if(requestType=0)
	{
		"Health care services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
