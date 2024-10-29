#ifndef FACTORIES_H
#define FACTORIES_H


#include"Industrial.h"

class Factories : public  Industrial {


public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEmploymentRating();

	void updatePollutionLevel();
};

#endif
