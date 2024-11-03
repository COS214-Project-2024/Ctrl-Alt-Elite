#ifndef TRAIN_H
#define TRAIN_H
#include "PublicTransport.h"
#include <memory>
class Train : public PublicTransport {

public:
	float ticketPrice;

	void travel() override;

	Train(int cap, int routes, float price, std::shared_ptr<TransportationState> state);
// ~Train() override = default;
};

#endif
