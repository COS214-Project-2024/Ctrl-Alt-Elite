#include "Bike.h"
#include <memory>
#include <iostream>
void Bike::travel() {
	if (isAvailable()) {
            std::cout << "Bike is being used for travel.\n";
            std::cout << "             __o\n";
            std::cout << "           _ \\<_\n";
            std::cout << "          (_)/(_)\n";
        } else {
            std::cout << "Bike is currently unavailable.\n";
        }
}

Bike::Bike(int cap, std::shared_ptr<TransportationState> state) :PrivateTransport(cap, state)
{
}
