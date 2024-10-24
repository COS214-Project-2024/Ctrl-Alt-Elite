#ifndef BUDGET_H
#define BUDGET_H

class Budget : Resource {

public:
	int availableBudget;

	void Energy(int initialAmount);

	void useResource(int amount);

	int getAvailableResource();
};

#endif
