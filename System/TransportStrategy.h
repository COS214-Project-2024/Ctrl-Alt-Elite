#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <memory>

/**
 * @class TransportStrategy
 * @brief Abstract base class for defining transport strategies.
 *
 * This class provides an interface for implementing various transport strategies,
 * allowing different modes of transport to define their behavior for traveling
 * and calculating commute times.
 */
class TransportationState; // Forward declaration

class TransportStrategy {
public:
    /**
     * @brief Initiates the travel process for the transport strategy.
     *
     * This method must be implemented by derived classes to define
     * how the transport travels.
     */
    virtual void travel() = 0;

    /**
     * @brief Calculates the estimated commute time based on distance and speed.
     *
     * @param distance The distance to travel in kilometers.
     * @param speed The average speed of travel in kilometers per hour.
     * @param mode A string representing the mode of transport (e.g., "car", "bus").
     * @return The estimated commute time in hours.
     */
    virtual float calculateCommuteTime(float distance, float speed, const std::string& mode) = 0;

    /**
     * @brief Checks if the transport strategy is available for use.
     *
     * @return True if the transport strategy is available, false otherwise.
     */
    virtual bool isAvailable() = 0;

    /**
     * @brief Sets the current state of the transportation strategy.
     *
     * @param state A shared pointer to the transportation state to be set.
     */
    virtual void setState(std::shared_ptr<TransportationState> state) = 0;
};

#endif
