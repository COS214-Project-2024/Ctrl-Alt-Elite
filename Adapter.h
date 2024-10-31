#ifndef ADAPTER_H
#define ADAPTER_H

#include <iostream>
#include "BuildingTarget.h"
#include "CompositeBuilding.h"

using namespace std;

class Adapter : public BuildingTarget
{
    public:
        Adapter(CompositeBuilding* cb);

        void addResidentialUnits(int units);
        void addCommercialUnits(int units);
        void addIndustrialUnits(int units);
        void addLandmarkUnits(int units);
        void displayCityStatus();

    private:
        CompositeBuilding* adaptee;
};

#endif
