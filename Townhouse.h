#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

class Townhouse : Residential {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void calculateOccupancyRate();
};

#endif
