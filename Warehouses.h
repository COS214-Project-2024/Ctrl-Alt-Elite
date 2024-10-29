#ifndef WAREHOUSES_H
#define WAREHOUSES_H

class Warehouses : Industrial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
