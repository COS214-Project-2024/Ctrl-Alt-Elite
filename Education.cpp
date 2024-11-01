#include "Education.h"

Education::Education(City* city):PublicServicesDepartment(city){}

void Education::handleRequest(int requestType) {

	std::cout<<"Request has entered Education Service Department"<<std::endl;
	if(getAvailableServices()[requestType]=="Education")
	{
		std::cout<<"Education services have been provided to Citizen"<<std::endl;
	}
	else{
		std::cout<<"Education Service Department was unable to handle the request"<<std::endl;
		PublicServicesDepartment::handleRequest(requestType);
	}
}