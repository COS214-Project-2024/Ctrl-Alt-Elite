#ifndef SEWAGE_SYSTEMS_H
#define SEWAGE_SYSTEMS_H

#include "Utilities.h"

/**
 * @class SewageSystems
 * @brief Class representing sewage systems within a city building.
 * 
 * The SewageSystems class manages the sewage generation and capacity
 * for a specific building. It is derived from the Utilities class.
 */
class SewageSystems : public Utilities {
private:
    int sewageCapacity;     ///< Maximum capacity of the sewage system.
    int sewageGenerated;    ///< Amount of sewage currently generated.

public:
    /**
     * @brief Constructs a SewageSystems object.
     * 
     * @param building Pointer to the building associated with the sewage system.
     * @param cost The cost to construct the sewage system.
     * @param factory Pointer to the ResourceFactory for managing resources.
     * @param capacity The maximum capacity of the sewage system.
     */
    SewageSystems(Building* building, float cost, ResourceFactory* factory, int capacity);
    
    /**
     * @brief Applies the sewage utility to the specified building.
     * 
     * This method checks if the sewage capacity allows for more sewage
     * generation and updates the building's sewage management status.
     * 
     * @param building Pointer to the building to which the utility is applied.
     */
    void applyUtility(Building* building) override;
    
    /**
     * @brief Checks if there is sufficient capacity for more sewage.
     * 
     * @return true if there is capacity for more sewage; false otherwise.
     */
    bool checkSewageCapacity();
    
    /**
     * @brief Updates the capacity of the sewage system.
     * 
     * @param newCapacity The amount to add to the current sewage capacity.
     */
    void updateSewageCapacity(int newCapacity);

    // Getters
    /**
     * @brief Gets the maximum capacity of the sewage system.
     * 
     * @return The current sewage capacity.
     */
    int getSewageCapacity() const { return sewageCapacity; }
    
    /**
     * @brief Gets the amount of sewage generated.
     * 
     * @return The amount of sewage currently generated.
     */
    int getSewageGenerated() const { return sewageGenerated; }
};

#endif // SEWAGE_SYSTEMS_H
