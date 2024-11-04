#ifndef PRIVATETRANSPORT_H
#define PRIVATETRANSPORT_H

#include "ModeOfTransport.h"
#include <memory>

/**
 * @class PrivateTransport
 * @brief Represents a private mode of transport with associated functionalities.
 * 
 * The PrivateTransport class extends the ModeOfTransport class, providing
 * implementations for travel, availability checks, and commute time calculations.
 */
class PrivateTransport : public ModeOfTransport {
private:
    // float capacity; // Uncomment if capacity is used
    float maintenanceCost; ///< The maintenance cost of the private transport.

public:
    /**
     * @brief Constructs a PrivateTransport instance.
     * 
     * @param cost The maintenance cost of the transport.
     * @param state Shared pointer to the initial state of the transport (default is nullptr).
     */
    PrivateTransport(float cost, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Simulates traveling with the private transport.
     * 
     * Displays whether the private transport is traveling or unavailable.
     */
    void travel() override;

    /**
     * @brief Checks if the private transport is available for use.
     * 
     * @return true if the transport is available, false otherwise.
     */
    bool isAvailable() override;

    /**
     * @brief Calculates the estimated commute time based on distance, speed, and mode of transport.
     * 
     * @param distance The distance to travel.
     * @param speed The speed of travel (0 or less will use default speeds based on mode).
     * @param mode The mode of transport (e.g., "walk", "bike", "car", "train", "plane").
     * @return Estimated time in hours for the commute.
     */
    float calculateCommuteTime(float distance, float speed, const std::string& mode) override;

    /**
     * @brief Gets the maintenance cost of the private transport.
     * 
     * @return The maintenance cost.
     */
    float getMaintenanceCost() const;

    /**
     * @brief Sets the maintenance cost of the private transport.
     * 
     * @param cost The new maintenance cost to set.
     */
    void setMaintenanceCost(float cost);

    // virtual ~PrivateTransport() = default; // Uncomment if a virtual destructor is needed
};

#endif
