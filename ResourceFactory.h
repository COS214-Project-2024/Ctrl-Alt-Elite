#ifndef RESOURCE_FACTORY_H
#define RESOURCE_FACTORY_H

#include "Resource.h"
#include <string>
#include <unordered_map>
#include <iomanip>
class ResourceFactory {
private:
    std::unordered_map<std::string, Resource*> resourcePool;

public:
    ResourceFactory(float energyAmount, float waterAmount, float materialsAmount, float budgetAmount);
    ~ResourceFactory();
    Resource* getResource(const std::string& resourceType);
    void displayResourceStatus();
    void replenishResource(const std::string &resourceType, int amount);
};

#endif
