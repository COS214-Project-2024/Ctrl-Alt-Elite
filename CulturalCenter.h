#ifndef CULTURALCENTER_H
#define CULTURALCENTER_H

class CulturalCenter : Landmarks {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEntertainmentRating();
};

#endif
