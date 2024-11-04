#ifndef APARTMENT_H
#define APARTMENT_H

#include "Residential.h"

/**
 * @class Apartment
 * @brief Represents an apartment building in the city simulation.
 * 
 * The Apartment class, derived from Residential, models an apartment building, 
 * providing functions to display the apartment's information, calculate occupancy, 
 * and perform maintenance.
 */
class Apartment : public Residential {
public:
   /**
    * @brief Constructs an Apartment with a specified number of residents and available units.
    * @param numResidents Initial number of residents in the apartment.
    * @param availableUnits Initial available units in the apartment (default is 1).
    */
   Apartment(int numResidents = 0, int availableUnits = 1);

   /**
    * @brief Destructor for the Apartment class.
    */
   ~Apartment() override;

   /**
    * @brief Displays the apartment's information and structure in the console.
    */
   void display() override;

   /**
    * @brief Calculates the apartment's occupancy rate.
    */
   void calculateOccupancyRate();

   /**
    * @brief Returns the current number of residents in the apartment.
    * @return The number of residents.
    */
   int getNumResidents() override;

   /**
    * @brief Performs maintenance tasks specific to the apartment.
    */
   void performMaintenance() override;

   /**
    * @brief Sets the number of residents in the apartment.
    * @param num New number of residents.
    */
   void setNumResident(int num) override;
};

#endif // APARTMENT_H
