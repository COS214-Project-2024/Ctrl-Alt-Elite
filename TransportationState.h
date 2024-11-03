#ifndef TRANSPORTATIONSTATE_H
#define TRANSPORTATIONSTATE_H
#include "ModeOfTransport.h"
#include <memory>
class ModeOfTransport;

class TransportationState {


public:
	virtual void handle(std::shared_ptr<ModeOfTransport> transport) = 0;

// private:
// 	TransportationState();

public:
	virtual void changeState(std::shared_ptr<ModeOfTransport> transport) = 0;
	virtual bool isAvailable() const = 0;
	// virtual ~TransportationState() = default;
};

#endif
