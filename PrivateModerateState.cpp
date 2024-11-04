#include "PrivateModerateState.h"
#include "PrivateBusyState.h"
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
	if (transport) {
        transport->setState(std::make_shared<PrivateBusyState>());  // Transition to Busy state
        std::cout << "State changed to Busy.\n";
    } else {
        std::cout << "Transport is null.\n";
    }
}
