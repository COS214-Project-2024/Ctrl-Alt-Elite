#ifndef PRIVATEQUIETSTATE_H
#define PRIVATEQUIETSTATE_H

#include "PrivateTransportState.h"
#include <memory>

/**
 * @class PrivateQuietState
 * @brief Represents the quiet state of a private transport mode.
 * 
 * The PrivateQuietState class indicates that the private transport is available for use, 
 * signifying that it is in a state where it can accept new requests. It manages behavior 
 * specific to the quiet state and facilitates transitions to other states.
 */
class PrivateQuietState : public PrivateTransportState {
public:
    /**
     * @brief Constructs a PrivateQuietState instance.
     */
    PrivateQuietState();

    /**
     * @brief Handles the current quiet state of the transport.
     * 
     * Displays a message indicating that the private transport is in a quiet state 
     * and available for use.
     * 
     * @param transport Shared pointer to the ModeOfTransport currently in this state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport from quiet to moderate.
     * 
     * This method transitions the transport to the PrivateModerateState.
     * 
     * @param transport Shared pointer to the ModeOfTransport whose state is to be changed.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // ~PrivateQuietState() override = default;  // Destructor can be defaulted if needed
};

#endif
