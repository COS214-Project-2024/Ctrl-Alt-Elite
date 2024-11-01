// PoliciesDepartment.cpp
#include "PoliciesDepartment.h"

PoliciesDepartment::PoliciesDepartment(City* city) : Government(city) {}

void PoliciesDepartment::manageCity() {
    std::cout << "Government has implemented a new policy, notifying citizens..." << std::endl;
    // notifyObservers(); // Commented out to focus on Command functionality
}

void PoliciesDepartment::implementPolicy(const std::string& policy) {
    currentPolicy = policy;
    std::cout << "PoliciesDepartment: Policy set to " << policy << std::endl;
}

// Provide an empty implementation for updateTaxes to resolve linker error
void PoliciesDepartment::updateTaxes(float newTaxRate) {
    // No operation needed for PoliciesDepartment
}