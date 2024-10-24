#ifndef ESTATE_H
#define ESTATE_H

class Estate : Residential {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void calculateOccupancyRate();
};

#endif
