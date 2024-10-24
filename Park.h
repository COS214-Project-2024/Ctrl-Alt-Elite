#ifndef PARK_H
#define PARK_H

class Park : Landmarks {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEntertainmentRating();
};

#endif
