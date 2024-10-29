#ifndef HOUSE_H
#define HOUSE_H

class House : Residential {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void calculateOccupancyRate();
};

#endif
