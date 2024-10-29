#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Building.h"

class Commercial : public Building {
private:
    int entertainmentRating;
    int employmentRating;
    float revenue;

public:
    Commercial();
    ~Commercial();

    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void updateEmploymentRating();
    void updateEntertainmentRating();
    int getEmploymentRating();

    Building* clone() const override;
};

#endif
