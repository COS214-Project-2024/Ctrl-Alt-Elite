#ifndef UTILITIES_H
#define UTILITIES_H

class Utilities : Building {

private:
	Building* building;
	float utilityCost;
	Resource* resource;
	ResourceFactory* resourceFactory;

private:
	Utilities(Building* city);

	Utilities();

public:
	virtual void applyUtility(Building* building) = 0;

	virtual float getUtilityCost() = 0;
};

#endif
