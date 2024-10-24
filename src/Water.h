#ifndef WATER_H
#define WATER_H

class Water : Resource {

public:
	int availableWater;

	void Materials(int initialAmount);

	void useResource(int amount);

	int getAvailableResource();
};

#endif
