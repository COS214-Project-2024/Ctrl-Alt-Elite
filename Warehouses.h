#ifndef WAREHOUSES_H
#define WAREHOUSES_H

#include "Industrial.h"

/**
 * @class Warehouses
 * @brief Represents a warehouse in an industrial setting.
 *
 * The Warehouses class inherits from the Industrial class and
 * provides specific functionalities for managing warehouse
 * operations, including displaying information, updating
 * employment ratings, and pollution levels.
 */
class Warehouses : public Industrial {
public:
    /**
     * @brief Constructs a Warehouses object.
     *
     * Initializes the warehouse with default values.
     */
    Warehouses();

    /**
     * @brief Destroys the Warehouses object.
     */
    ~Warehouses() override;

    /**
     * @brief Displays the current state of the warehouse.
     *
     * Outputs the employment rating and pollution level to the console.
     */
    void display() override;

    /**
     * @brief Updates the employment rating of the warehouse.
     *
     * Increases the employment rating by a fixed amount.
     */
    void updateEmploymentRating() override;

    /**
     * @brief Updates the pollution level of the warehouse.
     *
     * Increases the pollution level by a fixed amount.
     */
    void updatePollutionLevel() override;

    /**
     * @brief Performs maintenance tasks for the warehouse.
     *
     * Outputs a message indicating the maintenance tasks being performed.
     */
    void performMaintenance() override;
};

#endif
