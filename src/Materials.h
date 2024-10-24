#ifndef MATERIALS_H
#define MATERIALS_H

class Materials : Resource {

public:
	int availableMaterials;

	Materials(int initialAmount);

	void useResource(int amount);

	int getAvailableResource();
};

#endif
