#ifndef PLANTS_H
#define PLANTS_H

class Plants : Industrial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
