#ifndef MALL_H
#define MALL_H

#include "Commercial.h"

class Mall : public Commercial {
public:
    Mall();
    ~Mall() override;

    void display() override;
    void IncEmploymentRating() override;
    void DecEmploymentRating() override;
    void IncEntertainmentRating() override;
    void DecEntertainmentRating() override;
    void performMaintenance()override;
};

#endif
