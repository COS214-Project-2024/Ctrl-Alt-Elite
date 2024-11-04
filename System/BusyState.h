#ifndef BUSYSTATE_H
#define BUSYSTATE_H

#include "PublicTransportState.h"
#include <memory>

/**
 * @brief Represents the busy state of a public transport mode.
 * 
 * The BusyState class inherits from PublicTransportState and handles the behavior
 * of a public transport mode when it is busy and cannot accept more passengers.
 */
class BusyState : public PublicTransportState {
public:
    /**
     * @brief Constructs a BusyState object.
     */
    BusyState();

    /**
     * @brief Handles the current busy state of the transport.
     * 
     * Outputs a message indicating that the public transport is busy and cannot take more passengers.
     * 
     * @param transport A shared pointer to the mode of transport in this state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport to Quiet.
     * 
     * Sets the transport's state to a new QuietState, indicating that it is now available for passengers.
     * 
     * @param transport A shared pointer to the mode of transport whose state will be changed.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // ~BusyState() override = default;
};

#endif
