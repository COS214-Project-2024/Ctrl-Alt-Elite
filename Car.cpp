#include "Car.h"
#include <iostream>
#include <memory>

void Car::travel() {
	if (isAvailable()) {
            std::cout << "Car is traveling with a fuel cost of R" << petrolPrice << " per km.\n";
            std::cout << "        _______\n";
            std::cout << "       //  ||\\ \\ \n";
            std::cout << " _____//___||_\\ \\___\n";
            std::cout << " )  _          _    \\\n";
            std::cout << " |_/ \\________/ \\___|\n";
            std::cout << "___\\_/________\\_/______\n";
        } else {
            std::cout << "Car is currently unavailable.\n";
        }
}

Car::Car(int cap, float fuelCost, std::shared_ptr<TransportationState> state ): PrivateTransport(cap, state), petrolPrice(fuelCost)
{
}

float Car::getPetrolPrice() const
{
    return petrolPrice;
}

void Car::setPetrolPrice(float price)
{
    petrolPrice = price;
}
