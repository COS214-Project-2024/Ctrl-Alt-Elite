#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

class TransportStrategy {


public:
	virtual void travel() = 0;

private:
	TransportStrategy();

public:
	virtual float calculateCommuteTime() = 0;

	virtual bool isAvailable() = 0;
};

#endif
