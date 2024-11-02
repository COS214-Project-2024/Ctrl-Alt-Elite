#include "Director.h"

Director::Director(Builder* newBuilder) : builder(newBuilder) {}

void Director::setBuilder(Builder* newBuilder) {
    builder = newBuilder;
}

void Director::constructCityGrowth() {
    builder->buildPopulationGrowth();
    builder->buildHousingExpansion();
    builder->buildEconomicDevelopment();
    builder->buildInfrastructureExpansion();
}
