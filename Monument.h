#ifndef MONUMENT_H
#define MONUMENT_H

#include "Landmarks.h"

class Monument : public Landmarks {

public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEntertainmentRating();
};

#endif

