#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Building.h"

class Commercial : public Building {
protected:
    int entertainmentRating;
    int employmentRating;

public:
    Commercial();
    virtual ~Commercial();

    virtual void display()  override;
    virtual void IncEmploymentRating();
    virtual void DecEmploymentRating();
    virtual void IncEntertainmentRating();
    virtual void DecEntertainmentRating();
    
    virtual int getEmploymentRating() const;

    Building* clone() const override;
    virtual void performMaintenance();
};

#endif
