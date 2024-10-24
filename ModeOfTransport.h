#ifndef MODEOFTRANSPORT_H
#define MODEOFTRANSPORT_H

class ModeOfTransport : TransportStrategy {

public:
	TransportationState* currentState;

	virtual void travel() = 0;

public:
	ModeOfTransport();

	ModeOfTransport(TransportationState* state);

	void setState(TransportationSate state);

	void handleTransport();
};

#endif
