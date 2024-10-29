#ifndef BUILDINGITERATOR
#define BUILDINGITERATOR

#include "Iterator.h"
#include <unordered_map>
#include <string>
#include <iterator>

class BuildingIterator : public Iterator<std::pair<std::string, int>>
{
    private:
        using MapType = std::unordered_map<std::string, int>;
        MapType::iterator current;
        MapType::iterator end;

    public:
        BuildingIterator(MapType::iterator start, MapType::iterator end);
        bool hasNext() override;
        std::pair<std::string, int> next() override;

};

#endif
