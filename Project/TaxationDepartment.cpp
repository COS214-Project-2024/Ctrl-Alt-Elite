#include "TaxationDepartment.h"

TaxationDepartment::TaxationDepartment(City* city):Government(city) {}

void TaxationDepartment::manageCity() {
	// TODO - implement TaxationDepartment::manageCity
	throw "Not yet implemented";
}

void TaxationDepartment::updateTaxes(float newTaxRate) {
	this->taxRate=newTaxRate;
}
