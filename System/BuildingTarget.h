#ifndef BUILDINGTARGET_H
#define BUILDINGTARGET_H

#include <iostream>
using namespace std;

/**
 * @brief Interface for building target management.
 * 
 * This interface defines the methods for managing different types of building units 
 * (residential, commercial, industrial) and displaying the overall city status.
 */
class BuildingTarget
{
public:
    /**
     * @brief Virtual destructor for BuildingTarget.
     * 
     * Ensures proper cleanup of derived classes.
     */
    virtual ~BuildingTarget();

    /**
     * @brief Adds residential units to the building target.
     * 
     * @param units The number of residential units to add.
     */
    virtual void addResidentialUnits(int units) = 0;

    /**
     * @brief Adds commercial units to the building target.
     * 
     * @param units The number of commercial units to add.
     */
    virtual void addCommercialUnits(int units) = 0;

    /**
     * @brief Adds industrial units to the building target.
     * 
     * @param units The number of industrial units to add.
     */
    virtual void addIndustrialUnits(int units) = 0;

    /**
     * @brief Displays the current status of the city.
     * 
     * This method provides an overview of the city's current building status,
     * including the number of residential, commercial, and industrial units.
     */
    virtual void displayCityStatus() = 0;
};

#endif
