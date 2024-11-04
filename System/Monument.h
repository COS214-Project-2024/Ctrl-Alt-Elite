#ifndef MONUMENT_H
#define MONUMENT_H

#include "Landmarks.h"

/**
 * @class Monument
 * @brief Represents a monument, which is a specific type of landmark.
 * 
 * The Monument class extends the Landmarks class, providing specific 
 * functionality and characteristics associated with monuments, including 
 * how they are displayed, how their entertainment rating is updated, 
 * and how maintenance is performed.
 */
class Monument : public Landmarks {
public:
    /**
     * @brief Default constructor for the Monument class.
     * 
     * Initializes a new instance of the Monument class, setting up 
     * its properties as defined in the base Landmarks class.
     */
    Monument();

    /**
     * @brief Destructor for the Monument class.
     * 
     * Cleans up any resources used by the Monument instance.
     */
    ~Monument() override;

    /**
     * @brief Displays the details of the monument.
     * 
     * Outputs the entertainment rating and maintenance cost to the console,
     * along with a visual representation of the monument.
     */
    void display() override;

    /**
     * @brief Updates the entertainment rating of the monument.
     * 
     * Increases the entertainment rating by a specific amount for monuments,
     * reflecting their cultural or historical significance.
     */
    void updateEntertainmentRating() override;

    /**
     * @brief Performs maintenance on the monument.
     * 
     * Outputs maintenance tasks specific to monuments, such as cleaning 
     * and structural inspections.
     */
    void performMaintenance() override;
};

#endif
