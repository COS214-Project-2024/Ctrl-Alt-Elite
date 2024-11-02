#ifndef BUILDINGITERATOR_H
#define BUILDINGITERATOR_H

#include "Iterator.h"
#include "Building.h"
#include <vector>
#include <stdexcept>

class BuildingIterator : public Iterator<Building*> 
{
private:
    std::vector<Building*>::iterator current;
    std::vector<Building*>::iterator end;

public:
    BuildingIterator(std::vector<Building*>::iterator start, std::vector<Building*>::iterator end);

    bool hasNext() override;
    Building* next() override;
};

#endif // BUILDINGITERATOR_H
