#ifndef TAXATIONDEPARTMENT_H
#define TAXATIONDEPARTMENT_H

#include "Government.h"
#include "City.h"

/**
 * @class TaxationDepartment
 * @brief Manages taxation and city management within a government framework.
 * 
 * The TaxationDepartment class is responsible for managing tax rates and 
 * handling notifications related to tax updates in a city. It inherits from 
 * the Government class, allowing it to interact with the city's governance system.
 */
class TaxationDepartment : public Government {
public:
    /**
     * @brief Constructs a TaxationDepartment for a specified city.
     * 
     * @param city Pointer to the City this department will manage.
     */
    TaxationDepartment(City* city);

    /**
     * @brief Manages the city by notifying citizens about tax updates.
     * 
     * This method handles the logic to notify citizens when taxes have been 
     * updated. The actual notification mechanism can be implemented as needed.
     */
    void manageCity();

    /**
     * @brief Updates the tax rate for the city.
     * 
     * @param newTaxRate The new tax rate to be applied.
     */
    void updateTaxes(float newTaxRate);

    /**
     * @brief Retrieves the current tax rate.
     * 
     * @return The current tax rate as a float.
     */
    float getTaxrate();
};

#endif // TAXATIONDEPARTMENT_H
