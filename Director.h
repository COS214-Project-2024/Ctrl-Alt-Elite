#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Builder.h"

/**
 * @class Director
 * @brief The Director class is responsible for managing the construction process
 *        of a city by using a Builder.
 */
class Director {
private:
    Builder* builder; ///< Pointer to the Builder that will construct the city.

public:
    /**
     * @brief Constructor that initializes the Director with a specified Builder.
     * @param newBuilder Pointer to a Builder instance.
     */
    Director(Builder* newBuilder);

    /**
     * @brief Sets a new Builder for the Director.
     * @param newBuilder Pointer to a new Builder instance.
     */
    void setBuilder(Builder* newBuilder);

    /**
     * @brief Constructs the growth of the city by executing various building processes.
     * @param amount The amount of population growth to construct.
     */
    void constructCityGrowth(int amount);
};

#endif // DIRECTOR_H
