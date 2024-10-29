#ifndef LANDMARKS_H
#define LANDMARKS_H

#include "Building.h"

class Landmarks : public Building {
private:
    int entertainmentRating;
    float maintenanceCost;

public:
    Landmarks();
    ~Landmarks();

    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void updateEntertainmentRating();
    int getEntertainmentRating();

    Building* clone() const override;
};

#endif
