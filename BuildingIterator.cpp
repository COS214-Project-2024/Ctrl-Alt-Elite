#include "BuildingIterator.h"
#include <stdexcept>

BuildingIterator::BuildingIterator(MapType::iterator start, MapType::iterator end) 
    : current(start), end(end) {}

bool BuildingIterator::hasNext()
{
    return current != end;
}

std::pair<std::string, int> BuildingIterator::next() 
{
    if (!hasNext()) 
    {
        throw std::out_of_range("No more elements to iterate over");
    }
    return *current++;
}