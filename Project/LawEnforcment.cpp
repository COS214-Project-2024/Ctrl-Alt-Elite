#include "LawEnforcment.h"

void LawEnforcment::handleRequest(int requestType) {
	if(services[requestType]=="Law")
	{
		"Law Enforcement services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
