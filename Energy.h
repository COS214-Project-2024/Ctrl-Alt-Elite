#ifndef ENERGY_H
#define ENERGY_H

#include "Resource.h"
#include <iostream>

/**
 * @class Energy
 * @brief The Energy class represents an energy resource, inheriting from the Resource base class.
 */
class Energy : public Resource {
private:
    int capacity; ///< Energy capacity in kilowatts (KW).

public:
    /**
     * @brief Constructor that initializes the Energy resource with a specified capacity.
     * @param cap The initial capacity in kilowatts.
     */
    Energy(int cap);

    /**
     * @brief Gets the current capacity of the energy resource.
     * @return The current capacity in kilowatts.
     */
    int getCapacity() const override;

    /**
     * @brief Consumes a specified amount of energy.
     * @param amount The amount of energy to consume.
     */
    void consume(int amount) override;

    /**
     * @brief Replenishes the energy resource by a specified amount.
     * @param amount The amount of energy to replenish.
     */
    void replenish(int amount) override;
};

#endif // ENERGY_H
