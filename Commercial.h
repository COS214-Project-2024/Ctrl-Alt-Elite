#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Building.h"

class Commercial : public Building {
protected:
    int entertainmentRating;
    int employmentRating;
    float revenue;

public:
    Commercial();
    virtual ~Commercial();

    virtual void display() const override;
    virtual void updateEmploymentRating();
    virtual void updateEntertainmentRating();
    int getEmploymentRating() const;

    Building* clone() const override;
};

#endif
