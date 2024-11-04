#ifndef PLANE_H
#define PLANE_H

#include "PublicTransport.h"
#include <memory>

/**
 * @class Plane
 * @brief Represents a plane as a mode of public transport.
 * 
 * The Plane class extends the PublicTransport class, encapsulating 
 * the functionalities and properties associated with air travel, 
 * including ticket costs and the ability to travel.
 */
class Plane : public PublicTransport {
private:
    float ticketCost; ///< The cost of a ticket for the plane.

public:
    /**
     * @brief Default constructor for the Plane class.
     * 
     * Initializes a new instance of the Plane class with the specified 
     * capacity, routes, ticket cost, and an optional transportation state.
     * 
     * @param cap The capacity of the plane.
     * @param routes The number of routes the plane services.
     * @param cost The cost of a ticket for the plane.
     * @param state Optional shared pointer to a TransportationState.
     */
    Plane(int cap, int routes, float cost, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Travels using the plane.
     * 
     * Displays information about the plane's flight status and ticket cost, 
     * or informs if the plane is unavailable.
     */
    void travel() override;

    /**
     * @brief Gets the ticket cost for the plane.
     * 
     * @return The ticket cost.
     */
    float getTicketCost() const;

    /**
     * @brief Sets a new ticket cost for the plane.
     * 
     * @param newCost The new ticket cost to set.
     */
    void setTicketCost(float newCost);
};

#endif
