#include "PrivateModerateState.h"
#include <iostream>
#include <memory>
PrivateModerateState::PrivateModerateState(): PrivateTransportState("Moderate")
{
}

void PrivateModerateState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Private transport is in Moderate state, partially in use.\n";
}

void PrivateModerateState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	 state = "Busy";  // Transition to Busy state
        std::cout << "State changed to Busy.\n";
}
