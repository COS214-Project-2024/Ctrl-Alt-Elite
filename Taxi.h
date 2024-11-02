#ifndef TAXI_H
#define TAXI_H
#include "PublicTransport.h"
#include <memory>
class Taxi : public PublicTransport {

private:
	float farePerKM;
public:
	void travel() override;

	Taxi(int cap, int routes, float fare, std::shared_ptr<TransportationState> state);
// ~Taxi() override = default;
float getFarePerKM() const;
    void setFarePerKM(float newFare);
};

#endif
