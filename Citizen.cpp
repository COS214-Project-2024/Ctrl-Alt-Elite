#include "Citizen.h"
#include <memory>
#include <iostream>

Citizen::Citizen(const std::string &citizenName, std::shared_ptr<TransportationState> state ) :  name(citizenName), satisfaction(100.0f), commuteTime(0.0f), currentState(state)
{
	for (int i = 0; i < 3; ++i) preferredModes[i] = nullptr;
}

void Citizen::setTransportStrategy(std::shared_ptr<TransportStrategy>strategy, int index)
{
	if (index >= 0 && index < 3) {
        preferredModes[index] = strategy;
    }
}

bool Citizen::canTravel()
{
    for (int i = 0; i < 3; ++i) {
		if (preferredModes[i] && preferredModes[i]->isAvailable()) {
			return true;
		}
	}
	return false;
}

void Citizen::travel() {
	for (int i = 0; i < 3; ++i) {
		if (preferredModes[i] && preferredModes[i]->isAvailable()) {
			preferredModes[i]->travel();
			commuteTime = preferredModes[i]->calculateCommuteTime();
			satisfaction -= commuteTime / 10.0f;  // Reduce satisfaction based on commute time
			std::cout << "Citizen " << name << " traveled with satisfaction level: " << satisfaction << "\n";
			return;
		}
	}
	std::cout << "No available transport mode for " << name << " to travel.\n";
}

void Citizen::displayInfo()
{
	std::cout << "Citizen Name: " << name << "\n";
	std::cout << "Satisfaction Level: " << satisfaction << "\n";
	std::cout << "Last Commute Time: " << commuteTime << "\n";
}

void Citizen::updateSatisfaction(float value)
{
	satisfaction += value;
	std::cout << "Updated satisfaction for " << name << ": " << satisfaction << "\n";
}

void Citizen::setState(std::shared_ptr<TransportationState> state)
{
	currentState = state;
	std::cout << "Citizen " << name << " transportation state updated.\n";
}

std::shared_ptr<TransportationState> Citizen::getState()
{
    return currentState;
}











void Citizen::update() {
	/*if (currentState) {
        currentState->handle(currentTransport);  // Apply handle to transport

        // Interpret transport condition for satisfaction adjustment
        std::string condition = currentTransport->getCondition();
        if (condition == "Busy") {
            updateSatisfaction(-10);  // Busy reduces satisfaction
        } else if (condition == "Quiet") {
            updateSatisfaction(5);    // Quiet increases satisfaction
        } else if (condition == "Moderate") {
            updateSatisfaction(0);    // Neutral satisfaction change
        }
        std::cout << "Citizen " << name << " satisfaction updated to: " << satisfaction << "\n";
    }*/
}

void Citizen::respondToGovernmentChanges() {
	// TODO - implement Citizen::respondToGovernmentChanges
	throw "Not yet implemented";
}

void Citizen::raiseIssue() {
	// TODO - implement Citizen::raiseIssue
	throw "Not yet implemented";
}

void Citizen::payIncomeTax(float amount) {
	// TODO - implement Citizen::payIncomeTax
	throw "Not yet implemented";
}

void Citizen::adjustSatisfaction(float taxImpact) {
	// TODO - implement Citizen::adjustSatisfaction
	throw "Not yet implemented";
}

void Citizen::makeRequest() {
	// TODO - implement Citizen::makeRequest
	throw "Not yet implemented";
}

int Citizen::getRequestType() {
	return this->requestType;
}
