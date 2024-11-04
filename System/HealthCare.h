#ifndef HEALTHCARE_H
#define HEALTHCARE_H

#include "PublicServicesDepartment.h"

/**
 * @class HealthCare
 * @brief The HealthCare class represents the healthcare services department in a city.
 * 
 * This class inherits from the PublicServicesDepartment and handles health-related requests 
 * from citizens.
 */
class HealthCare : public PublicServicesDepartment {
public:
    /**
     * @brief Constructor for the HealthCare class.
     * @param city Pointer to the city associated with this healthcare department.
     */
    HealthCare(City* city);

    /**
     * @brief Handles incoming requests related to health services.
     * 
     * This method checks the request type and determines if it matches 
     * the health services offered. If the service is available, it processes 
     * the request; otherwise, it calls the base class method to handle 
     * unrecognized requests.
     * 
     * @param requestType The type of the request being handled.
     */
    virtual void handleRequest(int requestType) override;
};

#endif // HEALTHCARE_H
