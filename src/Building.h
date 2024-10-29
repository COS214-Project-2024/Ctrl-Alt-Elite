#ifndef BUILDING_H
#define BUILDING_H

class Building {
private:
    bool hasElectricity;       // Indicates electricity availability
    bool hasWaterSupply;       // Indicates if water is supplied to the building
    bool wasteCollected;       // Indicates if waste is properly collected
    bool sewageManaged;        // Indicates if sewage system is functioning properly
    float value;               // Building value for property tax calculations
    float taxRate;             // Current tax rate for the building

public:
    // Constructor
    Building(float initialValue, float initialTaxRate);

    // Accessors
    bool getElectricityStatus() const;
    bool getWaterSupplyStatus() const;
    bool getWasteCollectionStatus() const;
    bool getSewageManagementStatus() const;
    float getValue() const;
    float getTaxRate() const;

    // Mutators
    void setElectricityStatus(bool status);
    void setWaterSupplyStatus(bool status);
    void setWasteCollectionStatus(bool status);
    void setSewageManagementStatus(bool status);
    void setValue(float newValue);
    void setTaxRate(float newRate);

    // Functions
    void payPropertyTax(float amount);
    void updateBuildingTaxRate(float newRate);
};

#endif // BUILDING_H
