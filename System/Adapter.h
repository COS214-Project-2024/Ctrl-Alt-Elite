#ifndef ADAPTER_H
#define ADAPTER_H

#include <iostream>
#include "BuildingTarget.h"
#include "CompositeBuilding.h"

using namespace std;

/**
 * @class Adapter
 * @brief The Adapter class adapts the CompositeBuilding interface to the BuildingTarget interface, 
 *        allowing various unit types to be added to the CompositeBuilding.
 */
class Adapter : public BuildingTarget
{
    public:
        /**
         * @brief Constructs an Adapter with a reference to a CompositeBuilding object.
         * @param cb Pointer to a CompositeBuilding instance.
         */
        Adapter(CompositeBuilding* cb);

        /**
         * @brief Adds a specified number of residential units to the CompositeBuilding.
         * @param units The number of residential units to add.
         */
        void addResidentialUnits(int units);

        /**
         * @brief Adds a specified number of commercial units to the CompositeBuilding.
         * @param units The number of commercial units to add.
         */
        void addCommercialUnits(int units);

        /**
         * @brief Adds a specified number of industrial units to the CompositeBuilding.
         * @param units The number of industrial units to add.
         */
        void addIndustrialUnits(int units);

        /**
         * @brief Adds a specified number of landmark units to the CompositeBuilding.
         * @param units The number of landmark units to add.
         */
        void addLandmarkUnits(int units);

        /**
         * @brief Displays the current city status, as held within the CompositeBuilding.
         */
        void displayCityStatus();

    private:
        CompositeBuilding* adaptee; /**< Pointer to the CompositeBuilding instance being adapted. */
};

#endif
