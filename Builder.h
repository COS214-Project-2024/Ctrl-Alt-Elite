#ifndef BUILDER_H
#define BUILDER_H

#include "CompositeBuilding.h"

class Builder {
public:
    virtual ~Builder() = default;
    virtual void buildPopulationGrowth(int amount) = 0;
    virtual void buildJobGrowth(int amount) = 0; 
    virtual void buildHousingExpansion() = 0;
    virtual void buildEconomicDevelopment() = 0;
    virtual void buildInfrastructureExpansion() = 0;
    virtual CompositeBuilding* getCompositeBuilding() = 0;
};

#endif // BUILDER_H
