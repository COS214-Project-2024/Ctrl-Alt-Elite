#ifndef LANDMARKS_H
#define LANDMARKS_H

#include "Building.h"

/**
 * @class Landmarks
 * @brief Represents a landmark building with entertainment features.
 * 
 * This class extends the Building class and adds functionality specific 
 * to landmarks, such as maintaining an entertainment rating and 
 * tracking maintenance costs.
 */
class Landmarks : public Building {
protected:
    int entertainmentRating; /**< Rating indicating the entertainment value of the landmark. */
    float maintenanceCost;    /**< Cost associated with maintaining the landmark. */

public:
    /**
     * @brief Default constructor for the Landmarks class.
     * 
     * Initializes entertainmentRating and maintenanceCost to default values.
     */
    Landmarks();

    /**
     * @brief Virtual destructor for the Landmarks class.
     * 
     * Ensures proper cleanup of derived classes when deleted through 
     * a base class pointer.
     */
    virtual ~Landmarks();

    /**
     * @brief Displays information about the landmark.
     * 
     * This method outputs the entertainment rating and maintenance cost
     * of the landmark to the console.
     */
    void display() override;

    /**
     * @brief Updates the entertainment rating of the landmark.
     * 
     * Increases the entertainment rating by a predefined value.
     */
    virtual void updateEntertainmentRating();

    /**
     * @brief Retrieves the current entertainment rating.
     * 
     * @return The current entertainment rating of the landmark.
     */
    int getEntertainmentRating() const;

    /**
     * @brief Clones the current Landmarks object.
     * 
     * @return A pointer to a new instance of Landmarks that is a copy of this object.
     */
    Building* clone() const override;

    /**
     * @brief Performs maintenance on the landmark.
     * 
     * This method outputs maintenance actions for the landmark to the console.
     */
    virtual void performMaintenance();
};

#endif
