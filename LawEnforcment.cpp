#include "LawEnforcment.h"

void LawEnforcment::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Law")
	{
		"Law Enforcement services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
