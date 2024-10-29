#include "Utilities.h"

Utilities::Utilities(Building* building, float cost, ResourceFactory* factory)
    : building(building), utilityCost(cost), resourceFactory(factory) {}

float Utilities::getUtilityCost() {
    return utilityCost;
}
