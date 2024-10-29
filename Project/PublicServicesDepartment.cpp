#include "PublicServicesDepartment.h"

PublicServicesDepartment::PublicServicesDepartment(City* city):Government(city) {}

void PublicServicesDepartment::manageCity() {
	// TODO - implement PublicServicesDepartment::manageCity
	throw "Not yet implemented";
}

void PublicServicesDepartment::updatePublicServices(std::vector<std::string> services) {
	
}

PublicServicesDepartment::PublicServicesDepartment() {}

void PublicServicesDepartment::setNextHandler(PublicServicesDepartment* handler) {
	this->successor=handler;
}

void PublicServicesDepartment::handleRequest(int requestType) {
	if(successor)
	{
		successor->handleRequest(requestType);
	}
	else
	{
		std::cout<<"failed to handle request"<<std::endl;
	}
}
