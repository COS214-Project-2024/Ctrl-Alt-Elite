#include "ResourceFactory.h"
#include "Energy.h"
#include "Water.h"
#include "Materials.h"
#include "Budget.h"
#include <string>

ResourceFactory::~ResourceFactory() {
    for (auto& entry : resourcePool) {
        delete entry.second;
    }
}

Resource* ResourceFactory::getResource(const std::string& resourceType) {
    if (resourcePool.find(resourceType) == resourcePool.end()) {
        if (resourceType == "Energy") {
            resourcePool[resourceType] = new Energy(10000, 0.5f);
        } else if (resourceType == "Water") {
            resourcePool[resourceType] = new Water(5000, 0.2f);
        } else if (resourceType == "Materials") {
            resourcePool[resourceType] = new Materials(20000, 1.0f);
        } else if (resourceType == "Budget") {
            resourcePool[resourceType] = new Budget(10000000, 0.3f);
        }
    }
    return resourcePool[resourceType];
}


void ResourceFactory::replenishResource(const std::string& resourceType, int amount) {
    if (resourcePool.find(resourceType) != resourcePool.end()) {
        resourcePool[resourceType]->replenish(amount);
    }
}
