#ifndef RESIDENTIAL_H
#define RESIDENTIAL_H

#include "Building.h"

/**
 * @class Residential
 * @brief Represents a residential building with occupancy management.
 * 
 * The Residential class is derived from the Building class and includes 
 * functionality to manage the number of residents, available units, and 
 * occupancy rates within a residential building. It provides methods for 
 * displaying information, calculating occupancy, and performing maintenance.
 */
class Residential : public Building {
protected:
    int numResidents;         ///< Number of residents in the building.
    int availableUnits;       ///< Number of available units in the building.
    double occupancyRate;     ///< Current occupancy rate as a percentage.

public:
    /**
     * @brief Default constructor for the Residential class.
     * 
     * Initializes a Residential object with default values for residents, 
     * available units, and occupancy rate.
     */
    Residential();

    /**
     * @brief Parameterized constructor for the Residential class.
     * 
     * Initializes a Residential object with specified number of residents 
     * and available units, and calculates the occupancy rate.
     * 
     * @param numResidents The initial number of residents.
     * @param availableUnits The number of available units.
     */
    Residential(int numResidents, int availableUnits);

    /**
     * @brief Destructor for the Residential class.
     * 
     * Cleans up resources used by the Residential object.
     */
    virtual ~Residential();

    /**
     * @brief Displays the information about the residential building.
     * 
     * This method overrides the display method from the Building class 
     * to provide specific details about the residential building, 
     * including its occupancy rate.
     */
    virtual void display() override;

    /**
     * @brief Calculates the occupancy rate based on current residents and available units.
     * 
     * This method computes the occupancy rate as a percentage and 
     * updates the occupancyRate member variable.
     */
    virtual void calculateOccupancyRate();

    /**
     * @brief Retrieves the current occupancy rate.
     * 
     * @return The occupancy rate as a percentage.
     */
    virtual double getOccupancyRate() const;

    /**
     * @brief Retrieves the number of residents in the building.
     * 
     * @return The current number of residents.
     */
    virtual int getNumResidents();

    /**
     * @brief Performs maintenance tasks specific to residential buildings.
     * 
     * This method outputs a maintenance message and recalculates 
     * the occupancy rate.
     */
    virtual void performMaintenance();

    /**
     * @brief Sets the number of residents in the building.
     * 
     * @param num The new number of residents.
     */
    virtual void setNumResident(int num);

    /**
     * @brief Clones the current Residential object.
     * 
     * This method creates and returns a new Residential object that 
     * is a copy of the current object.
     * 
     * @return A pointer to the newly created Residential object.
     */
    Building* clone() const override;
};

#endif // RESIDENTIAL_H
