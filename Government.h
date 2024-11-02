#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
//#include "Command.h"
#include "City.h"
#include <vector>
#include <string>
#include <algorithm> 
#include <iostream>
class Government {

private:
	//std::vector<Citizen*> citizen;
	City* city;
	//std::vector<Command*> commandList;

protected:
	std::string currentPolicy;
	float taxRate;
	float allocatedBudget;
	std::vector<std::string> availableServices;
public:
	Government();

	Government(City* city);

	void Report();

    virtual void manageCity() = 0;

	//void addObserver(Citizen* observer);

	//void removeObserver(Citizen observer);

	//void notifyObservers();

	//void addCommand(Command* command);

	//void executeCommands();

    //Getters

    float getTaxRate() const { return taxRate; }
    void setTaxRate(float rate) { taxRate = rate; }

    std::string getCurrentPolicy() const { return currentPolicy; }
    void setCurrentPolicy(const std::string& policy) { currentPolicy = policy; }

    float getAllocatedBudget() const { return allocatedBudget; }
    void setAllocatedBudget(float budget) { allocatedBudget = budget; }

    std::vector<std::string> getAvailableServices() const { return availableServices; }
    void setAvailableServices(const std::vector<std::string>& services) { availableServices = services; }
};

#endif
