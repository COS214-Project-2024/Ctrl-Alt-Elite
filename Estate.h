#ifndef ESTATE_H
#define ESTATE_H

#include "Residential.h"

/**
 * @class Estate
 * @brief The Estate class represents a residential estate, inheriting from the Residential class.
 */
class Estate : public Residential {
public:
    /**
     * @brief Constructor that initializes the Estate with the number of residents and available units.
     * @param numResidents The initial number of residents (default is 0).
     * @param availableUnits The number of available units in the estate (default is 1).
     */
    Estate(int numResidents = 0, int availableUnits = 1);

    /**
     * @brief Destructor for the Estate class.
     */
    ~Estate();

    /**
     * @brief Displays information about the estate, including occupancy rate.
     */
    void display() override;

    /**
     * @brief Calculates the occupancy rate of the estate.
     */
    void calculateOccupancyRate() override;

    /**
     * @brief Gets the current number of residents in the estate.
     * @return The number of residents.
     */
    int getNumResidents() override;

    /**
     * @brief Performs maintenance tasks for the estate.
     */
    void performMaintenance() override;

    /**
     * @brief Sets the number of residents in the estate.
     * @param num The new number of residents.
     */
    void setNumResident(int num) override;
};

#endif // ESTATE_H
