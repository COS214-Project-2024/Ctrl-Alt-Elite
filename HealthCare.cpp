#include "HealthCare.h"

HealthCare::HealthCare(City* city):PublicServicesDepartment(city){}

void HealthCare::handleRequest(int requestType) {
	if(getAvailableServices()[requestType]=="Health")
	{
		std::cout<<"Health care services have been provided to Citizen"<<std::endl;
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
