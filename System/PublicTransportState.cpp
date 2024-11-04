#include "PublicTransportState.h"
#include <iostream>
#include <memory>

PublicTransportState::PublicTransportState(const std::string &initialState) : state(initialState)
{
}

bool PublicTransportState::isAvailable() const
{
    return getState() != "Busy";
}

std::string PublicTransportState::getState() const
{
    return state;
}

void PublicTransportState::setState(const std::string &newState)
{
    state = newState;
}

// PublicTransportState::~PublicTransportState() = default;

void PublicTransportState::changeState(std::shared_ptr<ModeOfTransport> transport) {
    // std::cout << "Changing state of public transport.\n";
    if (state == "Busy") {
        setState("Quiet");
        std::cout << "State changed from Busy to Quiet.\n";
    } else if (state == "Quiet") {
        setState("Moderate");
        std::cout << "State changed from Quiet to Moderate.\n";
    } else {
        setState("Busy");
        std::cout << "State changed to Busy.\n";
    }
}

void PublicTransportState::handle(std::shared_ptr<ModeOfTransport> transport) {
    std::cout << "Handling public transport state.\n";
}