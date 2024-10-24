#ifndef POWERPLANTS_H
#define POWERPLANTS_H

class PowerPlants : Utilities {

private:
	int powerGenerated;
	int powerConsumed;

public:
	void PowerPlant(Building* city);

	void applyUtility(Building* building);

	void generateElectricity();

	bool checkPowerAvailability();

	void updatePowerGeneration();
};

#endif
