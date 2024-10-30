#ifndef BUILDINGTARGET_H
#define BUILDINGTARGET_H

#include <iostream>
using namespace std;

class BuildingTarget
{
    public:
        virtual ~BuildingTarget();

        virtual void addResidentialUnits(int units) = 0;
        virtual void addCommercialUnits(int units) = 0;
        virtual void addIndustrialUnits(int units) = 0;
        virtual void displayCityStatus() = 0;
};

#endif
