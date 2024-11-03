#include "Taxi.h"
#include <iostream>
#include <memory>
void Taxi::travel() {
	if (isAvailable()) {
            std::cout << "Taxi is traveling with a fare of R" << farePerKM << " per km.\n";
        } else {
            std::cout << "Taxi is currently unavailable.\n";
        }
	
}

Taxi::Taxi(int cap, int routes, float fare, std::shared_ptr<TransportationState> state = nullptr) : PublicTransport(cap, routes, state), farePerKM(fare) {}
