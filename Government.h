#ifndef GOVERNMENT_H
#define GOVERNMENT_H

class Government {

private:
	vector<Citizen*> citizen;
	string taxRate;
	int currentPolicy;
	vector<string> availableServices;
	vector<Command*> commandList;

public:
	void addObserver(Citizen* observer);

	void removeObserver(Citizen observer);

	void notifyObservers();

	void updateTaxes();

	void implementPolicy();

	void updatePublicServices();

	void addCommand(Command* command);

	void executeCommands();

	void manageCity();

	float getTaxrate();

	string getCurrentPolicy();

	vector<string> getAvailableServices();
};

#endif
