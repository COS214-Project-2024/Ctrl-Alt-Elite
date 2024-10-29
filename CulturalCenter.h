#ifndef CULTURALCENTER_H
#define CULTURALCENTER_H

#include "Landmarks.h"

class CulturalCenter : public Landmarks {

public:
	void addBuilding(Building* building) override;

	void removeBuilding(Building* building) override;

	void display() const override;

	void updateEntertainmentRating();
};

#endif
