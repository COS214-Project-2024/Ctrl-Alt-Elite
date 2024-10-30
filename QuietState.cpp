#include "QuietState.h"
#include <iostream>
#include <memory>
QuietState::QuietState(): PublicTransportState("Quiet")
{
}

void QuietState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Public transport is in Quiet state and running normally.\n";
}

void QuietState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	state = "Moderate";  // Transition to Moderate state
        std::cout << "State changed to Moderate.\n";
}
