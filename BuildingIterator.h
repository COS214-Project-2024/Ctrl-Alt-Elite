#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H

#include "Iterator.h"
#include "Building.h"
#include <vector>
#include <stdexcept>

/**
 * @brief Iterator class for iterating over a collection of Building pointers.
 * 
 * This class implements the Iterator pattern to allow traversal 
 * through a collection of Building objects in a sequential manner.
 */
class BuildingIterator : public Iterator<Building*> 
{
private:
    std::vector<Building*>::iterator current; ///< Current position in the iterator.
    std::vector<Building*>::iterator end;     ///< End position of the iterator.

public:
    /**
     * @brief Constructs a BuildingIterator.
     * 
     * @param start Iterator pointing to the beginning of the Building collection.
     * @param end Iterator pointing to the end of the Building collection.
     */
    BuildingIterator(std::vector<Building*>::iterator start, std::vector<Building*>::iterator end);

    /**
     * @brief Checks if there are more elements to iterate over.
     * 
     * @return True if there are more elements; false otherwise.
     */
    bool hasNext() override;

    /**
     * @brief Retrieves the next Building object in the collection.
     * 
     * @return Pointer to the next Building object.
     * @throws std::out_of_range If there are no more elements to iterate over.
     */
    Building* next() override;
};

#endif // BUILDINGITERATOR_H
