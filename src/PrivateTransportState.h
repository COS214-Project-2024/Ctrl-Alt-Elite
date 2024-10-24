#ifndef PRIVATETRANSPORTSTATE_H
#define PRIVATETRANSPORTSTATE_H

class PrivateTransportState : TransportationState {

public:
	string state;

	void handle();

	void changeState();
};

#endif
