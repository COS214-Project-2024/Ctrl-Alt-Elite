#ifndef CULTURALCENTER_H
#define CULTURALCENTER_H

#include "Landmarks.h"

/**
 * @class CulturalCenter
 * @brief Represents a cultural center landmark.
 * 
 * The CulturalCenter class inherits from the Landmarks class and provides
 * functionalities specific to a cultural center, including displaying information,
 * updating entertainment ratings, and performing maintenance.
 */
class CulturalCenter : public Landmarks {
public:
    /**
     * @brief Default constructor for CulturalCenter.
     */
    CulturalCenter();

    /**
     * @brief Destructor for CulturalCenter.
     */
    ~CulturalCenter() override;

    /**
     * @brief Displays the cultural center's details, including its entertainment rating and maintenance cost.
     */
    void display() override;

    /**
     * @brief Updates the entertainment rating of the cultural center.
     * Increases the rating by a fixed amount.
     */
    void updateEntertainmentRating() override;

    /**
     * @brief Performs maintenance on the cultural center.
     * This includes checking exhibits and visitor facilities.
     */
    void performMaintenance() override;
};

#endif // CULTURALCENTER_H
