#ifndef WASTE_MANAGEMENT_H
#define WASTE_MANAGEMENT_H

#include "Utilities.h"

/**
 * @class WasteManagement
 * @brief Manages waste collection and recycling processes in a building.
 *
 * The WasteManagement class inherits from the Utilities class and provides
 * functionality to handle waste management tasks, including applying utility
 * to buildings, checking waste capacity, and increasing recycling rates.
 */
class WasteManagement : public Utilities {
private:
    int wasteCapacity;    ///< Maximum capacity for waste management.
    int wasteGenerated;   ///< Current amount of waste generated.

public:
    /**
     * @brief Constructs a WasteManagement object.
     *
     * Initializes the waste management system with specified parameters.
     * This constructor also checks if sufficient budget and materials are available.
     *
     * @param building Pointer to the associated Building object.
     * @param cost Cost of constructing the waste management system.
     * @param factory Pointer to the ResourceFactory for resource management.
     * @param capacity Maximum waste capacity for the system.
     */
    WasteManagement(Building* building, float cost, ResourceFactory* factory, int capacity);

    /**
     * @brief Applies the waste management utility to a building.
     *
     * Checks waste capacity and sets the building's waste collected status.
     */
    void applyUtility(Building* building) override;

    /**
     * @brief Increases the recycling rate.
     *
     * Increases the waste capacity based on the specified recycling rate.
     *
     * @param rate The rate at which the recycling capacity is increased.
     */
    void increaseRecyclingRate(float rate);

    /**
     * @brief Checks if waste capacity is sufficient.
     *
     * @return True if the waste capacity is greater than or equal to
     * the waste generated, otherwise false.
     */
    bool checkWasteCapacity();

    // Getters
    /**
     * @brief Gets the waste capacity.
     *
     * @return The maximum waste capacity.
     */
    int getWasteCapacity() const { return wasteCapacity; }

    /**
     * @brief Gets the amount of waste generated.
     *
     * @return The current amount of waste generated.
     */
    int getWasteGenerated() const { return wasteGenerated; }
};

#endif // WASTE_MANAGEMENT_H
