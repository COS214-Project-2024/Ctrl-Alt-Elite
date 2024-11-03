#ifndef OFFICE_H
#define OFFICE_H

#include "Commercial.h"

class Office : public Commercial {
public:
    Office();
    ~Office() override;

    void display() const override;
    void updateEmploymentRating() override;
    void updateEntertainmentRating() override;
};

#endif
