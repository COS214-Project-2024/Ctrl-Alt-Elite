#ifndef ENERGY_H
#define ENERGY_H

class Energy : Resource {

public:
	int availableEnergy;

	Energy(int initialAmount);

	void useResource(int amount);

	int getAvailableResource();
};

#endif
