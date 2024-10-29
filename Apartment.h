#ifndef APARTMENT_H
#define APARTMENT_H

class Apartment : Residential {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void calculateOccupancyRate();
};

#endif
