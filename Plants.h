#ifndef PLANTS_H
#define PLANTS_H

#include"Industrial.h"

class Plants : public  Industrial {


public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
