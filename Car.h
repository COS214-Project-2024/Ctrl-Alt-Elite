#ifndef CAR_H
#define CAR_H
#include "PrivateTransport.h"
#include <memory>
class Car : public PrivateTransport {

private:
	float petrolPrice;
public:
	void travel() override;

	Car(int cap, float fuelCost, std::shared_ptr<TransportationState> state= nullptr );

	float getPetrolPrice() const;
    void setPetrolPrice(float price);

	// ~Car() override = default;
};

#endif
