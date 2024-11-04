#include "Building.h"

// Building::Building(float initialValue, float initialTaxRate)
// {
// }

/**
 * @brief Allocates resources to the building.
 * 
 * This function is intended to manage the allocation of a specified 
 * resource to the building. Implementation should include logic 
 * to determine how resources are distributed.
 * 
 * @param resource Pointer to the Resource to be allocated.
 */
void Building::allocateResources(Resource* resource)
{
    // Logic to allocate resources to the building
}

// Accessors

/**
 * @brief Gets the electricity availability status.
 * 
 * @return True if electricity is available, false otherwise.
 */
bool Building::getHasElectricity() const { return hasElectricity; }

/**
 * @brief Gets the water supply availability status.
 * 
 * @return True if water supply is available, false otherwise.
 */
bool Building::getHasWaterSupply() const { return hasWaterSupply; }

/**
 * @brief Gets the waste collection status.
 * 
 * @return True if waste collection is handled, false otherwise.
 */
bool Building::getWasteCollected() const { return wasteCollected; }

/**
 * @brief Gets the sewage management status.
 * 
 * @return True if sewage is managed, false otherwise.
 */
bool Building::getSewageManaged() const { return sewageManaged; }

/**
 * @brief Gets the building's property value.
 * 
 * @return The current value of the building.
 */
float Building::getValue() const { return value; }

/**
 * @brief Gets the current tax rate applied to the building.
 * 
 * @return The tax rate of the building.
 */
float Building::getTaxRate() const { return taxRate; }

// Mutators

/**
 * @brief Sets the electricity availability status.
 * 
 * @param status The new electricity availability status.
 */
void Building::setHasElectricity(bool status) { hasElectricity = status; }

/**
 * @brief Sets the water supply availability status.
 * 
 * @param status The new water supply availability status.
 */
void Building::setHasWaterSupply(bool status) { hasWaterSupply = status; }

/**
 * @brief Sets the waste collection status.
 * 
 * @param status The new waste collection status.
 */
void Building::setWasteCollected(bool status) { wasteCollected = status; }

/**
 * @brief Sets the sewage management status.
 * 
 * @param status The new sewage management status.
 */
void Building::setSewageManaged(bool status) { sewageManaged = status; }

/**
 * @brief Sets the building's property value.
 * 
 * @param newValue The new property value.
 */
void Building::setValue(float newValue) { value = newValue; }

/**
 * @brief Sets a new tax rate for the building.
 * 
 * @param newRate The new tax rate.
 */
void Building::setTaxRate(float newRate) { taxRate = newRate; }

// Functions

/**
 * @brief Calculates and pays property tax based on the building's value and tax rate.
 * 
 * This function computes the tax amount using the building's current value 
 * and tax rate, and executes the payment process. Additional logic should 
 * be included to adjust the budget or resources accordingly.
 * 
 * @param amount The tax amount to pay.
 */
void Building::payPropertyTax(float amount) {
    // Calculate and deduct property tax based on building value
    float taxAmount = value * taxRate;
    // Additional logic to deduct the tax amount from the budget or other resources
}

/**
 * @brief Updates the building's tax rate.
 * 
 * This function sets a new tax rate for the building. The new rate can 
 * affect future property tax calculations.
 * 
 * @param newRate The new tax rate.
 */
void Building::updateBuildingTaxRate(float newRate) {
    taxRate = newRate;
}
