#include "ModeOfTransport.h"



ModeOfTransport::ModeOfTransport(std::shared_ptr<TransportationState> state ) : currentState(state) {}

void ModeOfTransport::setState(std::shared_ptr<TransportationState> state) {
	// if (currentState) delete currentState;
    currentState = state;
}

void ModeOfTransport::handleTransport() {
	if (currentState) {
            currentState->handle(shared_from_this());
            currentState->changeState(shared_from_this());  // Transition to the next state
        }
	
}

// ModeOfTransport::~ModeOfTransport()
// {
// 	delete currentState;
// }
