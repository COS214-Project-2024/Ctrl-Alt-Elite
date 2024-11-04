#ifndef MATERIALS_H
#define MATERIALS_H

#include "Resource.h"
#include <iostream>

/**
 * @class Materials
 * @brief Represents materials that can be consumed and replenished.
 * 
 * This class extends the Resource class and manages the capacity 
 * of materials available for consumption and replenishment.
 */
class Materials : public Resource {
private:
    int capacity; ///< Capacity of the materials in metric tons (e.g., average could be 100,000 tons).

public:
    /**
     * @brief Constructor for the Materials class.
     * 
     * @param cap The initial capacity of the materials in metric tons.
     */
    Materials(int cap);

    /**
     * @brief Gets the current capacity of the materials.
     * 
     * @return The current capacity of the materials in metric tons.
     */
    int getCapacity() const override;

    /**
     * @brief Consumes a specified amount of materials.
     * 
     * Reduces the capacity of materials by the given amount. 
     * If the amount exceeds the current capacity, an error message is displayed.
     * 
     * @param amount The amount of materials to consume in metric tons.
     */
    void consume(int amount) override;

    /**
     * @brief Replenishes the materials by a specified amount.
     * 
     * Increases the capacity of materials by the given amount.
     * 
     * @param amount The amount of materials to add in metric tons.
     */
    void replenish(int amount) override;
};

#endif
