#ifndef TRANSPORTSTRATEGY_H
#define TRANSPORTSTRATEGY_H

#include <memory>
class TransportationState;
class TransportStrategy {


public:
	virtual void travel() = 0;

	// TransportStrategy() = default;	
	// virtual ~TransportStrategy() = default;
	virtual float calculateCommuteTime() = 0;
	virtual bool isAvailable() = 0;


	 virtual void setState(std::shared_ptr<TransportationState> state) = 0;
};

#endif
