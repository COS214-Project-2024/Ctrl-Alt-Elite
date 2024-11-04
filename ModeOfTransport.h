#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H

#include "TransportStrategy.h"
#include "TransportationState.h"
#include <memory>

/**
 * @class ModeOfTransport
 * @brief Abstract class representing a mode of transport.
 * 
 * This class extends the TransportStrategy interface and manages the current state
 * of transportation. It utilizes the State design pattern to handle various 
 * transportation modes.
 */
class ModeOfTransport : public TransportStrategy, public std::enable_shared_from_this<ModeOfTransport> {
protected:
    std::shared_ptr<TransportationState> currentState; ///< The current state of the transportation.

public:
    /**
     * @brief Constructor for the ModeOfTransport class.
     * 
     * Initializes the mode of transport with a given transportation state.
     * 
     * @param state A shared pointer to the initial transportation state (default is nullptr).
     */
    ModeOfTransport(std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Gets the current transportation state.
     * 
     * @return A shared pointer to the current transportation state.
     */
    std::shared_ptr<TransportationState> getState() const;

    /**
     * @brief Sets the current transportation state.
     * 
     * @param state A shared pointer to the new transportation state.
     */
    void setState(std::shared_ptr<TransportationState> state) override;

    /**
     * @brief Handles the transport process based on the current state.
     * 
     * Invokes the handle method of the current state to execute the transportation logic.
     */
    void handleTransport();

    /**
     * @brief Pure virtual function for traveling.
     * 
     * Derived classes must implement this method to define the specific travel behavior.
     */
    virtual void travel() = 0;

    // Uncomment if a destructor is needed
    // virtual ~ModeOfTransport();
};

#endif
