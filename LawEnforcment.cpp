#include "LawEnforcment.h"

LawEnforcment::LawEnforcment(City* city):PublicServicesDepartment(city){}

void LawEnforcment::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Law")
	{
		std::cout<<"Law Enforcement services have been provided to Citizen"<<std::endl;
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
