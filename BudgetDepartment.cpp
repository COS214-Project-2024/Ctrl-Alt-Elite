#include "BudgetDepartment.h"

BudgetDepartment::BudgetDepartment(City* city): Government(city) {}

void BudgetDepartment::mangeCity() {
	std::cout<<"City budget has been allocated, notifying citizens..."<<std::endl;
	//notifyObservers();
}

void BudgetDepartment::allocateBudget(float budget) {
	allocatedBudget=budget;
}
