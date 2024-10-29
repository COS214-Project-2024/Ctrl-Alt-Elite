#include "Bus.h"
#include <iostream>
#include <memory> 
void Bus::travel() {
	if (isAvailable()) {
            std::cout << "Bus is traveling with a fare of R" << fare << "\n";
            stopAtStation();
        } else {
            std::cout << "Bus is currently unavailable.\n";
        }
	
}

Bus::Bus(int cap, int routes, float busFare, std::shared_ptr<TransportationState> state ): PublicTransport(cap, routes, state), fare(busFare)
{
}
