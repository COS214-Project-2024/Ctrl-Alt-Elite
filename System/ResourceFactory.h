#ifndef RESOURCE_FACTORY_H
#define RESOURCE_FACTORY_H

#include "Resource.h"
#include <string>
#include <unordered_map>
#include <iomanip>

/**
 * @class ResourceFactory
 * @brief Factory class for managing and providing resources.
 * 
 * The ResourceFactory class creates and maintains a pool of resources such as 
 * Energy, Water, Materials, and Budget. It provides methods for resource 
 * retrieval, status display, and replenishment.
 */
class ResourceFactory {
private:
    std::unordered_map<std::string, Resource*> resourcePool; ///< Pool of available resources.

public:
    /**
     * @brief Constructs a ResourceFactory with specified initial resource amounts.
     * 
     * Initializes the resource pool with the given amounts for Energy, Water, 
     * Materials, and Budget resources.
     * 
     * @param energyAmount Initial amount of energy.
     * @param waterAmount Initial amount of water.
     * @param materialsAmount Initial amount of materials.
     * @param budgetAmount Initial budget amount.
     */
    ResourceFactory(float energyAmount, float waterAmount, float materialsAmount, float budgetAmount);

    /**
     * @brief Destructor for ResourceFactory.
     * 
     * Cleans up the dynamically allocated resources in the resource pool.
     */
    ~ResourceFactory();

    /**
     * @brief Retrieves a resource of the specified type.
     * 
     * If the resource type does not exist in the pool, it attempts to create a 
     * new instance, checking for sufficient budget to do so.
     * 
     * @param resourceType The type of resource to retrieve (e.g., "Energy").
     * @return A pointer to the requested Resource object, or nullptr if unavailable.
     */
    Resource* getResource(const std::string& resourceType);

    /**
     * @brief Displays the status of all resources in the pool.
     * 
     * Outputs the current capacities of Energy, Water, Materials, and Budget.
     */
    void displayResourceStatus();

    /**
     * @brief Replenishes the specified resource by a given amount.
     * 
     * Deducts the cost of replenishing the resource from the budget, if applicable.
     * 
     * @param resourceType The type of resource to replenish (e.g., "Water").
     * @param amount The amount to replenish.
     */
    void replenishResource(const std::string &resourceType, int amount);
};

#endif // RESOURCE_FACTORY_H
