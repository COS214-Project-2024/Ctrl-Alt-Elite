#ifndef GOVERNMENT_H
#define GOVERNMENT_H
#include "Citizen.h"
#include "Command.h"
#include "City.h"
#include <vector>
#include <string>
#include <algorithm> 
#include <iostream>
class Government {

private:
	std::vector<Citizen*> citizen;
	City* city;
	std::vector<Command*> commandList;

protected:
	std::string currentPolicy;
	float taxRate;
	float allocatedBudget;
	std::vector<std::string> availableServices;
public:
	Government();

	Government(City* city);

	void Report();

	void addObserver(Citizen* observer);

	void removeObserver(Citizen observer);

	void notifyObservers();

	virtual void updateTaxes() = 0;

	virtual void implementPolicy() = 0;

	virtual void updatePublicServices() = 0;

	virtual void allocateBudget(float budget) = 0;

	void addCommand(Command* command);

	void executeCommands();

	virtual void manageCity() = 0;

	float getTaxrate();

	std::string getCurrentPolicy();

	std::vector<std::string> getAvailableServices();
};

#endif
