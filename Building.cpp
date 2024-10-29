#include "Building.h"
#include "BuildingIterator.h"

void Building::allocateResources(Resource* resource) {
    // Allocation logic here
}

Iterator<std::pair<std::string, int>>* Building::createIterator() 
{
    return new BuildingIterator(resources.begin(), resources.end());
}
