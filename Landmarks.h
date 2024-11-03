#ifndef LANDMARKS_H
#define LANDMARKS_H

#include "Building.h"

class Landmarks : public Building {
protected:
    int entertainmentRating;
    float maintenanceCost;

public:
    Landmarks();
    virtual ~Landmarks();

    void display() const override;
    virtual void updateEntertainmentRating();
    int getEntertainmentRating() const;

    Building* clone() const override;
};

#endif
