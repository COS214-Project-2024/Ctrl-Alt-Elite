#ifndef PRIVATEMODERATESTATE_H
#define PRIVATEMODERATESTATE_H
#include "PrivateTransportState.h"
#include <memory>
class PrivateModerateState : public PrivateTransportState {


public:
	PrivateModerateState() ;

    void handle(std::shared_ptr<ModeOfTransport> transport) override ;

    void changeState(std::shared_ptr<ModeOfTransport> transport) override ;

	// ~PrivateModerateState() override = default;
    
};

#endif
