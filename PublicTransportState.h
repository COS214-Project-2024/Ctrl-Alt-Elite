#ifndef PUBLICTRANSPORTSTATE_H
#define PUBLICTRANSPORTSTATE_H
#include "TransportationState.h"
#include <string>
#include <memory>
class PublicTransportState : public TransportationState {

public:
std::string state;
	PublicTransportState(const std::string& initialState);
	

	virtual void handle(std::shared_ptr<ModeOfTransport> transport) override;

	virtual void changeState(std::shared_ptr<ModeOfTransport> transport) override ;
	bool isAvailable() const override;

	// virtual ~PublicTransportState() = default;
	// virtual ~PublicTransportState();
};

#endif
