#ifndef TAXI_H
#define TAXI_H

#include "PublicTransport.h"
#include <memory>

/**
 * @class Taxi
 * @brief Represents a taxi service in the public transport system.
 * 
 * The Taxi class extends the PublicTransport class to provide functionality 
 * specific to taxi services, including fare management and travel logic.
 */
class Taxi : public PublicTransport {
private:
    float farePerKM; ///< The fare charged per kilometer traveled by the taxi.

public:
    /**
     * @brief Constructs a Taxi instance.
     * 
     * @param cap The passenger capacity of the taxi.
     * @param routes The number of routes the taxi can operate on.
     * @param fare The fare per kilometer.
     * @param state Shared pointer to the transportation state (default is nullptr).
     */
    Taxi(int cap, int routes, float fare, std::shared_ptr<TransportationState> state);

    /**
     * @brief Executes the travel action of the taxi.
     * 
     * This method displays the current fare and taxi image while checking 
     * if the taxi is available for travel.
     */
    void travel() override;

    /**
     * @brief Retrieves the fare per kilometer.
     * 
     * @return The fare per kilometer as a float.
     */
    float getFarePerKM() const;

    /**
     * @brief Sets a new fare per kilometer.
     * 
     * @param newFare The new fare to be set.
     */
    void setFarePerKM(float newFare);
};

#endif // TAXI_H
