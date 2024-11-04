#ifndef UTILITIES_H
#define UTILITIES_H

#include "Resource.h"
#include "ResourceFactory.h"
#include "Building.h"

/**
 * @class Utilities
 * @brief Abstract base class for utility services in a building.
 *
 * This class provides an interface for utility services associated with a building,
 * allowing derived classes to implement specific utility behaviors and costs.
 */
class Building; // Forward declaration

class Utilities {
protected:
    Building* building; ///< Pointer to the building associated with the utility.
    float utilityCost;  ///< Cost of the utility.
    Resource* resource; ///< Pointer to the resource associated with the utility.
    ResourceFactory* resourceFactory; ///< Pointer to the resource factory managing resources.

public:
    /**
     * @brief Constructs a Utilities object.
     *
     * @param bld Pointer to the building this utility is associated with.
     * @param rf Pointer to the resource factory managing resources.
     * @param cost Cost of the utility.
     */
    Utilities(Building* bld, ResourceFactory* rf, float cost);

    /**
     * @brief Virtual destructor for the Utilities class.
     */
    virtual ~Utilities() = default;

    /**
     * @brief Applies the utility service to a specific building.
     *
     * This method must be implemented by derived classes to define
     * how the utility is applied to the building.
     *
     * @param building Pointer to the building where the utility will be applied.
     */
    virtual void applyUtility(Building* building) = 0;

    /**
     * @brief Gets the cost of the utility.
     *
     * @return The utility cost as a float.
     */
    float getUtilityCost() const;

    // Getters

    /**
     * @brief Gets the building associated with the utility.
     *
     * @return Pointer to the building.
     */
    Building* getBuilding() const { return building; }

    /**
     * @brief Gets the resource factory associated with the utility.
     *
     * @return Pointer to the resource factory.
     */
    ResourceFactory* getResourceFactory() const { return resourceFactory; }
};

#endif
