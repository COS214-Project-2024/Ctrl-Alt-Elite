#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

class Residential : Building {

private:
	int numResidents;
	int availableUnits;

public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void calculateOccupancyRate();
};

#endif
