#include "Building.h"

// Building::Building(float initialValue, float initialTaxRate)
// {
// }

void Building::allocateResources(Resource *resource)
{
    // bablo -resources
}

// Accessors
bool Building::getHasElectricity() const { return hasElectricity; }
bool Building::getHasWaterSupply() const { return hasWaterSupply; }
bool Building::getWasteCollected() const { return wasteCollected; }
bool Building::getSewageManaged() const { return sewageManaged; }
float Building::getValue() const { return value; }
float Building::getTaxRate() const { return taxRate; }

// Mutators
void Building::setHasElectricity(bool status) { hasElectricity = status; }
void Building::setHasWaterSupply(bool status) { hasWaterSupply = status; }
void Building::setWasteCollected(bool status) { wasteCollected = status; }
void Building::setSewageManaged(bool status) { sewageManaged = status; }
void Building::setValue(float newValue) { value = newValue; }
void Building::setTaxRate(float newRate) { taxRate = newRate; }

// Functions
void Building::payPropertyTax(float amount) {
    // Calculate and deduct property tax based on building value
    float taxAmount = value * taxRate;
    // Additional logic to deduct the tax amount from the budget or other resources
}

void Building::updateBuildingTaxRate(float newRate) {
    taxRate = newRate;
}

