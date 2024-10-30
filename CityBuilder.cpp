#include "CityBuilder.h"
#include "Residential.h"
#include "Commercial.h"
#include "Industrial.h"

CityBuilder::CityBuilder() : buildingComposite(new CompositeBuilding()) {}

CityBuilder::~CityBuilder() {
    delete buildingComposite;
}

void CityBuilder::buildPopulationGrowth() {
    // Logic for adding residential buildings or adjusting population stats
    buildingComposite->addBuilding(new Residential());
}

void CityBuilder::buildHousingExpansion() {
    // Logic for expanding housing by adding residential units
    buildingComposite->addBuilding(new Residential());
}

void CityBuilder::buildEconomicDevelopment() {
    // Logic for adding commercial areas for economic growth
    buildingComposite->addBuilding(new Commercial());
}

void CityBuilder::buildInfrastructureExpansion() {
    // Logic for adding industrial areas or infrastructure elements
    buildingComposite->addBuilding(new Industrial());
}

CompositeBuilding* CityBuilder::getCompositeBuilding() {
    return buildingComposite;
}
