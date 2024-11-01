// BudgetDepartment.cpp
#include "BudgetDepartment.h"

BudgetDepartment::BudgetDepartment(City* city) : Government(city) {}

void BudgetDepartment::manageCity() {
    std::cout << "City budget has been allocated, notifying citizens..." << std::endl;
    // notifyObservers(); // Commented out to focus on Command functionality
}

void BudgetDepartment::allocateBudget(float budget) {
    allocatedBudget = budget;
    std::cout << "BudgetDepartment: Allocated budget set to $" << budget << "." << std::endl;
}

// Provide an empty implementation for updateTaxes to resolve linker error
void BudgetDepartment::updateTaxes(float newTaxRate) {
    // No operation needed for BudgetDepartment
}