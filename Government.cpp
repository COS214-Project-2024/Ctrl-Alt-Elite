// Government.cpp
#include "Government.h"

Government::Government() {}

Government::Government(City* city) : city(city), taxRate(18), allocatedBudget(100000), currentPolicy("Be kind to one another") {}

void Government::Report() {
    std::cout << "===================================================" << std::endl;
    std::cout << "Government Report" << std::endl;
    std::cout << "Tax rate:\t" << taxRate << "%" << std::endl;
    std::cout << "City Budget:\tR " << allocatedBudget << std::endl;
    std::cout << "Available Public Services:";
    for (const std::string& service : availableServices) {
        std::cout << "\t" << service << std::endl;
    }
    std::cout << "Current Policy:\t" << currentPolicy << std::endl;
    manageCity();
    std::cout << "===================================================" << std::endl;
}

void Government::addObserver(Citizen* observer) {
    citizen.push_back(observer);
}

void Government::removeObserver(Citizen* observer) {
    auto it = std::find(citizen.begin(), citizen.end(), observer);
    if (it != citizen.end()) {
        citizen.erase(it);
        std::cout << "Citizen removed from the list." << std::endl;
    } else {
        std::cout << "Citizen not found in the list." << std::endl;
    }
}

void Government::notifyObservers() {
    for (Citizen* c : citizen) {
        c->update();
    }
}

void Government::addCommand(Command* command) {
    commandList.push_back(command);
}

void Government::executeCommands() {
    for (Command* cmd : commandList) {
        cmd->execute();
    }
    commandList.clear();
}

float Government::getTaxrate() {
    return taxRate;
}

std::string Government::getCurrentPolicy() {
    return currentPolicy;
}

std::vector<std::string> Government::getAvailableServices() {
    return availableServices;
}
