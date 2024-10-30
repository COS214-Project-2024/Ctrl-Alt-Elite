#include "Adapter.h"
#include "Residential.h"
#include "Commercial.h"
#include "Industrial.h"
#include "Landmarks.h"

#include <iostream>
using namespace std;

Adapter::Adapter(CompositeBuilding* cb){
    adaptee = cb;
}

void Adapter::addResidentialUnits(int units){
    for (int i = 0; i < units; i++) {
        Residential* resBuilding = new Residential();
        resBuilding->calculateOccupancyRate();
        adaptee->addBuilding(resBuilding);
        adaptee->increasePopulation(resBuilding->getNumResidents());
    }
}

void Adapter::addCommercialUnits(int units){
    for (int i = 0; i < units; i++) {
        Commercial* comBuilding = new Commercial();
        adaptee->addBuilding(comBuilding);
        adaptee->increaseJobs(comBuilding->getEmploymentRating());
    }
}

void Adapter::addIndustrialUnits(int units){
    for (int i = 0; i < units; ++i) {
        Industrial* indBuilding = new Industrial();
        adaptee->addBuilding(indBuilding);
        adaptee->increaseJobs(indBuilding->getEmploymentRating());
    }
}

void Adapter::addLandmarkUnits(int units){
    for (int i = 0; i < units; ++i) {
        Landmarks* landmarkBuilding = new Landmarks();
        adaptee->addBuilding(landmarkBuilding);
        // Increase CompositeBuilding's entertainment rating based on each landmark's rating
        //adaptee->expandUtilities(landmarkBuilding->getEntertainmentRating());
        adaptee->expandUtilities();
        
    }
}

void Adapter::displayCityStatus(){
    adaptee->displayCityState();
}
