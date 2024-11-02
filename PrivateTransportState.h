#ifndef PRIVATETRANSPORTSTATE_H
#define PRIVATETRANSPORTSTATE_H
#include "TransportationState.h"
#include <string>
#include <memory>
class PrivateTransportState : public TransportationState {


	private:
	std::string state;
	public:
	PrivateTransportState(const std::string& initialState);

	
    virtual void handle(std::shared_ptr<ModeOfTransport>transport) override ;
    virtual void changeState(std::shared_ptr<ModeOfTransport> transport) override ;

    virtual bool isAvailable() const override;

	//  virtual ~PrivateTransportState() = default;
	// virtual ~PrivateTransportState();
	    std::string getState() const;
    void setState(const std::string& newState);
};

#endif
