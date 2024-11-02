#include "BuildingIterator.h"

BuildingIterator::BuildingIterator(std::vector<Building*>::iterator start, std::vector<Building*>::iterator end)
    : current(start), end(end) {}

bool BuildingIterator::hasNext() 
{
    return current != end;
}

Building* BuildingIterator::next() 
{
    if (!hasNext()) 
    {
        throw std::out_of_range("No more elements to iterate over");
    }
    return *current++;
}
