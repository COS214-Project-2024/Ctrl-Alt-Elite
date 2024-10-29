#include "PublicServicesDepartment.h"

PublicServicesDepartment::PublicServicesDepartment(City* city):Government(city) {}

void PublicServicesDepartment::manageCity() {
	std::cout<<"Availible Public Services have been updated, notifying citizens..."<<std::endl;
	notifyObservers();
}

void PublicServicesDepartment::updatePublicServices(std::vector<std::string> services) {
	this->availableServices=services;
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
