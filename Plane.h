#ifndef PLANE_H
#define PLANE_H
#include "PublicTransport.h"
#include <memory>
class Plane : public PublicTransport {

public:
	float ticketCost;

	void travel() override;

	Plane(int cap, int routes, float cost, std::shared_ptr<TransportationState> state= nullptr);

	// ~Plane() override = default;
};

#endif
