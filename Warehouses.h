#ifndef WAREHOUSES_H
#define WAREHOUSES_H

#include"Industrial.h"

class Warehouses : public  Industrial {


public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
