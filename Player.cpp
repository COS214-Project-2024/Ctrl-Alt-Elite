#include "Player.h"

Player::Player() : city(0, 0) {
    std::cout << "Welcome, Mayor! You are now in control of the city.\n";
}

void Player::addResidentialBuilding() {
   //todo 
}

void Player::removeBuilding() {
   //todo
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
