#ifndef COMMERCIAL_H
#define COMMERCIAL_H

class Commercial : Building {

private:
	int entertainmentRating;
	int employmentRating;
	float revenue;

public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updateEntertainmentRating();
};

#endif
