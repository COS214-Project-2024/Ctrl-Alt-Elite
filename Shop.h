#ifndef SHOP_H
#define SHOP_H

#include "Commercial.h"

class Shop : public Commercial {
public:
    Shop();
    ~Shop() override;

    void display() const override;
    void updateEmploymentRating() override;
    void updateEntertainmentRating() override;
};

#endif
