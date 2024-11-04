#ifndef OFFICE_H
#define OFFICE_H

#include "Commercial.h"

/**
 * @class Office
 * @brief Represents an office building, which is a type of commercial property.
 * 
 * The Office class extends the Commercial class, providing specific 
 * functionalities related to offices, including management of entertainment 
 * and employment ratings, as well as maintenance operations.
 */
class Office : public Commercial {
public:
    /**
     * @brief Default constructor for the Office class.
     * 
     * Initializes a new instance of the Office class, setting up 
     * its properties as defined in the base Commercial class.
     */
    Office();

    /**
     * @brief Destructor for the Office class.
     * 
     * Cleans up any resources used by the Office instance.
     */
    ~Office() override;

    /**
     * @brief Displays the details of the office.
     * 
     * Outputs the entertainment rating and employment rating to the console,
     * along with a visual representation of the office.
     */
    void display() override;

    /**
     * @brief Increases the employment rating of the office.
     * 
     * Increments the employment rating by a fixed amount (4).
     */
    void IncEmploymentRating() override;

    /**
     * @brief Decreases the employment rating of the office.
     * 
     * Decrements the employment rating by a fixed amount (1).
     */
    void DecEmploymentRating() override;

    /**
     * @brief Increases the entertainment rating of the office.
     * 
     * Increments the entertainment rating by a fixed amount (1).
     */
    void IncEntertainmentRating() override;

    /**
     * @brief Decreases the entertainment rating of the office.
     * 
     * Decrements the entertainment rating by a fixed amount (1).
     */
    void DecEntertainmentRating() override;

    /**
     * @brief Performs maintenance on the office.
     * 
     * Outputs maintenance tasks specific to offices, such as checking lighting,
     * restocking supplies, and cleaning.
     */
    void performMaintenance() override;
};

#endif
