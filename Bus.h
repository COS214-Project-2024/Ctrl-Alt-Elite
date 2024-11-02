#ifndef BUS_H
#define BUS_H
#include "PublicTransport.h"
#include <memory>
class Bus : public PublicTransport {

private:
	float fare;
public:
	void travel() override;

	Bus(int cap, int routes, float busFare, std::shared_ptr<TransportationState> state= nullptr);
	// ~Bus() override = default;

	float getFare() const;
    void setFare(float newFare);
};

#endif
