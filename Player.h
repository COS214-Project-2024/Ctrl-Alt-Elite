#ifndef PLAYER_H
#define PLAYER_H

#include "CompositeBuilding.h"
#include "Residential.h"
#include <iostream>

class Player {
public:
    Player();
    void addResidentialBuilding();
    void removeBuilding();
    void increasePopulation(int amount);
    void increaseJobs(int amount);
    void expandUtilities();
    void showCityState();

private:
    CompositeBuilding city;
};

#endif
