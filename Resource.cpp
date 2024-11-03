#include "Resource.h"

Resource::Resource(float cost) : baseCost(cost) {}

float Resource::getBaseCost() const {
    return baseCost;
}
