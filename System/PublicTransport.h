#ifndef PUBLICTRANSPORT_H
#define PUBLICTRANSPORT_H

#include "ModeOfTransport.h"
#include <memory>

/**
 * @class PublicTransport
 * @brief Represents a public mode of transportation.
 *
 * This class inherits from the ModeOfTransport class and encapsulates
 * the details of public transport such as capacity, available routes,
 * and functionalities to travel and stop at stations.
 */
class PublicTransport : public ModeOfTransport {
private:
    int capacity; ///< Maximum number of passengers this transport can accommodate.
    int routesAvailable; ///< Number of routes available for this mode of transport.

public:
    /**
     * @brief Constructs a PublicTransport instance.
     * 
     * @param cap The maximum capacity of the transport.
     * @param routes The number of available routes for this transport.
     * @param state Optional shared pointer to the current transportation state.
     */
    PublicTransport(int cap, int routes, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Initiates the travel sequence for the transport.
     *
     * This method checks if the transport is available and, if so, proceeds to stop at a station.
     */
    void travel() override;

    /**
     * @brief Stops the transport at a designated station.
     *
     * This method simulates the action of stopping at a station with a message output.
     */
    void stopAtStation();

    /**
     * @brief Checks the availability of the transport.
     * 
     * @return True if the transport is available; otherwise, false.
     */
    bool isAvailable() override;

    /**
     * @brief Calculates the estimated commute time based on distance, speed, and mode of transport.
     * 
     * @param distance The distance to be traveled in kilometers.
     * @param speed The speed of the transport in kilometers per hour.
     * @param mode The mode of transport used to determine the speed if it's not provided.
     * @return The estimated commute time in hours as a float.
     */
    float calculateCommuteTime(float distance, float speed, const std::string& mode) override;

    /**
     * @brief Gets the current capacity of the transport.
     * 
     * @return The capacity of the transport.
     */
    int getCapacity() const;

    /**
     * @brief Sets the capacity of the transport.
     * 
     * @param cap The new capacity to be set.
     */
    void setCapacity(int cap);

    /**
     * @brief Gets the number of available routes for the transport.
     * 
     * @return The number of available routes.
     */
    int getRoutesAvailable() const;

    /**
     * @brief Sets the number of available routes for the transport.
     * 
     * @param routes The new number of available routes.
     */
    void setRoutesAvailable(int routes);
    
    // virtual ~PublicTransport() = default;
    // virtual ~PublicTransport();
};

#endif // PUBLICTRANSPORT_H
