#include "TaxationDepartment.h"

TaxationDepartment::TaxationDepartment(City* city):Government(city) {}

void TaxationDepartment::manageCity() {
	std::cout<<"Taxes have been updated, notifying citizens..."<<std::endl;
	//notifyObservers();
}

void TaxationDepartment::updateTaxes(float newTaxRate) {
	this->taxRate=newTaxRate;
}

float TaxationDepartment::getTaxrate() {
    return taxRate;
}
