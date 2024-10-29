#ifndef BUSYSTATE_H
#define BUSYSTATE_H
#include "PublicTransportState.h"
#include <memory>
class BusyState : public PublicTransportState {


public:
	BusyState();

	void handle(std::shared_ptr<ModeOfTransport> transport) override;
	void changeState(std::shared_ptr<ModeOfTransport> transport) override;

	// ~BusyState() override = default;
};

#endif
