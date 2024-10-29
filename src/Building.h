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

    // Functions
    void payPropertyTax(float amount);
    void updateBuildingTaxRate(float newRate);
};

#endif // BUILDING_H
