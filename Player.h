#ifndef PLAYER_H
#define PLAYER_H

#include "CityBuilder.h"
#include "CompositeBuilding.h"
#include "City.h"
#include <iostream>

class Player {
public:
    Player();
    void createCity();
    void addBuilding();
    void addCitizens();
    void addGovernment();
    void addResources();
    void addUtilities();
    void performGovernmentPolicies();
    void performMaintenance();
    void performTransport();
    void chooseTransportMode();
    void choosePublicTransport();
    void choosePrivateTransport();
    void setState();
    void testCommuteTime();
    void checkAvailability();
    void travelCitizen();
    void updateSatisfaction();
    void removeBuilding();
    // void removeCitizen();
    // void removeGovernment();
    //void removeResource();
    //void removeUtility();
    void increasePopulation(int amount);
    void increaseJobs(int amount);
    void showCityState();

private:
    City* city ;
    CompositeBuilding* compositeBuilding;
    CityBuilder* builder;
    std::vector<Citizen*> citizens;
    std::shared_ptr<TransportStrategy> selectedTransport;
    std::shared_ptr<TransportationState> currentState;
};

#endif
