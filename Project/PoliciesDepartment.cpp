#include "PoliciesDepartment.h"

PoliciesDepartment::PoliciesDepartment(City* city): Government(city) {}

void PoliciesDepartment::mangeCity() {
	std::cout<<"Government has implemented a new policy, notifying citizens..."<<std::endl;
	notifyObservers();
}

void PoliciesDepartment::implementPolicy(std::string policy) {
	this->currentPolicy=policy;
}
