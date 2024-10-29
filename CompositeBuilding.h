#ifndef COMPOSITEBUILDING_H
#define COMPOSITEBUILDING_H

#include "Building.h"
#include <unordered_map>

class CompositeBuilding : public Building {
private:
    std::vector<Building*> buildings;
    int population;
    int jobs;

public:
    CompositeBuilding();
    ~CompositeBuilding();

    void addBuilding(Building* building) ;
    void removeBuilding(Building* building) ;

    void display() const override;
    Building* clone() const override;

    void increasePopulation(int amount);
    void increaseJobs(int amount);
    void expandUtilities();
    void displayCityState();
	void manageCapacity();
    void integrateUtilities();
	//double calculateTax();
	double calculateTaxRevenue() const;
    void maintainBuildings();
    void trackSatisfaction();

   // std::vector<Building*>::iterator createIterator() override;

};

#endif
