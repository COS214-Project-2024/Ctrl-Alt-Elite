#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H

#include "TransportStrategy.h"
#include "TransportationState.h"
#include <memory>
class TransportationState;
class ModeOfTransport : public TransportStrategy, public std::enable_shared_from_this<ModeOfTransport> {

protected:
	std::shared_ptr<TransportationState> currentState;

	

public:
	// ModeOfTransport();

	ModeOfTransport(std::shared_ptr<TransportationState> state = nullptr);

std::shared_ptr<TransportationState> getState() const;
	void setState(std::shared_ptr<TransportationState> state) override;

	void handleTransport();
	virtual void travel() = 0;
	// virtual ~ModeOfTransport();
};

#endif
