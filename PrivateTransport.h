#ifndef PRIVATETRANSPORT_H
#define PRIVATETRANSPORT_H
#include "ModeOfTransport.h"
#include <memory>
class PrivateTransport : public ModeOfTransport {

public:
	// int capacity;
	float maintenanceCost;

	void travel() override;
	bool isAvailable() override;
	float calculateCommuteTime(float distance, float speed, const std::string& mode) override;
	PrivateTransport(float cost, std::shared_ptr<TransportationState> state = nullptr);

	// virtual ~PrivateTransport() = default;
// virtual ~PrivateTransport();
};

#endif
