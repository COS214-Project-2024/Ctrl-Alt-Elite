#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include "Government.h"

class City; ///< Forward declaration of the City class.
class Citizen; ///< Forward declaration of the Citizen class.

/**
 * @class PublicServicesDepartment
 * @brief Represents the public services management within a city.
 *
 * This class inherits from the Government class and is responsible for
 * managing public services in the city. It provides methods to update
 * available services, manage the city, and handle requests related to
 * public services.
 */
class PublicServicesDepartment : public Government {
protected:
    PublicServicesDepartment* handler; ///< Pointer to the next handler in the chain.

public:
    /**
     * @brief Constructs a PublicServicesDepartment instance associated with a city.
     * 
     * @param city Pointer to the City that this department manages.
     */
    PublicServicesDepartment(City* city);

    /**
     * @brief Manages the city by updating public services and notifying citizens.
     * 
     * This method is responsible for updating the available public services
     * and notifying citizens about these updates.
     */
    void manageCity();

    /**
     * @brief Updates the list of public services.
     * 
     * @param services A vector containing the names of services to be updated.
     */
    void updatePublicServices(std::vector<std::string> services);

    /**
     * @brief Default constructor for PublicServicesDepartment.
     * 
     * This constructor can be used to create an instance without associating
     * it with a specific city.
     */
    PublicServicesDepartment();

    /**
     * @brief Sets the next handler in the chain of responsibility.
     * 
     * @param handler Pointer to the next PublicServicesDepartment handler.
     */
    void setNextHandler(PublicServicesDepartment* handler);

    /**
     * @brief Handles a service request.
     * 
     * @param requestType The type of request to be handled.
     * 
     * This method attempts to handle the request, potentially passing it to
     * the next handler if applicable.
     */
    virtual void handleRequest(int requestType);

    /**
     * @brief Retrieves the current tax rate for public services.
     * 
     * @return The current tax rate as a float value.
     */
    float getTaxrate();
};

#endif // PUBLICSERVICESDEPARTMENT_H
