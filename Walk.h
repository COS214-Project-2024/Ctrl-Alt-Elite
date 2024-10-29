#ifndef WALK_H
#define WALK_H
#include "PrivateTransport.h"
#include <memory>
class Walk : public PrivateTransport {


public:
	void travel() override;

	Walk(std::shared_ptr<TransportationState> state);

	// ~Walk() override = default;
};

#endif
