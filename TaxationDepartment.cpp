// TaxationDepartment.cpp
#include "TaxationDepartment.h"

TaxationDepartment::TaxationDepartment(City* city) : Government(city) {}

void TaxationDepartment::manageCity() {
    std::cout << "Taxes have been updated, notifying citizens..." << std::endl;
    // notifyObservers(); // Commented out to focus on Command functionality
}

void TaxationDepartment::updateTaxes(float newTaxRate) {
    taxRate = newTaxRate;
    std::cout << "TaxationDepartment: Tax rate updated to " << newTaxRate << "%" << std::endl;
}
