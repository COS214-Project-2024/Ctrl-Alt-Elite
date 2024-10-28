#include "LawEnforcment.h"

void LawEnforcment::handleRequest(int requestType) {
	if(requestType=2)
	{
		"Law Enforcement services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
