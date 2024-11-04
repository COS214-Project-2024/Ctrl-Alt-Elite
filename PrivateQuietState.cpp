#include "PrivateQuietState.h"
#include "PrivateModerateState.h"
#include <iostream>
#include <memory>

PrivateQuietState::PrivateQuietState():PrivateTransportState("Quiet")
{
}

void PrivateQuietState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Private transport is in Quiet state and available for use.\n";
}

void PrivateQuietState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
if (transport) {
        transport->setState(std::make_shared<PrivateModerateState>());  // Transition to Moderate state
        std::cout << "State changed to Moderate.\n";
    } else {
        std::cout << "Transport is null.\n";
    }
}
