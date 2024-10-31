#include "Utilities.h"

Utilities::Utilities(Building* bld, ResourceFactory* rf, float cost)
    : building(bld), resourceFactory(rf), utilityCost(cost), resource(nullptr) {}

float Utilities::getUtilityCost() const {
    return utilityCost;
}
