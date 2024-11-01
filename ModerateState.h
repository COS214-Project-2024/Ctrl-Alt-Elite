#ifndef MODERATESTATE_H
#define MODERATESTATE_H
#include "PublicTransportState.h"
#include <memory>

class ModerateState : public PublicTransportState {


public:
	ModerateState();

    void handle(std::shared_ptr<ModeOfTransport> transport) override; 
    

    void changeState(std::shared_ptr<ModeOfTransport> transport) override;

	// ~ModerateState() override = default;
        
};

#endif
