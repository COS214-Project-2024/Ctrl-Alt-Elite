#ifndef MALL_H
#define MALL_H

#include "Commercial.h"

class Mall : public Commercial {
public:
    Mall();
    ~Mall() override;

    void display() const override;
    void updateEmploymentRating() override;
    void updateEntertainmentRating() override;
};

#endif
