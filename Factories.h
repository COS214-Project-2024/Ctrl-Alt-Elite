#ifndef FACTORIES_H
#define FACTORIES_H

#include "Industrial.h"

class Factories : public Industrial {
public:
    Factories();
    ~Factories() override;

    void display() override;
    void updateEmploymentRating() override;
    void updatePollutionLevel() override;
    void performMaintenance()override;
};

#endif
