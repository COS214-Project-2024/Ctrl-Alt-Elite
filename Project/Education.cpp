#include "Education.h"

void Education::handleRequest(int requestType) {
	if(requestType=1)
	{
		"Education services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
