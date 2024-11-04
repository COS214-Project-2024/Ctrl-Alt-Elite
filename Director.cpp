#include "Director.h"

Director::Director(Builder* newBuilder) : builder(newBuilder) {}

void Director::setBuilder(Builder* newBuilder) {
    builder = newBuilder;
}

void Director::constructCityGrowth(int amount) {
    builder->buildPopulationGrowth(amount);
    builder->buildHousingExpansion();
    builder->buildEconomicDevelopment();
    builder->buildInfrastructureExpansion();
}
