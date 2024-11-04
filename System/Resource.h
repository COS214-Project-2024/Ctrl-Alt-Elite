#ifndef RESOURCE_H
#define RESOURCE_H

/**
 * @class Resource
 * @brief Abstract base class representing a resource.
 * 
 * The Resource class serves as an abstract base for different types of resources 
 * such as Water, Energy, and Materials. It defines common properties and methods 
 * that all resources must implement, such as capacity management and cost retrieval.
 */
class Resource {
protected:
    float baseCost; ///< Base cost of the resource.

    // Cost factors for derived resources:
    // Water = 15.5
    // Energy = 20.0
    // Materials = 5.0
    // Budget resource has no cost

public:
    /**
     * @brief Constructor for the Resource class.
     * 
     * Initializes a Resource object with a specified base cost.
     * 
     * @param cost The base cost of the resource.
     */
    Resource(float cost);

    /**
     * @brief Virtual destructor for the Resource class.
     * 
     * Ensures proper cleanup of derived resources.
     */
    virtual ~Resource() = default;

    /**
     * @brief Pure virtual method to get the capacity of the resource.
     * 
     * Derived classes must implement this method to provide the capacity.
     * 
     * @return The capacity of the resource.
     */
    virtual int getCapacity() const = 0;

    /**
     * @brief Pure virtual method to consume a specified amount of the resource.
     * 
     * Derived classes must implement this method to define how resources 
     * are consumed.
     * 
     * @param amount The amount of the resource to consume.
     */
    virtual void consume(int amount) = 0;

    /**
     * @brief Pure virtual method to replenish a specified amount of the resource.
     * 
     * Derived classes must implement this method to define how resources 
     * are replenished.
     * 
     * @param amount The amount of the resource to replenish.
     */
    virtual void replenish(int amount) = 0;

    /**
     * @brief Gets the base cost of the resource.
     * 
     * @return The base cost of the resource.
     */
    float getCost() const;
};

#endif // RESOURCE_H
