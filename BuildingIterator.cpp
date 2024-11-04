#include "BuildingIterator.h"

/**
 * @brief Initializes the BuildingIterator with the specified start and end iterators.
 * 
 * @param start Iterator pointing to the beginning of the Building collection.
 * @param end Iterator pointing to the end of the Building collection.
 */
BuildingIterator::BuildingIterator(std::vector<Building*>::iterator start, std::vector<Building*>::iterator end)
    : current(start), end(end) {}

/**
 * @brief Checks if there are more Building objects to iterate over.
 * 
 * @return True if the current position is not at the end; false otherwise.
 */
bool BuildingIterator::hasNext() 
{
    return current != end;
}

/**
 * @brief Returns the next Building object in the collection.
 * 
 * @return Pointer to the next Building object.
 * @throws std::out_of_range If no more elements are available to iterate.
 */
Building* BuildingIterator::next() 
{
    if (!hasNext()) 
    {
        throw std::out_of_range("No more elements to iterate over");
    }
    return *current++;
}
