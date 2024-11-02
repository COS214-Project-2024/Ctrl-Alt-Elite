#include "BusyState.h"
#include "QuietState.h"
#include <iostream>
#include <memory>
BusyState::BusyState() : PublicTransportState("Busy")
{
}

void BusyState::handle(std::shared_ptr<ModeOfTransport> transport)
{
	std::cout << "Public transport is in Busy state and cannot take more passengers.\n";
}

void BusyState::changeState(std::shared_ptr<ModeOfTransport> transport)
{
	transport->setState(std::make_shared<QuietState>());
        
	// std::cout << "State changed to Quiet.\n";
	// if (transport) {
    //     transport->setState(std::make_shared<QuietState>());
    //     std::cout << "State changed to Quiet.\n";
    // } else {
    //     std::cout << "Transport is null.\n";
    // }
}
