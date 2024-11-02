#include "Resource.h"

// Cost value is derived from the derived resource amount * cost factor 
// eg. Cost of 100 000KL of Water is 100 000 * 15.5 = R 1 550 000
Resource::Resource(float cost) : baseCost(cost) {}

float Resource::getCost() const {
    return baseCost;
}
