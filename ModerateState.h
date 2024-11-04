#ifndef MODERATESTATE_H
#define MODERATESTATE_H

#include "PublicTransportState.h"
#include <memory>

/**
 * @class ModerateState
 * @brief Represents a moderate state of public transport.
 * 
 * This class extends the PublicTransportState and implements handling for 
 * a moderate level of passenger traffic. It defines how the mode of transport 
 * should behave when in this state.
 */
class ModerateState : public PublicTransportState {
public:
    /**
     * @brief Constructor for the ModerateState class.
     * 
     * Initializes the moderate state with the appropriate state name.
     */
    ModerateState();

    /**
     * @brief Handles the behavior of the transport in the moderate state.
     * 
     * This method defines the actions to be taken when the transport is 
     * in a moderate state, such as managing a regular number of passengers.
     * 
     * @param transport A shared pointer to the mode of transport that is 
     *                  currently in this state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport to a different state.
     * 
     * This method transitions the mode of transport from the moderate state 
     * to the busy state, allowing for adjustments in handling passenger traffic.
     * 
     * @param transport A shared pointer to the mode of transport that is 
     *                  changing states.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // Uncomment if a destructor is needed
    // ~ModerateState() override = default;
};

#endif
