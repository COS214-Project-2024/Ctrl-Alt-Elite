#include "LawEnforcment.h"

LawEnforcment::LawEnforcment(City* city):PublicServicesDepartment(city){}

void LawEnforcment::handleRequest(int requestType) {
	std::cout<<"Request has entered Law Enforcement Service Department"<<std::endl;
	//Check if request type matches the service
	if(getAvailableServices()[requestType]=="Law")
	{
		std::cout<<"Law Enforcement services have been provided to Citizen"<<std::endl;
	}
	else{
		std::cout<<"Law Enforcement Service Department was unable to handle the request"<<std::endl;
		//Base class handle request
		PublicServicesDepartment::handleRequest(requestType);
	}
}
