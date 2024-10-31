#include "ModerateState.h"
#include <iostream>
#include <memory>
ModerateState::ModerateState() : PublicTransportState("Moderate")
{
}

void ModerateState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Public transport is in Moderate state, handling a regular number of passengers.\n";
}

void ModerateState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	state = "Busy";  // Transition back to Busy state
        std::cout << "State changed to Busy.\n";
}
