#ifndef CAR_H
#define CAR_H
#include "PrivateTransport.h"
#include <memory>
class Car : public PrivateTransport {

public:
	float petrolPrice;

	void travel() override;

	Car(int cap, float fuelCost, std::shared_ptr<TransportationState> state= nullptr );

	// ~Car() override = default;
};

#endif
