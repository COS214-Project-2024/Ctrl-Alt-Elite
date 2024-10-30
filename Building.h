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

class Building {
protected:
    std::vector<Citizen*> citizens; // List of citizens associated with the building
    Utilities* utilities;           // Utilities associated with the building
    bool hasElectricity;            // Indicates electricity availability
    bool hasWaterSupply;            // Indicates if water is supplied to the building
    bool wasteCollected;            // Indicates if waste is properly collected
    bool sewageManaged;             // Indicates if sewage system is functioning properly
    bool underConstruction;         // Indicates if the building is under construction
    bool available;                 // Indicates if the building is available for use
    float value;                    // Building value for property tax calculations
    float taxRate;                  // Current tax rate for the building

public:
    virtual ~Building() = default;

    // Abstract methods for building management
    virtual void display() const = 0;
    virtual Building* clone() const = 0;

    // Resource allocation method
    void allocateResources(Resource* resource);

    // Accessors
    bool getHasElectricity() const;
    bool getHasWaterSupply() const;
    bool getWasteCollected() const;
    bool getSewageManaged() const;
    float getValue() const;
    float getTaxRate() const;

    // Mutators
    void setHasElectricity(bool status);
    void setHasWaterSupply(bool status);
    void setWasteCollected(bool status);
    void setSewageManaged(bool status);
    void setValue(float newValue);
    void setTaxRate(float newRate);

    // Functions for tax management
    void payPropertyTax(float amount);
    void updateBuildingTaxRate(float newRate);
};

#endif // BUILDING_H
