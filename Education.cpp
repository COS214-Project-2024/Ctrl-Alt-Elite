#include "Education.h"

Education::Education(City* city):PublicServicesDepartment(city){}

void Education::handleRequest(int requestType) {

	std::cout<<"Entered Education Handler"<<std::endl;
	if(getAvailableServices()[requestType]=="Education")
	{
		std::cout<<"Education services have been provided to Citizen"<<std::endl;
	}
	else{
		PublicServicesDepartment::handleRequest(requestType);
	}
}
