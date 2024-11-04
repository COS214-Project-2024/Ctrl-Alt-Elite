#ifndef FACTORIES_H
#define FACTORIES_H

#include "Industrial.h"

/**
 * @class Factories
 * @brief The Factories class represents industrial factories, inheriting from the Industrial class.
 */
class Factories : public Industrial {
public:
    /**
     * @brief Default constructor for the Factories class.
     */
    Factories();

    /**
     * @brief Destructor for the Factories class.
     */
    ~Factories() override;

    /**
     * @brief Displays information about the factory, including employment rating and pollution level.
     */
    void display() override;

    /**
     * @brief Updates the employment rating of the factory.
     */
    void updateEmploymentRating() override;

    /**
     * @brief Updates the pollution level of the factory.
     */
    void updatePollutionLevel() override;

    /**
     * @brief Performs maintenance tasks for the factory.
     */
    void performMaintenance() override;
};

#endif // FACTORIES_H
