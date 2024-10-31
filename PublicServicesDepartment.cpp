#include "PublicServicesDepartment.h"

PublicServicesDepartment::PublicServicesDepartment(City* city):Government(city) {
	this->handler=nullptr;
}

void PublicServicesDepartment::manageCity() {
	std::cout<<"Availible Public Services have been updated, notifying citizens..."<<std::endl;
	//notifyObservers();
}

void PublicServicesDepartment::updatePublicServices(std::vector<std::string> services) {
	this->availableServices=services;
}

PublicServicesDepartment::PublicServicesDepartment() {}

void PublicServicesDepartment::setNextHandler(PublicServicesDepartment* handler) {
	this->handler=handler;
}

void PublicServicesDepartment::handleRequest(int requestType) {
	if(this->handler){
		this->handler->handleRequest(requestType);
	}
	else if(this->handler==nullptr)
	{
		std::cout<<"Failed to handle request"<<std::endl;
	}
	
}
