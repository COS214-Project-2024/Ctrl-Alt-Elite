#ifndef OFFICE_H
#define OFFICE_H

class Office : Commercial {


public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updateEntertainmentRating();
};

#endif
