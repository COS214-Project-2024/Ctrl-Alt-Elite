#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

class Director {
private:
    Builder* builder;

public:
    Director(Builder* newBuilder);
    void setBuilder(Builder* newBuilder);
    void constructCityGrowth();
};

#endif // DIRECTOR_H
