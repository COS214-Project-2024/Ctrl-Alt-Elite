#ifndef SEWAGESYSTEMS_H
#define SEWAGESYSTEMS_H

class SewageSystems : Utilities {

private:
	int sewageCapacity;
	int sewageGenerated;

public:
	SewageSystems(Building* city);

	void applyUtility(Building* building);

	void manageSewage();

	bool checkSewageCapacity();

	void updateSewageCapacity();
};

#endif
