#ifndef BUILDING_H
#define BUILDING_H

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "Citizen.h"
#include "Utilities.h"
#include "Resource.h"
#include "Iterator.h"

class Utilities;

/**
 * @class Building
 * @brief Abstract base class representing a building with facilities, citizens, and utilities.
 * 
 * Provides essential methods for managing resources, maintenance, and tax-related operations.
 */
class Building {
protected:
    std::vector<Citizen*> citizens;  ///< List of citizens associated with the building.
    std::vector<Utilities*> utilities;  ///< Utilities associated with the building.
    bool hasElectricity;              ///< Indicates electricity availability.
    bool hasWaterSupply;              ///< Indicates water supply availability.
    bool wasteCollected;              ///< Indicates waste collection status.
    bool sewageManaged;               ///< Indicates sewage management status.
    bool underConstruction;           ///< Indicates if the building is under construction.
    bool available;                   ///< Indicates if the building is available for use.
    float value;                      ///< Property value for tax calculations.
    float taxRate;                    ///< Current tax rate for the building.

public:
    virtual ~Building() = default;

    /**
     * @brief Displays information about the building.
     */
    virtual void display() = 0;

    /**
     * @brief Clones the building, returning a new instance.
     * @return A pointer to a cloned Building object.
     */
    virtual Building* clone() const = 0;

    /**
     * @brief Performs maintenance tasks on the building.
     */
    virtual void performMaintenance() = 0;

    /**
     * @brief Allocates resources to the building.
     * @param resource Pointer to the Resource to allocate.
     */
    void allocateResources(Resource* resource);

    // Accessors

    /**
     * @brief Gets the electricity availability status.
     * @return True if electricity is available, false otherwise.
     */
    bool getHasElectricity() const;

    /**
     * @brief Gets the water supply availability status.
     * @return True if water supply is available, false otherwise.
     */
    bool getHasWaterSupply() const;

    /**
     * @brief Gets the waste collection status.
     * @return True if waste collection is handled, false otherwise.
     */
    bool getWasteCollected() const;

    /**
     * @brief Gets the sewage management status.
     * @return True if sewage is managed, false otherwise.
     */
    bool getSewageManaged() const;

    /**
     * @brief Gets the building's property value.
     * @return The value of the building.
     */
    float getValue() const;

    /**
     * @brief Gets the current tax rate applied to the building.
     * @return The tax rate of the building.
     */
    float getTaxRate() const;

    // Mutators

    /**
     * @brief Sets the electricity availability status.
     * @param status The new electricity availability status.
     */
    void setHasElectricity(bool status);

    /**
     * @brief Sets the water supply availability status.
     * @param status The new water supply availability status.
     */
    void setHasWaterSupply(bool status);

    /**
     * @brief Sets the waste collection status.
     * @param status The new waste collection status.
     */
    void setWasteCollected(bool status);

    /**
     * @brief Sets the sewage management status.
     * @param status The new sewage management status.
     */
    void setSewageManaged(bool status);

    /**
     * @brief Sets the building's property value.
     * @param newValue The new property value.
     */
    void setValue(float newValue);

    /**
     * @brief Sets a new tax rate for the building.
     * @param newRate The new tax rate.
     */
    void setTaxRate(float newRate);

    // Tax-related functions

    /**
     * @brief Calculates and pays property tax based on the building's value and tax rate.
     * @param amount The tax amount to pay.
     */
    void payPropertyTax(float amount);

    /**
     * @brief Updates the building's tax rate.
     * @param newRate The new tax rate.
     */
    void updateBuildingTaxRate(float newRate);
};

#endif // BUILDING_H
