#ifndef TRANSPORTATIONSTATE_H
#define TRANSPORTATIONSTATE_H

class TransportationState {


public:
	virtual void handle(ModeOfTransPort transport) = 0;

private:
	TransportationState();

public:
	virtual void changeState() = 0;
};

#endif
