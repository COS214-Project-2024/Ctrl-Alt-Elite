#ifndef HOUSE_H
#define HOUSE_H

#include "Residential.h"

/**
 * @class House
 * @brief The House class represents a residential structure within a city.
 * 
 * This class inherits from the Residential class and provides specific 
 * implementations for handling house-related operations such as displaying 
 * details, calculating occupancy, and managing maintenance.
 */
class House : public Residential {
public:
    /**
     * @brief Constructor for the House class.
     * 
     * Initializes a new House object with a specified number of residents 
     * and available units.
     * 
     * @param numResidents The initial number of residents in the house. Defaults to 0.
     * @param availableUnits The number of available units in the house. Defaults to 1.
     */
    House(int numResidents = 0, int availableUnits = 1);

    /**
     * @brief Destructor for the House class.
     */
    ~House() override;

    /**
     * @brief Displays the details of the house, including occupancy rate.
     * 
     * This method outputs the current occupancy rate of the house and 
     * a simple ASCII representation of the house.
     */
    void display() override;

    /**
     * @brief Calculates the occupancy rate of the house.
     * 
     * This method overrides the base class method to compute the occupancy
     * rate based on the current number of residents and available units.
     */
    void calculateOccupancyRate() override;

    /**
     * @brief Gets the current number of residents in the house.
     * 
     * @return The number of residents currently living in the house.
     */
    int getNumResidents();

    /**
     * @brief Performs maintenance activities for the house.
     * 
     * This method handles general upkeep tasks and inspections specific 
     * to the house.
     */
    void performMaintenance() override;

    /**
     * @brief Sets the number of residents in the house.
     * 
     * @param num The new number of residents to be set.
     */
    void setNumResident(int num) override;
};

#endif // HOUSE_H
