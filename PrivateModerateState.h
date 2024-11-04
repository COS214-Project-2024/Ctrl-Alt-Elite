#ifndef PRIVATEMODERATESTATE_H
#define PRIVATEMODERATESTATE_H

#include "PrivateTransportState.h"
#include <memory>

/**
 * @class PrivateModerateState
 * @brief Represents the moderate state of a private transport mode.
 * 
 * The PrivateModerateState class indicates that the private transport is partially in use, 
 * allowing it to accept new requests under certain conditions. It handles state transitions 
 * and manages behavior specific to the moderate state.
 */
class PrivateModerateState : public PrivateTransportState {
public:
    /**
     * @brief Constructs a PrivateModerateState instance.
     */
    PrivateModerateState();

    /**
     * @brief Handles the current moderate state of the transport.
     * 
     * Displays a message indicating that the private transport is in a moderate state.
     * 
     * @param transport Shared pointer to the ModeOfTransport currently in this state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport from moderate to busy.
     * 
     * This method transitions the transport to the PrivateBusyState.
     * 
     * @param transport Shared pointer to the ModeOfTransport whose state is to be changed.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // ~PrivateModerateState() override = default;  // Destructor can be defaulted if needed
};

#endif
