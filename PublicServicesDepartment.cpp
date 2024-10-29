// PublicServicesDepartment.cpp
#include "PublicServicesDepartment.h"

PublicServicesDepartment::PublicServicesDepartment(City* city) : Government(city), successor(nullptr) {}

void PublicServicesDepartment::manageCity() {
    std::cout << "Available Public Services have been updated, notifying citizens..." << std::endl;
    // notifyObservers(); // Commented out to focus on Command functionality
}

void PublicServicesDepartment::updatePublicServices(const std::vector<std::string>& services) {
    availableServices = services;
    std::cout << "PublicServicesDepartment: Public services updated." << std::endl;
}

void PublicServicesDepartment::setNextHandler(PublicServicesDepartment* handler) {
    successor = handler;
}

void PublicServicesDepartment::handleRequest(int requestType) {
    if (successor) {
        successor->handleRequest(requestType);
    } else {
        std::cout << "Failed to handle request." << std::endl;
    }
}

// Provide an empty implementation for updateTaxes to resolve linker error
void PublicServicesDepartment::updateTaxes(float newTaxRate) {
    // No operation needed for PublicServicesDepartment
}
