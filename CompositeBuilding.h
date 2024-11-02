#ifndef COMPOSITEBUILDING_H
#define COMPOSITEBUILDING_H

#include "Building.h"
#include "BuildingIterator.h"
#include <vector>

class CompositeBuilding : public Building {
private:
    std::vector<Building*> buildings;
    int population;
    int jobs;

public:
    CompositeBuilding();
    CompositeBuilding(int population, int jobs);
    ~CompositeBuilding();

    void addBuilding(Building* building) ;
    void removeBuilding(Building* building) ;

    void display()  override;
    Building* clone() const override;

    void performMaintenance();

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

    BuildingIterator createIterator();
};

#endif
