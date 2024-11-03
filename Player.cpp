#include "Player.h"

Player::Player() : city(0, 0), builder() {
    std::cout << "Welcome, Mayor! You are now in control of the city.\n";
}

void Player::addResidentialBuilding() {
   builder.buildPopulationGrowth();
   city = *builder.getCompositeBuilding();
}

void Player::ExpandEconomy(){
    builder.buildEconomicDevelopment();
    city= *builder.getCompositeBuilding();
}

void Player::ExpandInfrustructure(){
    builder.buildInfrastructureExpansion();
    city = *builder.getCompositeBuilding();
}

void Player::removeBuilding() {
   BuildingIterator cityIt= city.createIterator();
   Building* curr = nullptr;
   if(cityIt.hasNext())
    while (cityIt.hasNext())
    {
        curr=cityIt.next();
    }
    city.removeBuilding(curr);
    
}

void Player::increasePopulation(int amount) {
    city.increasePopulation(amount);
}

void Player::increaseJobs(int amount) {
    city.increaseJobs(amount);
}

void Player::expandUtilities() {
    city.expandUtilities();
}

void Player::showCityState() {
    city.displayCityState();
}
