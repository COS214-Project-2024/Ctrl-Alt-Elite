#ifndef COMPOSITEBUILDING_H
#define COMPOSITEBUILDING_H

class CompositeBuilding : Building {

private:
	unordered_map<string, int> buildings;
	int population;
	int jobs;

public:
	void addBuilding(Building* building);

	void removeBuilding(Building* building);

	void display();

	void increasePopulation(int amount);

	void increaseJobs(int amount);

	void expandUtilities();

	void displayCityState();

	Iterator<pair<string, int>>* createIterator();

	Building* clone();
};

#endif
