#ifndef MALL_H
#define MALL_H

#include "Commercial.h"

/**
 * @class Mall
 * @brief Represents a mall that provides commercial services.
 * 
 * This class extends the Commercial class and manages the 
 * entertainment and employment ratings specific to a mall.
 */
class Mall : public Commercial {
public:
    /**
     * @brief Default constructor for the Mall class.
     * 
     * Initializes a new instance of the Mall.
     */
    Mall();

    /**
     * @brief Destructor for the Mall class.
     * 
     * Cleans up any resources used by the Mall instance.
     */
    ~Mall() override;

    /**
     * @brief Displays information about the mall.
     * 
     * Outputs the entertainment and employment ratings of the mall.
     */
    void display() override;

    /**
     * @brief Increases the employment rating of the mall.
     * 
     * This method increments the employment rating by a predefined amount.
     */
    void IncEmploymentRating() override;

    /**
     * @brief Decreases the employment rating of the mall.
     * 
     * This method decrements the employment rating by a predefined amount.
     */
    void DecEmploymentRating() override;

    /**
     * @brief Increases the entertainment rating of the mall.
     * 
     * This method increments the entertainment rating by a predefined amount.
     */
    void IncEntertainmentRating() override;

    /**
     * @brief Decreases the entertainment rating of the mall.
     * 
     * This method decrements the entertainment rating by a predefined amount.
     */
    void DecEntertainmentRating() override;

    /**
     * @brief Performs maintenance tasks for the mall.
     * 
     * This method checks various aspects of the mall to ensure proper 
     * functioning, including lighting, restocking, and cleaning.
     */
    void performMaintenance() override;
};

#endif
