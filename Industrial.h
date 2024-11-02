#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

#include "Building.h"

class Industrial : public Building {
protected:
    int employmentRating;
    float pollutionLevel;

public:
    Industrial();
    virtual ~Industrial();

    virtual void display() override;
    virtual void updateEmploymentRating();
    virtual void updatePollutionLevel();
    int getEmploymentRating() const;

    Building* clone() const override;
    virtual void performMaintenance();
};

#endif
