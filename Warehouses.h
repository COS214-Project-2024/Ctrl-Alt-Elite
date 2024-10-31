#ifndef WAREHOUSES_H
#define WAREHOUSES_H

#include "Industrial.h"

class Warehouses : public Industrial {
public:
    Warehouses();
    ~Warehouses() override;

    void display() const override;
    void updateEmploymentRating() override;
    void updatePollutionLevel() override;
};

#endif
