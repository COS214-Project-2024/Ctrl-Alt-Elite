#ifndef CAR_H
#define CAR_H

#include "PrivateTransport.h"
#include <memory>

/**
 * @class Car
 * @brief Represents a private transport vehicle (car) that uses petrol for travel.
 * 
 * The Car class extends PrivateTransport and provides a specific implementation
 * for the travel method and petrol-related functionality.
 */
class Car : public PrivateTransport {
private:
    float petrolPrice; /**< Price per unit of petrol used by the car */

public:
    /**
     * @brief Constructs a Car with the specified capacity, fuel cost, and state.
     * @param cap The seating capacity of the car.
     * @param fuelCost The cost of petrol per unit.
     * @param state Initial state of the car (optional).
     */
    Car(int cap, float fuelCost, std::shared_ptr<TransportationState> state = nullptr);

    /**
     * @brief Simulates car travel.
     * 
     * Displays travel status and availability message.
     */
    void travel() override;

    /**
     * @brief Gets the current petrol price.
     * @return The price per unit of petrol.
     */
    float getPetrolPrice() const;

    /**
     * @brief Sets a new petrol price.
     * @param price The new price per unit of petrol.
     */
    void setPetrolPrice(float price);
};

#endif // CAR_H
