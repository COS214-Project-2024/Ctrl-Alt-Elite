#ifndef TRANSPORTATIONSTATE_H
#define TRANSPORTATIONSTATE_H

#include "ModeOfTransport.h"
#include <memory>

/**
 * @class TransportationState
 * @brief Abstract base class representing the state of a mode of transport.
 *
 * This class provides an interface for managing the state of different modes
 * of transportation, allowing for state transitions and availability checks.
 */
class TransportationState {
public:
    /**
     * @brief Handles the mode of transport in the current state.
     *
     * @param transport A shared pointer to the mode of transport that is being handled.
     */
    virtual void handle(std::shared_ptr<ModeOfTransport> transport) = 0;

    /**
     * @brief Changes the state of the given mode of transport.
     *
     * @param transport A shared pointer to the mode of transport whose state is to be changed.
     */
    virtual void changeState(std::shared_ptr<ModeOfTransport> transport) = 0;

    /**
     * @brief Checks if the mode of transport is available in the current state.
     *
     * @return True if the transport is available, false otherwise.
     */
    virtual bool isAvailable() const = 0;

    /**
     * @brief Gets a string representation of the current state.
     *
     * @return A string describing the current state.
     */
    virtual std::string getState() const = 0;

    // virtual ~TransportationState() = default; // Uncomment if you want to define a custom destructor.
};

#endif
