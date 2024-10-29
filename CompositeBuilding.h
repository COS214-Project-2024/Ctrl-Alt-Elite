#ifndef COMPOSITEBUILDING_H
#define COMPOSITEBUILDING_H

#include "Building.h"
#include <unordered_map>

class CompositeBuilding : public Building {
private:
    std::unordered_map<std::string, int> buildings;
    int population;
    int jobs;

public:
    CompositeBuilding();
    ~CompositeBuilding();

    void addBuilding(Building* building) override;
    void removeBuilding(Building* building) override;
    void display() const override;
    Building* clone() const override;

    void increasePopulation(int amount);
    void increaseJobs(int amount);
    void expandUtilities();
    void displayCityState();

    Iterator<std::pair<std::string, int>>* createIterator() override;
};

#endif
