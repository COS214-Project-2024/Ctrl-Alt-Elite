#ifndef SHOP_H
#define SHOP_H

#include "Commercial.h"

class Shop : public Commercial {
public:
    Shop();
    ~Shop() override;

    void display() override;
    void IncEmploymentRating() override;
    void DecEmploymentRating() override;
    void IncEntertainmentRating() override;
    void DecEntertainmentRating() override;
    void performMaintenance()override;
};

#endif
