#ifndef WATER_H
#define WATER_H

#include "Resource.h"
#include <iostream>

/**
 * @class Water
 * @brief Represents a water resource with capacity management.
 *
 * The Water class inherits from the Resource class and provides
 * functionality to manage water resources, including consumption and
 * replenishment of water supplies.
 */
class Water : public Resource {
private:
    int capacity; ///< Capacity of the water resource in Kilolitres.

public:
    /**
     * @brief Constructs a Water resource with specified capacity.
     *
     * The cost is set based on the capacity multiplied by a fixed rate.
     *
     * @param cap The initial capacity of the water resource in Kilolitres.
     */
    Water(int cap);

    /**
     * @brief Gets the current capacity of the water resource.
     *
     * @return The current capacity in Kilolitres.
     */
    int getCapacity() const override;

    /**
     * @brief Consumes a specified amount of water from the resource.
     *
     * Reduces the capacity of the water resource by the specified amount
     * if enough water is available; otherwise, outputs an error message.
     *
     * @param amount The amount of water to consume in Kilolitres.
     */
    void consume(int amount) override;

    /**
     * @brief Replenishes the water resource by a specified amount.
     *
     * Increases the capacity of the water resource by the specified amount.
     *
     * @param amount The amount of water to add in Kilolitres.
     */
    void replenish(int amount) override;
};

#endif // WATER_H
