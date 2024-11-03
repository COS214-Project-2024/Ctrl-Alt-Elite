#ifndef PLAYER_H
#define PLAYER_H
#include "CityBuilder.h"
#include "CompositeBuilding.h"
#include "Residential.h"
#include <iostream>

class Player {
public:
    Player();
    void addResidentialBuilding();
    void ExpandEconomy();
    void ExpandInfrustructure();
    void removeBuilding();
    void increasePopulation(int amount);
    void increaseJobs(int amount);
    void expandUtilities();
    void showCityState();

private:
    CompositeBuilding city;
    CityBuilder builder;
};

#endif
