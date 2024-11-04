#ifndef PUBLICTRANSPORTSTATE_H
#define PUBLICTRANSPORTSTATE_H

#include "TransportationState.h"
#include <string>
#include <memory>

/**
 * @class PublicTransportState
 * @brief Represents the state of a public mode of transport.
 *
 * This class inherits from the TransportationState class and manages the
 * state of public transport, including handling state transitions and
 * availability checks.
 */
class PublicTransportState : public TransportationState {
private:
    std::string state; ///< The current state of the public transport (e.g., Busy, Quiet, Moderate).

public:
    /**
     * @brief Constructs a PublicTransportState instance with an initial state.
     * 
     * @param initialState The initial state of the public transport.
     */
    PublicTransportState(const std::string& initialState);

    /**
     * @brief Handles the current state of the given transport.
     * 
     * This method performs actions based on the current state of the transport.
     * 
     * @param transport A shared pointer to the ModeOfTransport being handled.
     */
    virtual void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the transport based on its current state.
     * 
     * This method transitions the transport state among Busy, Quiet, and Moderate states.
     * 
     * @param transport A shared pointer to the ModeOfTransport whose state is to be changed.
     */
    virtual void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Checks if the transport is currently available.
     * 
     * @return True if the transport is available (not Busy); otherwise, false.
     */
    bool isAvailable() const override;

    /**
     * @brief Gets the current state of the transport.
     * 
     * @return The current state as a string.
     */
    std::string getState() const;

    /**
     * @brief Sets the state of the transport to a new value.
     * 
     * @param newState The new state to be set.
     */
    void setState(const std::string& newState);
    
    // virtual ~PublicTransportState() = default;
    // virtual ~PublicTransportState();
};

#endif // PUBLICTRANSPORTSTATE_H
