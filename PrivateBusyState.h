#ifndef PRIVATEBUSYSTATE_H
#define PRIVATEBUSYSTATE_H
#include "PrivateTransportState.h"
#include <memory>
class PrivateBusyState : public PrivateTransportState {


public:
	PrivateBusyState() ;

    void handle(std::shared_ptr<ModeOfTransport> transport) override ;

    void changeState(std::shared_ptr<ModeOfTransport> transport) override ;

	// ~PrivateBusyState() override = default;
};

#endif
