#include "Bike.h"
#include <memory>
#include <iostream>
void Bike::travel() {
	if (isAvailable()) {
            std::cout << "Bike is being used for travel.\n";
        } else {
            std::cout << "Bike is currently unavailable.\n";
        }
}

Bike::Bike(int cap, std::shared_ptr<TransportationState> state) :PrivateTransport(cap, state)
{
}
