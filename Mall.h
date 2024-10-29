#ifndef MALL_H
#define MALL_H

class Mall : Commercial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updateEntertainmentRating();
};

#endif
