#include "PoliciesDepartment.h"

PoliciesDepartment::PoliciesDepartment(City* city): Government(city) {}

void PoliciesDepartment::mangeCity() {
	// TODO - implement PoliciesDepartment::mangeCity
	throw "Not yet implemented";
}

void PoliciesDepartment::implementPolicy(std::string policy) {
	this->currentPolicy=policy;
}
