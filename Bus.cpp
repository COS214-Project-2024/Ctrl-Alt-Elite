#include "Bus.h"
#include <iostream>
#include <memory> 
void Bus::travel() {
	if (isAvailable()) {
            std::cout << "Bus is traveling with a fare of R" << fare << "\n";
            std::cout << " .-----------------------'  |\n";
            std::cout << "/| _ .---. .---. .---. .---.|\n";
            std::cout << "|j||||___| |___| |___| |___||\n";
            std::cout << "|=|||=======================|\n";
            std::cout << "[_|j||(O)\\__________|(O)\\___]\n";
            stopAtStation();
        } else {
            std::cout << "Bus is currently unavailable.\n";
        }
	
}

Bus::Bus(int cap, int routes, float busFare, std::shared_ptr<TransportationState> state ): PublicTransport(cap, routes, state), fare(busFare)
{
}
