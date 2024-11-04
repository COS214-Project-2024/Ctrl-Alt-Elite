#ifndef WALK_H
#define WALK_H

#include "PrivateTransport.h"
#include <memory>

/**
 * @class Walk
 * @brief Represents a walking mode of private transportation.
 *
 * This class inherits from the PrivateTransport class and implements
 * the travel method specific to walking. It handles the behavior
 * when a user chooses to walk to a destination.
 */
class Walk : public PrivateTransport {
public:
    /**
     * @brief Initiates the walking journey to the destination.
     *
     * This method checks the availability of the walking path and 
     * outputs the appropriate message indicating whether the user
     * can walk to the destination.
     */
    void travel() override;

    /**
     * @brief Constructs a Walk object.
     *
     * @param state A shared pointer to the TransportationState that 
     *              represents the current state of transportation.
     */
    Walk(std::shared_ptr<TransportationState> state);

    // ~Walk() override = default; // Uncomment if a custom destructor is needed
};

#endif
