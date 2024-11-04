#ifndef PARK_H
#define PARK_H

#include "Landmarks.h"

/**
 * @class Park
 * @brief Represents a park, which is a type of landmark.
 * 
 * The Park class extends the Landmarks class, providing specific 
 * functionalities related to parks, including management of 
 * entertainment ratings and maintenance operations.
 */
class Park : public Landmarks {
public:
    /**
     * @brief Default constructor for the Park class.
     * 
     * Initializes a new instance of the Park class, setting up 
     * its properties as defined in the base Landmarks class.
     */
    Park();

    /**
     * @brief Destructor for the Park class.
     * 
     * Cleans up any resources used by the Park instance.
     */
    ~Park() override;

    /**
     * @brief Displays the details of the park.
     * 
     * Outputs the entertainment rating and maintenance cost to the console,
     * along with a visual representation of the park.
     */
    void display() override;

    /**
     * @brief Updates the entertainment rating of the park.
     * 
     * Increases the entertainment rating by a fixed amount (4).
     */
    void updateEntertainmentRating() override;

    /**
     * @brief Performs maintenance on the park.
     * 
     * Outputs maintenance tasks specific to parks, such as 
     * landscaping and playground inspections.
     */
    void performMaintenance() override;
};

#endif
