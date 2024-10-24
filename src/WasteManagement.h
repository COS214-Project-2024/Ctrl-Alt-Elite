#ifndef WASTEMANAGEMENT_H
#define WASTEMANAGEMENT_H

class WasteManagement : Utilities {

private:
	int wasteCapacity;
	int wasteGenerated;

public:
	WasteManagement(Building city);

	void applyUtility(Building* building);

	void manageWaste();

	void increaseRecyclingRate();

	bool checkWasteCapacity();
};

#endif
