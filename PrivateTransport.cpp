#include "PrivateTransport.h"
#include <iostream>
#include <memory>
void PrivateTransport::travel() {
	if (isAvailable()) {
        std::cout << "Private transport is traveling.\n";
    } else {
        std::cout << "Private transport is unavailable.\n";
    }
	
	
}

bool PrivateTransport::isAvailable()
{
    return currentState && currentState->isAvailable();
}

float PrivateTransport::calculateCommuteTime()
{
    return 0.0f;
}

PrivateTransport::PrivateTransport(float cost, std::shared_ptr<TransportationState> state ) : ModeOfTransport(state), maintenanceCost(cost)
{
}

// PrivateTransport::~PrivateTransport() = default;
