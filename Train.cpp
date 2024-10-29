#include "Train.h"
#include <iostream>
#include <memory>
void Train::travel() {
	if (isAvailable()) {
            std::cout << "Train is traveling with a ticket price of R" << ticketPrice << "\n";
            stopAtStation();
        } else {
            std::cout << "Train is currently unavailable.\n";
        }
	
}

Train::Train(int cap, int routes, float price, std::shared_ptr<TransportationState> state = nullptr): PublicTransport(cap, routes, state), ticketPrice(price)
{
}
