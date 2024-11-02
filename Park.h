#ifndef PARK_H
#define PARK_H

#include "Landmarks.h"

class Park : public Landmarks {
public:
    Park();
    ~Park() override;

    void display() override;
    void updateEntertainmentRating() override;
    void performMaintenance() override;
};

#endif
