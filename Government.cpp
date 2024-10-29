#include "Government.h"

Government::Government()
{
}

Government::Government(City* city)
{
	this->city=city;
	taxRate=18; 
	allocatedBudget=100000;
	currentPolicy="Be kind to one another";
}

void Government::Report(){
	std::cout<<"==================================================="<<std::endl;
	std::cout<<"Government Report"<<std::endl;
	std::cout<<"Tax rate:\t"<<std::to_string(getTaxrate())<<"%"<<std::endl;
	std::cout<<"City Budget:\tR "<<std::to_string(allocatedBudget)<<std::endl;
	std::cout<<"Availible Public Services:";
	for(std::string service:availableServices)
	{
		std::cout<<"\t"<<service<<std::endl;
	}
	std::cout<<" "<<std::endl;
	std::cout<<"Current Policy:\t"<<currentPolicy<<std::endl;

	std::cout<<"Updates made:"<<std::endl;
	manageCity();
	std::cout<<"==================================================="<<std::endl;
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

