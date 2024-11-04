#ifndef PRIVATETRANSPORTSTATE_H
#define PRIVATETRANSPORTSTATE_H

#include "TransportationState.h"
#include <string>
#include <memory>

/**
 * @class PrivateTransportState
 * @brief Represents the state of private transport, managing state behavior and availability.
 * 
 * The PrivateTransportState class is a base class for managing different states
 * of private transport, providing mechanisms to handle state transitions and availability checks.
 */
class PrivateTransportState : public TransportationState {
private:
    std::string state; ///< Current state of the private transport.

public:
    /**
     * @brief Constructs a PrivateTransportState instance.
     * 
     * @param initialState The initial state of the private transport.
     */
    PrivateTransportState(const std::string& initialState);

    /**
     * @brief Handles the current state of the private transport.
     * 
     * @param transport Shared pointer to the mode of transport being handled.
     */
    virtual void handle(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Changes the state of the private transport.
     * 
     * @param transport Shared pointer to the mode of transport whose state is being changed.
     */
    virtual void changeState(std::shared_ptr<ModeOfTransport> transport) override;

    /**
     * @brief Checks if the private transport is available.
     * 
     * @return true if the transport is available, false otherwise.
     */
    virtual bool isAvailable() const override;

    /**
     * @brief Gets the current state of the private transport.
     * 
     * @return The current state as a string.
     */
    std::string getState() const;

    /**
     * @brief Sets a new state for the private transport.
     * 
     * @param newState The new state to set.
     */
    void setState(const std::string& newState);

    // virtual ~PrivateTransportState() = default; // Uncomment if a virtual destructor is needed
};

#endif
