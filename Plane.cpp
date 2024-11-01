#include "Plane.h"
#include <iostream>
#include <memory>

void Plane::travel() {
	if (isAvailable()) {
            std::cout << "Plane is flying with a ticket cost of R" << ticketCost << "\n";
        } else {
            std::cout << "Plane is currently unavailable.\n";
        }
}

Plane::Plane(int cap, int routes, float cost, std::shared_ptr<TransportationState> state ) : PublicTransport(cap, routes, state), ticketCost(cost)
{
}
