#ifndef PRIVATEQUIETSTATE_H
#define PRIVATEQUIETSTATE_H
#include "PrivateTransportState.h"
#include <memory>
class PrivateQuietState : public PrivateTransportState {


public:
	PrivateQuietState();

    void handle(std::shared_ptr<ModeOfTransport> transport) override ;

    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

	// ~PrivateQuietState() override = default;
};

#endif
