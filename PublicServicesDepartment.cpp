// PublicServicesDepartment.cpp
#include "PublicServicesDepartment.h"

PublicServicesDepartment::PublicServicesDepartment(City* city) : Government(city), handler(nullptr) {
 availableServices={"Health", "Law", "Education"};
}

void PublicServicesDepartment::manageCity() {
    std::cout << "Available Public Services have been updated, notifying citizens..." << std::endl;
    // notifyObservers(); // Commented out to focus on Command functionality
}

void PublicServicesDepartment::updatePublicServices(const std::vector<std::string>& services) {
    availableServices = services;
    std::cout << "PublicServicesDepartment: Public services updated." << std::endl;
}

void PublicServicesDepartment::setNextHandler(PublicServicesDepartment* handler) {
    this->handler = handler;
}

void PublicServicesDepartment::handleRequest(int requestType) {
    std::cout<<"Public Service Department is handling a request..."<<std::endl;
    if(this->handler){
        std::cout<<"Request sent to next service department to handle"<<std::endl;
		this->handler->handleRequest(requestType);
	}
	else if(this->handler==nullptr)
	{
		std::cout<<"Failed to handle request"<<std::endl;
	}
}

// Provide an empty implementation for updateTaxes to resolve linker error
void PublicServicesDepartment::updateTaxes(float newTaxRate) {
    // No operation needed for PublicServicesDepartment
}
