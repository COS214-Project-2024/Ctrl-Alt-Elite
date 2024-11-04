#ifndef LAWENFORCMENT_H
#define LAWENFORCMENT_H

#include "PublicServicesDepartment.h"

/**
 * @class LawEnforcement
 * @brief Represents a law enforcement service department.
 * 
 * This class extends the PublicServicesDepartment class and manages 
 * requests related to law enforcement services within the city.
 */
class LawEnforcment : public PublicServicesDepartment {
public:
    /**
     * @brief Constructor for the LawEnforcement class.
     * 
     * Initializes a new instance of the LawEnforcement service department
     * associated with the specified city.
     * 
     * @param city A pointer to the City object this department will serve.
     */
    LawEnforcment(City* city);

    /**
     * @brief Handles a request for law enforcement services.
     * 
     * This method checks the request type and processes it accordingly.
     * If the request matches law enforcement services, it will be handled; 
     * otherwise, it will defer to the base class for handling.
     * 
     * @param requestType An integer representing the type of request.
     */
    virtual void handleRequest(int requestType) override;
};

#endif
