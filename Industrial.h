#ifndef INDUSTRIAL_H
#define INDUSTRIAL_H

#include "Building.h"

/**
 * @class Industrial
 * @brief The Industrial class represents an industrial building in a city.
 * 
 * This class inherits from the Building class and includes specific attributes
 * and methods for managing employment ratings and pollution levels associated
 * with industrial buildings.
 */
class Industrial : public Building {
protected:
    int employmentRating; ///< The employment rating of the industrial building.
    float pollutionLevel; ///< The pollution level of the industrial building.

public:
    /**
     * @brief Default constructor for the Industrial class.
     * 
     * Initializes an Industrial object with default employment rating and pollution level.
     */
    Industrial();

    /**
     * @brief Destructor for the Industrial class.
     */
    virtual ~Industrial();

    /**
     * @brief Displays the details of the industrial building.
     * 
     * This method outputs the current employment rating and pollution level,
     * along with a simple ASCII representation of the building.
     */
    virtual void display() override;

    /**
     * @brief Updates the employment rating of the industrial building.
     * 
     * This method increments the employment rating by 1.
     */
    virtual void updateEmploymentRating();

    /**
     * @brief Updates the pollution level of the industrial building.
     * 
     * This method increments the pollution level by 0.5.
     */
    virtual void updatePollutionLevel();

    /**
     * @brief Gets the current employment rating of the industrial building.
     * 
     * @return The current employment rating.
     */
    int getEmploymentRating() const;

    /**
     * @brief Clones the current Industrial object.
     * 
     * @return A pointer to a new Industrial object that is a copy of this one.
     */
    Building* clone() const override;

    /**
     * @brief Performs maintenance activities for the industrial building.
     * 
     * This method includes general maintenance tasks and updates the pollution level 
     * as part of the maintenance process.
     */
    virtual void performMaintenance();
};

#endif // INDUSTRIAL_H
