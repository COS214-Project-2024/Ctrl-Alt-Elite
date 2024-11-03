#include "PublicServicesDepartment.h"
#include "City.h"

PublicServicesDepartment::PublicServicesDepartment(City* city) : Government(city) {
	this->handler=nullptr;
}

void PublicServicesDepartment::manageCity() {
	std::cout<<"Availible Public Services have been updated, notifying citizens..."<<std::endl;
	//notifyObservers();
}

void PublicServicesDepartment::updatePublicServices(std::vector<std::string> services) {
	this->availableServices=services;
	for (const auto& service : availableServices) {
        std::cout << service << " service added." << std::endl;
    }
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

float PublicServicesDepartment::getTaxrate() {
    return taxRate;
}
