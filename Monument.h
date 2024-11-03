#ifndef MONUMENT_H
#define MONUMENT_H

#include "Landmarks.h"

class Monument : public Landmarks {
public:
    Monument();
    ~Monument() override;

    void display() const override;
    void updateEntertainmentRating() override;
};

#endif
