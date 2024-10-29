#ifndef PARK_H
#define PARK_H

#include "Landmarks.h"

class Park : public Landmarks {

public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEntertainmentRating();
};

#endif
