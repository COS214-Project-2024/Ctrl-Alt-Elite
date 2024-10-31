#include "BudgetDepartment.h"

BudgetDepartment::BudgetDepartment(City* city): Government(city) {}

void BudgetDepartment::manageCity() {
	std::cout<<"City budget has been allocated, notifying citizens..."<<std::endl;
	//notifyObservers();
}

void BudgetDepartment::allocateBudget(float budget) {
	allocatedBudget=budget;
}

float PublicServicesDepartment::getTaxrate() {
    return taxRate;
}
