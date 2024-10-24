#ifndef WATERSUPPLY_H
#define WATERSUPPLY_H

class WaterSupply : Utilities {

private:
	int waterCapacity;
	int waterConsumed;

public:
	WaterSupply(Building* city);

	void applyUtility(Building* building);

	void supplyWater();

	bool checkWaterSupply();

	void updateWaterConsumption();
};

#endif
