#ifndef CITYBUILDER_H
#define CITYBUILDER_H

#include "Builder.h"
#include "CompositeBuilding.h"

class CityBuilder : public Builder {
private:
    CompositeBuilding* buildingComposite;

public:
    CityBuilder();
    ~CityBuilder();

    void buildPopulationGrowth(int amount ) override;
    void buildJobGrowth(int amount) override; 
    void buildHousingExpansion() override;
    void buildEconomicDevelopment() override;
    void buildInfrastructureExpansion() override;

    CompositeBuilding* getCompositeBuilding() override;
};

#endif // CITYBUILDER_H
