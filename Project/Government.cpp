#include "Government.h"

Government::Government()
{}

Government::Government(City* city)
{
	this->city=city;
}

void Government::addObserver(Citizen* observer) {
	citizen.push_back(observer);
}

void Government::removeObserver(Citizen observer) {
	auto it = std::find(citizen.begin(), citizen.end(), observer);
        if (it != citizen.end()) {
            citizen.erase(it);
            std::cout << "Citizen removed from the vector." << std::endl;
        } else {
            std::cout << "Citizen not found in the vector." << std::endl;
        }
}

void Government::notifyObservers() {
    for (Citizen* c:citizen) {
        c->update();
    }
}

void Government::addCommand(Command* command) {
	commandList.push_back(command);
}

void Government::executeCommands() {
	for (Command* c:commandList){
		c->execute();
	}
}

float Government::getTaxrate() {
	return taxRate;
}

std::string Government::getCurrentPolicy() {
	return currentPolicy;
}

std::vector<std::string> Government::getAvailableServices() {
	return this->availableServices;
}
