#include "BusyState.h"
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
	state = "Quiet";  
        
	std::cout << "State changed to Quiet.\n";
}
