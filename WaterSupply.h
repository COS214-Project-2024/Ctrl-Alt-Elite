#ifndef WATER_SUPPLY_H
#define WATER_SUPPLY_H

#include "Utilities.h"

/**
 * @class WaterSupply
 * @brief Represents a water supply utility for buildings.
 *
 * The WaterSupply class manages the provision of water to a building,
 * checking for available water resources and consuming them as needed.
 */
class WaterSupply : public Utilities {
private:
    int waterCapacity;    ///< The total water capacity available.
    int waterConsumed;    ///< The amount of water consumed during supply.

public:
    /**
     * @brief Constructs a WaterSupply utility with specified building, resource factory, and cost.
     *
     * Initializes the water supply utility and checks if there are sufficient
     * resources in the factory for construction.
     *
     * @param bld Pointer to the associated Building object.
     * @param rf Pointer to the ResourceFactory object managing resources.
     * @param cost The cost required for constructing the water supply utility.
     */
    WaterSupply(Building* bld, ResourceFactory* rf, float cost);

    /**
     * @brief Applies the water supply utility to a specified building.
     *
     * Supplies water to the building if there is sufficient capacity and water available.
     *
     * @param building Pointer to the Building object to which water is supplied.
     */
    void applyUtility(Building* building) override;

    /**
     * @brief Checks if there is sufficient water supply available.
     *
     * @return true if there is enough water to supply; false otherwise.
     */
    bool checkWaterSupply() const;

    /**
     * @brief Updates the water consumption amount for the utility.
     *
     * @param newUsage The new water usage amount to set.
     */
    void updateWaterConsumption(int newUsage);

    // Getters
    /**
     * @brief Gets the total water capacity available.
     *
     * @return The total water capacity.
     */
    int getWaterCapacity() const { return waterCapacity; }

    /**
     * @brief Gets the amount of water currently consumed.
     *
     * @return The amount of water consumed.
     */
    int getWaterConsumed() const { return waterConsumed; }
};

#endif // WATER_SUPPLY_H
