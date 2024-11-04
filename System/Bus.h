#ifndef BUS_H
#define BUS_H

#include "PublicTransport.h"
#include <memory>

/**
 * @brief Represents a bus for public transport.
 * 
 * The Bus class inherits from PublicTransport and encapsulates the attributes and behaviors of a bus,
 * including its fare and travel methods.
 */
class Bus : public PublicTransport {
private:
    float fare; ///< The fare for traveling on the bus.

public:
    /**
     * @brief Travels with the bus if it is available.
     * 
     * This method outputs a message indicating that the bus is traveling, along with its fare,
     * and calls the stopAtStation method.
     */
    void travel() override;

    /**
     * @brief Constructs a Bus object.
     * 
     * @param cap The capacity of the bus.
     * @param routes The number of routes the bus serves.
     * @param busFare The fare for traveling on the bus.
     * @param state A shared pointer to the TransportationState (default is nullptr).
     */
    Bus(int cap, int routes, float busFare, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Gets the fare for traveling on the bus.
     * 
     * @return The current fare of the bus.
     */
    float getFare() const;

    /**
     * @brief Sets a new fare for traveling on the bus.
     * 
     * @param newFare The new fare to be set.
     */
    void setFare(float newFare);
};

#endif
