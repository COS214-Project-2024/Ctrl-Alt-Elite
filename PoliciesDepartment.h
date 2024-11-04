#ifndef POLICIESDEPARTMENT_H
#define POLICIESDEPARTMENT_H

#include "Government.h"

/**
 * @class PoliciesDepartment
 * @brief Represents the policies management department of a city government.
 * 
 * The PoliciesDepartment class is responsible for managing city policies,
 * implementing new policies, and handling taxation rates within the city.
 */
class PoliciesDepartment : public Government {
public:
    /**
     * @brief Constructs a PoliciesDepartment for the specified city.
     * 
     * @param city Pointer to the city being managed by this department.
     */
    PoliciesDepartment(City* city);

    /**
     * @brief Manages the city by implementing government policies.
     * 
     * This function will notify citizens of new policies that have been implemented.
     */
    void manageCity() override;

    /**
     * @brief Implements a new policy for the city.
     * 
     * @param policy The policy to be implemented.
     */
    void implementPolicy(std::string policy);

    /**
     * @brief Retrieves the current tax rate of the city.
     * 
     * @return The current tax rate as a float.
     */
    float getTaxrate();
};

#endif
