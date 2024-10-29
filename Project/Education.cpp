#include "Education.h"

void Education::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Education")
	{
		"Education services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
