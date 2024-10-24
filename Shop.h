#ifndef SHOP_H
#define SHOP_H

class Shop : Commercial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updateEntertainmentRating();
};

#endif
