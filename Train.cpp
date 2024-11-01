#include "Train.h"
#include <iostream>
#include <memory>
void Train::travel() {
	if (isAvailable()) {
            std::cout << "Train is traveling with a ticket price of R" << ticketPrice << "\n";
            std::cout << "                                          &&&&&&&&&\n";
            std::cout << "                                        &&&\n";
            std::cout << "                                       &&\n";
            std::cout << "                                      &  _____ ___________\n";
            std::cout << "                                     II__|[] | |   I I   |\n";
            std::cout << "                                    |        |_|_  I I  _|\n";
            std::cout << "                                   < OO----OOO   OO---OO\n";
            std::cout << "**********************************************************\n";
            stopAtStation();
        } else {
            std::cout << "Train is currently unavailable.\n";
        }
	
}

Train::Train(int cap, int routes, float price, std::shared_ptr<TransportationState> state = nullptr): PublicTransport(cap, routes, state), ticketPrice(price)
{
}
