#ifndef PUBLICTRANSPORT_H
#define PUBLICTRANSPORT_H

class PublicTransport : ModeOfTransport {

private:
	int capacity;
	int routesAvailable;

public:
	void travel();

	void stopAtStation();
};

#endif
