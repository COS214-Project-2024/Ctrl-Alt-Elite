#ifndef BUILDING_H
#define BUILDING_H

class Building {

private:
	vector<Citizens*> citizens;
	Utilities* utilities;
	bool hasElectricity;
	bool hasWaterSupply;
	bool wasteCollected;
	bool sewageManaged;
	bool underConstrction;
	bool available;

public:
	virtual void addBuilding(Building* building) = 0;

	virtual void removeBuilding(Building* building) = 0;

	virtual void display() = 0;

private:
	virtual void Buildings() = 0;

public:
	void allocateResources(Resource* resource);

	Iterator<pair<string, int>>* createIterator();

	virtual Building* clone() = 0;
};

#endif
