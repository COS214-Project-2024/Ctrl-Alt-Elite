#ifndef BIKE_H
#define BIKE_H
#include "PrivateTransport.h"
#include <memory>

class Bike : public PrivateTransport {


public:
	void travel() override;

	Bike(int cap, std::shared_ptr<TransportationState> state = nullptr);

	// ~Bike() override = default;
};

#endif
