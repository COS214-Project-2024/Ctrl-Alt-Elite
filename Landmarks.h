#ifndef LANDMARKS_H
#define LANDMARKS_H

class Landmarks : Building {

private:
	int entertainmentRating;
	float maintenanceCost;

public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEntertainmentRating();
};

#endif
