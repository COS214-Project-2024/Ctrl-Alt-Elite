#ifndef PRIVATEBUSYSTATE_H
#define PRIVATEBUSYSTATE_H

#include "PrivateTransportState.h"
#include <memory>

/**
 * @class PrivateBusyState
 * @brief Represents the busy state of a private transport mode.
 * 
 * The PrivateBusyState class indicates that the private transport is currently in use and 
 * unable to accept new requests. It handles state transitions and manages behavior 
 * specific to the busy state.
 */
class PrivateBusyState : public PrivateTransportState {
public:
    /**
     * @brief Constructs a PrivateBusyState instance.
     */
    PrivateBusyState();

    /**
     * @brief Handles the current busy state of the transport.
     * 
     * Displays a message indicating that the private transport is busy.
     * 
     * @param transport Shared pointer to the ModeOfTransport currently in this state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport from busy to quiet.
     * 
     * This method transitions the transport to the PrivateQuietState.
     * 
     * @param transport Shared pointer to the ModeOfTransport whose state is to be changed.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // ~PrivateBusyState() override = default;  // Destructor can be defaulted if needed
};

#endif
