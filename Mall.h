#ifndef MALL_H
#define MALL_H

#include "Commercial.h"

class Mall : public Commercial {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void updateEmploymentRating();
    void updateEntertainmentRating();
};

#endif
