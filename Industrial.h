#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

#include "Building.h"

class Industrial : public Building {
private:
    int employmentRating;
    float pollutionLevel;

public:
    Industrial();
    ~Industrial();

    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void updateEmploymentRating();
    void updatePollutionLevel();
    int getEmploymentRating();

    Building* clone() const override;
};

#endif
