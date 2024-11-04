#ifndef SHOP_H
#define SHOP_H

#include "Commercial.h"

/**
 * @class Shop
 * @brief Represents a shop in the city, derived from the Commercial class.
 * 
 * The Shop class manages the ratings for employment and entertainment,
 * as well as provides methods for maintenance and display.
 */
class Shop : public Commercial {
public:
    /**
     * @brief Default constructor for the Shop class.
     */
    Shop();
    
    /**
     * @brief Destructor for the Shop class.
     */
    ~Shop() override;

    /**
     * @brief Displays shop information including ratings.
     */
    void display() override;

    /**
     * @brief Increases the employment rating.
     */
    void IncEmploymentRating() override;

    /**
     * @brief Decreases the employment rating.
     */
    void DecEmploymentRating() override;

    /**
     * @brief Increases the entertainment rating.
     */
    void IncEntertainmentRating() override;

    /**
     * @brief Decreases the entertainment rating.
     */
    void DecEntertainmentRating() override;

    /**
     * @brief Performs maintenance tasks for the shop.
     */
    void performMaintenance() override;
};

#endif // SHOP_H
