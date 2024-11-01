#ifndef PRIVATETRANSPORTSTATE_H
#define PRIVATETRANSPORTSTATE_H
#include "TransportationState.h"
#include <string>
#include <memory>
class PrivateTransportState : public TransportationState {

public:
	
	std::string state;
	PrivateTransportState(const std::string& initialState);

	
    virtual void handle(std::shared_ptr<ModeOfTransport>transport) override ;
    virtual void changeState(std::shared_ptr<ModeOfTransport> transport) override ;

    virtual bool isAvailable() const override;

	//  virtual ~PrivateTransportState() = default;
	// virtual ~PrivateTransportState();
};

#endif
