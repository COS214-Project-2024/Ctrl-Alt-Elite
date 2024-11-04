#ifndef EDUCATION_H
#define EDUCATION_H

#include "PublicServicesDepartment.h"

/**
 * @class Education
 * @brief The Education class represents the education services department within a city,
 *        inheriting from the PublicServicesDepartment.
 */
class Education : public PublicServicesDepartment {
public:
    /**
     * @brief Constructor that initializes the Education department with a reference to the city.
     * @param city Pointer to the City instance that this department serves.
     */
    Education(City* city);

    /**
     * @brief Handles requests related to education services.
     * @param requestType The type of request being made, used to determine if the service can be provided.
     */
    virtual void handleRequest(int requestType) override;
};

#endif // EDUCATION_H
