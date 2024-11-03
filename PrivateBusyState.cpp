#include "PrivateBusyState.h"
#include <iostream>
#include <memory>

PrivateBusyState::PrivateBusyState(): PrivateTransportState("Busy")
{
}

void PrivateBusyState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Private transport is in Busy state and currently in use.\n";
}

void PrivateBusyState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	state = "Quiet";  // Transition to Quiet state
        std::cout << "State changed to Quiet.\n";
}
