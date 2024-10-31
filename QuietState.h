#ifndef QUIETSTATE_H
#define QUIETSTATE_H
#include "PublicTransportState.h"
#include <memory>
class QuietState : public PublicTransportState {


public:
	QuietState();
	void handle(std::shared_ptr<ModeOfTransport> transport) override;
	void changeState(std::shared_ptr<ModeOfTransport> transport) override;

	// ~QuietState() override = default;
};

#endif
