#include "PublicTransport.h"
#include <iostream>
#include <memory>

PublicTransport::PublicTransport(int cap, int routes, std::shared_ptr<TransportationState> state ) : ModeOfTransport(state), capacity(cap), routesAvailable(routes){}

void PublicTransport::travel()
{
    if (isAvailable())
	{
		stopAtStation();
	}
	
	
}

void PublicTransport::stopAtStation() {
	std::cout << "Public transport stopping at a station.\n";
}

bool PublicTransport::isAvailable()
{
    return currentState && currentState->isAvailable();
}

float PublicTransport::calculateCommuteTime()
{
    return 0.0f;
}

// PublicTransport::~PublicTransport() = default;
