#ifndef OFFICE_H
#define OFFICE_H

#include "Commercial.h"

class Office : public Commercial {
public:
    Office();
    ~Office() override;

    void display() override;
    void IncEmploymentRating() override;
    void DecEmploymentRating() override;
    void IncEntertainmentRating() override;
    void DecEntertainmentRating() override;
    void performMaintenance()override;
};

#endif
