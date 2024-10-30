#include "PrivateTransportState.h"
#include <iostream>
#include <memory>

PrivateTransportState::PrivateTransportState(const std::string &initialState): state(initialState)
{
}

bool PrivateTransportState::isAvailable() const
{
	return state != "Busy";
}

// PrivateTransportState::~PrivateTransportState() = default;

void PrivateTransportState::handle(std::shared_ptr<ModeOfTransport> transport) {
    std::cout << "Handling private transport state.\n";
}

void PrivateTransportState::changeState(std::shared_ptr<ModeOfTransport> transport) {
    std::cout << "Changing state of private transport.\n";
}