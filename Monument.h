#ifndef MONUMENT_H
#define MONUMENT_H

#include "Landmarks.h"

class Monument : public Landmarks {
public:
    Monument();
    ~Monument() override;

    void display() override;
    void updateEntertainmentRating() override;
    void performMaintenance()override;
};

#endif
