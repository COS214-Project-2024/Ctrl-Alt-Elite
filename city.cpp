// city.cpp
#include "city.h"

void City::collectTaxes() {
    std::cout << "City: Collecting taxes from citizens and businesses." << std::endl;
}

void City::allocateBudget(const std::string& department, double amount) {
    std::cout << "City: Allocating $" << amount << " to " << department << "." << std::endl;
}

void City::enforcePolicy(const std::string& policy) {
    std::cout << "City: Enforcing policy: " << policy << "." << std::endl;
}

void City::providePublicService(const std::string& service) {
    std::cout << "City: Providing public service: " << service << "." << std::endl;
}
