#ifndef RESOURCE_FACTORY_H
#define RESOURCE_FACTORY_H

#include "Resource.h"
#include <string>
#include <unordered_map>

class ResourceFactory {
private:
    std::unordered_map<std::string, Resource*> resourcePool;

public:
    ~ResourceFactory();
    Resource* getResource(const std::string& resourceType);
    void replenishResource(const std::string& resourceType, int amount);
};

#endif
