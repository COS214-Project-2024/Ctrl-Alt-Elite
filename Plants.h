#ifndef PLANTS_H
#define PLANTS_H

#include "Industrial.h"

/**
 * @class Plants
 * @brief Represents a plant as a type of industrial facility.
 * 
 * The Plants class extends the Industrial class, encapsulating 
 * the properties and functionalities associated with industrial 
 * plants, including employment ratings and pollution levels.
 */
class Plants : public Industrial {
public:
    /**
     * @brief Default constructor for the Plants class.
     * 
     * Initializes a new instance of the Plants class.
     */
    Plants();

    /**
     * @brief Destructor for the Plants class.
     * 
     * Cleans up resources used by the Plants instance.
     */
    ~Plants() override;

    /**
     * @brief Displays information about the plant.
     * 
     * Outputs the current employment rating and pollution level 
     * of the plant to the console.
     */
    void display() override;

    /**
     * @brief Updates the employment rating of the plant.
     * 
     * Increases the employment rating by a fixed amount, reflecting 
     * changes in employment levels within the plant.
     */
    void updateEmploymentRating() override;

    /**
     * @brief Updates the pollution level of the plant.
     * 
     * Increases the pollution level by a fixed amount, reflecting 
     * the environmental impact of the plant's operations.
     */
    void updatePollutionLevel() override;

    /**
     * @brief Performs maintenance tasks for the plant.
     * 
     * Executes necessary maintenance operations, including process 
     * checks and waste management activities.
     */
    void performMaintenance() override;
};

#endif
