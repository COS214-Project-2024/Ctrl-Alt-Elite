#ifndef PARK_H
#define PARK_H

#include "Landmarks.h"

class Park : public Landmarks {
public:
    Park();
    ~Park() override;

    void display() const override;
    void updateEntertainmentRating() override;
};

#endif
