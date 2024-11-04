#ifndef TOWNHOUSE_H
#define TOWNHOUSE_H

#include "Residential.h"

/**
 * @class Townhouse
 * @brief Represents a townhouse, inheriting from the Residential class.
 *
 * The Townhouse class models a townhouse structure, allowing for operations related to occupancy 
 * rate calculations, maintenance, and management of residents.
 */
class Townhouse : public Residential {
public:
    /**
     * @brief Constructs a Townhouse with specified number of residents and available units.
     * 
     * @param numResidents The number of residents in the townhouse (default is 0).
     * @param availableUnits The number of available units in the townhouse (default is 1).
     */
    Townhouse(int numResidents = 0, int availableUnits = 1);

    /**
     * @brief Destructor for the Townhouse class.
     */
    ~Townhouse() override;

    /**
     * @brief Displays information about the townhouse, including occupancy rate.
     */
    void display() override;

    /**
     * @brief Calculates and updates the occupancy rate of the townhouse.
     */
    void calculateOccupancyRate() override;

    /**
     * @brief Gets the current number of residents in the townhouse.
     * 
     * @return The number of residents currently in the townhouse.
     */
    int getNumResidents() override;

    /**
     * @brief Performs maintenance tasks specific to the townhouse.
     */
    void performMaintenance() override;

    /**
     * @brief Sets the number of residents in the townhouse.
     * 
     * @param num The new number of residents.
     */
    void setNumResident(int num) override;
};

#endif
