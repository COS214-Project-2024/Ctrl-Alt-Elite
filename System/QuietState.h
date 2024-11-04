#ifndef QUIETSTATE_H
#define QUIETSTATE_H

#include "PublicTransportState.h"
#include <memory>

/**
 * @class QuietState
 * @brief Represents a state where public transport operates quietly.
 * 
 * The QuietState class is a concrete implementation of the PublicTransportState,
 * indicating that the mode of transport is operating in a quiet manner. It 
 * provides functionality to handle the quiet state behavior and transition to 
 * other states.
 */
class QuietState : public PublicTransportState {
public:
    /**
     * @brief Default constructor for the QuietState class.
     * 
     * Initializes a QuietState instance, setting the state name to "Quiet".
     */
    QuietState();

    /**
     * @brief Handles the behavior of public transport in the Quiet state.
     * 
     * This method defines what happens when the transport is in the Quiet state,
     * such as performing necessary actions and displaying status messages.
     * 
     * @param transport A shared pointer to the ModeOfTransport that is in the Quiet state.
     */
    void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport from Quiet to another state.
     * 
     * This method is responsible for transitioning the transport to a new state.
     * In this implementation, it transitions to the ModerateState.
     * 
     * @param transport A shared pointer to the ModeOfTransport whose state will be changed.
     */
    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    // ~QuietState() override = default; // Destructor (uncomment if needed)
};

#endif // QUIETSTATE_H
