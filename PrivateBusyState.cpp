#include "PrivateBusyState.h"
#include "PrivateQuietState.h"
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
if (transport) {
        transport->setState(std::make_shared<PrivateQuietState>());  // Transition to Quiet state
        std::cout << "State changed to Quiet.\n";
    } else {
        std::cout << "Transport is null.\n";
    }
}
