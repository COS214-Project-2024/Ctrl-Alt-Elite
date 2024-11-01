#include "Car.h"
#include <iostream>
#include <memory>

void Car::travel() {
	if (isAvailable()) {
            std::cout << "Car is traveling with a fuel cost of R" << petrolPrice << " per km.\n";
        } else {
            std::cout << "Car is currently unavailable.\n";
        }
}

Car::Car(int cap, float fuelCost, std::shared_ptr<TransportationState> state ): PrivateTransport(cap, state), petrolPrice(fuelCost)
{
}
