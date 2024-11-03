#include "PublicTransportState.h"
#include <iostream>
#include <memory>

PublicTransportState::PublicTransportState(const std::string &initialState) : state(initialState)
{
}

bool PublicTransportState::isAvailable() const
{
    return state != "Busy";
}

// PublicTransportState::~PublicTransportState() = default;

void PublicTransportState::changeState(std::shared_ptr<ModeOfTransport> transport) {
    std::cout << "Changing state of public transport.\n";
}

void PublicTransportState::handle(std::shared_ptr<ModeOfTransport> transport) {
    std::cout << "Handling public transport state.\n";
}