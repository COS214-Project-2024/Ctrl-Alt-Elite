#ifndef MONUMENT_H
#define MONUMENT_H

class Monument : Landmarks {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEntertainmentRating();
};

#endif
