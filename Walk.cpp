#include "Walk.h"
#include <iostream>
#include <memory>
void Walk::travel() {
	if (isAvailable()) {
            std::cout << "Walking to the destination.\n";
        } else {
            std::cout << "Walking path is currently unavailable.\n";
        }
}

Walk::Walk(std::shared_ptr<TransportationState> state) : PrivateTransport(1, state)
{
}
