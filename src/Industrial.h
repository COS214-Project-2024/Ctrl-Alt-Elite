#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

class Industrial : Building {

private:
	int employmentRating;
	float pollutionLevel;

public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
