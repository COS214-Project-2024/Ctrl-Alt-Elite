#ifndef TAXI_H
#define TAXI_H
#include "PublicTransport.h"
#include <memory>
class Taxi : public PublicTransport {

public:
	float farePerKM;

	void travel() override;

	Taxi(int cap, int routes, float fare, std::shared_ptr<TransportationState> state);
// ~Taxi() override = default;
};

#endif
