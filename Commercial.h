#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "Building.h"

/**
 * @class Commercial
 * @brief Represents a commercial building, with attributes for entertainment and employment ratings.
 * 
 * The Commercial class inherits from Building and introduces specific features 
 * such as ratings for entertainment and employment, to reflect the role of commercial
 * buildings in the city's economy.
 */
class Commercial : public Building {
protected:
    int entertainmentRating;   ///< Rating reflecting the entertainment value provided by the building.
    int employmentRating;      ///< Rating reflecting the employment opportunities provided by the building.

public:
    /**
     * @brief Constructs a Commercial building with default ratings.
     */
    Commercial();

    /**
     * @brief Virtual destructor for the Commercial class.
     */
    virtual ~Commercial();

    /**
     * @brief Displays information about the commercial building, including ratings.
     */
    virtual void display() override;

    /**
     * @brief Increases the employment rating by one.
     */
    virtual void IncEmploymentRating();

    /**
     * @brief Decreases the employment rating by one.
     */
    virtual void DecEmploymentRating();

    /**
     * @brief Increases the entertainment rating by one.
     */
    virtual void IncEntertainmentRating();

    /**
     * @brief Decreases the entertainment rating by one.
     */
    virtual void DecEntertainmentRating();

    /**
     * @brief Retrieves the current employment rating of the building.
     * @return The employment rating.
     */
    virtual int getEmploymentRating() const;

    /**
     * @brief Creates a copy of the current Commercial building.
     * @return A pointer to a new Commercial object with the same values.
     */
    Building* clone() const override;

    /**
     * @brief Performs general maintenance for the commercial building.
     */
    virtual void performMaintenance();
};

#endif // COMMERCIAL_H
