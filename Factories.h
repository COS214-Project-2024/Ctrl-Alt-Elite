#ifndef FACTORIES_H
#define FACTORIES_H

class Factories : Industrial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
