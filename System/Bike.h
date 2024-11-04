#ifndef BIKE_H
#define BIKE_H
#include "PrivateTransport.h"
#include <memory>

/**
 * @class Bike
 * @brief Represents a bike in the transportation system.
 * 
 * The Bike class inherits from PrivateTransport, allowing it to represent a personal
 * transportation option in the simulation. It supports a state of availability and
 * can be used for travel when available.
 */
class Bike : public PrivateTransport {
public:
    /**
     * @brief Constructs a Bike with specified capacity and optional initial state.
     * @param cap Capacity or load limit of the bike.
     * @param state Optional initial state of the bike (e.g., available or in use).
     */
    Bike(int cap, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Simulates the bike being used for travel, displaying a bike ASCII graphic.
     */
    void travel() override;
};

#endif // BIKE_H
