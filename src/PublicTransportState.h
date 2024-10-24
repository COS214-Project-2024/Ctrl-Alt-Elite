#ifndef PUBLICTRANSPORTSTATE_H
#define PUBLICTRANSPORTSTATE_H

class PublicTransportState : TransportationState {

public:
	string state;

	void handle();

	void changeState();
};

#endif
