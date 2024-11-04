#include "ModerateState.h"
#include <iostream>
#include <memory>
#include "BusyState.h"
ModerateState::ModerateState() : PublicTransportState("Moderate")
{
}

void ModerateState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Public transport is in Moderate state, handling a regular number of passengers.\n";
}

void ModerateState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	if (transport) {
        transport->setState(std::make_shared<BusyState>());  // Transition to Busy state
        std::cout << "State changed to Busy.\n";
    } else {
        std::cout << "Transport is null.\n";
    }
}
