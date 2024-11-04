#include "Adapter.h"
#include "Residential.h"
#include "Commercial.h"
#include "Industrial.h"
#include "Landmarks.h"

#include <iostream>
using namespace std;

/**
 * @brief Adapter constructor initializing with a CompositeBuilding pointer.
 * @param cb Pointer to a CompositeBuilding instance.
 */
Adapter::Adapter(CompositeBuilding* cb){
    adaptee = cb;
}

/**
 * @brief Adds residential units to the CompositeBuilding and increases the population accordingly.
 * @param units Number of residential units to add.
 */
void Adapter::addResidentialUnits(int units){
    for (int i = 0; i < units; i++) {
        Residential* resBuilding = new Residential();
        resBuilding->calculateOccupancyRate();
        adaptee->addBuilding(resBuilding);
        adaptee->increasePopulation(resBuilding->getNumResidents());
    }
}

/**
 * @brief Adds commercial units to the CompositeBuilding and increases job availability.
 * @param units Number of commercial units to add.
 */
void Adapter::addCommercialUnits(int units){
    for (int i = 0; i < units; i++) {
        Commercial* comBuilding = new Commercial();
        adaptee->addBuilding(comBuilding);
        adaptee->increaseJobs(comBuilding->getEmploymentRating());
    }
}

/**
 * @brief Adds industrial units to the CompositeBuilding and increases job availability.
 * @param units Number of industrial units to add.
 */
void Adapter::addIndustrialUnits(int units){
    for (int i = 0; i < units; ++i) {
        Industrial* indBuilding = new Industrial();
        adaptee->addBuilding(indBuilding);
        adaptee->increaseJobs(indBuilding->getEmploymentRating());
    }
}

/**
 * @brief Adds landmark units to the CompositeBuilding and expands utilities.
 * @param units Number of landmark units to add.
 */
void Adapter::addLandmarkUnits(int units){
    for (int i = 0; i < units; ++i) {
        Landmarks* landmarkBuilding = new Landmarks();
        adaptee->addBuilding(landmarkBuilding);
        // Expand the city's utilities based on landmark requirements
        adaptee->expandUtilities();
    }
}

/**
 * @brief Displays the city status by calling the CompositeBuilding's display function.
 */
void Adapter::displayCityStatus(){
    adaptee->displayCityState();
}
