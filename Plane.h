#ifndef PLANE_H
#define PLANE_H
#include "PublicTransport.h"
#include <memory>
class Plane : public PublicTransport {

private:
	float ticketCost;
public:
	void travel() override;

	Plane(int cap, int routes, float cost, std::shared_ptr<TransportationState> state= nullptr);

	// ~Plane() override = default;
	float getTicketCost() const;
    void setTicketCost(float newCost);
};

#endif
