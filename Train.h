#ifndef TRAIN_H
#define TRAIN_H

#include "PublicTransport.h"
#include <memory>

/**
 * @class Train
 * @brief Represents a train, inheriting from the PublicTransport class.
 *
 * The Train class models a train for public transportation, including functionality for
 * travel, ticket pricing, and state management.
 */
class Train : public PublicTransport {
private:
    float ticketPrice; ///< The price of a ticket for the train.

public:
    /**
     * @brief Constructs a Train with specified capacity, routes, and ticket price.
     *
     * @param cap The capacity of the train.
     * @param routes The number of routes the train operates on.
     * @param price The ticket price for the train.
     * @param state A shared pointer to the transportation state (default is nullptr).
     */
    Train(int cap, int routes, float price, std::shared_ptr<TransportationState> state);

    /**
     * @brief Destroys the Train object.
     */
    // ~Train() override = default; // Uncomment if you want to define a custom destructor.

    /**
     * @brief Travels to the next station, displaying the travel status.
     *
     * This function checks if the train is available and, if so, prints the travel status 
     * and ticket price, followed by a visual representation of the train.
     */
    void travel() override;

    /**
     * @brief Gets the current ticket price for the train.
     * 
     * @return The ticket price.
     */
    float getTicketPrice() const;

    /**
     * @brief Sets a new ticket price for the train.
     * 
     * @param newPrice The new ticket price to set.
     */
    void setTicketPrice(float newPrice);
};

#endif
