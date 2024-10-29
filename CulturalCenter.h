#ifndef CULTURALCENTER_H
#define CULTURALCENTER_H

#include "Landmarks.h"

class CulturalCenter : public Landmarks {
public:
    CulturalCenter();
    ~CulturalCenter() override;

    void display() const override;
    void updateEntertainmentRating() override;
};

#endif
