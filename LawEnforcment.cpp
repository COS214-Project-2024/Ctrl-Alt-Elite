#include "LawEnforcment.h"

void LawEnforcment::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Law")
	{
		std::cout<< "Law Enforcement services have been provided to Citizen";
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
