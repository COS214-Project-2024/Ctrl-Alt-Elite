#ifndef SHOP_H
#define SHOP_H

#include "Commercial.h"

class Shop : public Commercial {
public:
    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    void updateEmploymentRating();
    void updateEntertainmentRating();
};

#endif
