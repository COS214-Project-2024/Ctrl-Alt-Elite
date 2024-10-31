#include "Citizen.h"
#include <memory>
#include <iostream>

Citizen::Citizen(const std::string &citizenName, std::shared_ptr<TransportationState> state, PublicServicesDepartment* services) :  name(citizenName), satisfaction(100.0f), commuteTime(0.0f), currentState(state)
{
	for (int i = 0; i < 3; ++i) preferredModes[i] = nullptr;
	this->services = services;
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
    //check for changes in services, tax rates, and policies
    if (services) {
        //adjust satisfaction based on available services
        float serviceImpact = 0.0;
		const auto& availableServices = services->getAvailableServices();
		for (size_t i = 0; i < availableServices.size(); ++i) {
			const auto& service = availableServices[i];
			if (service == "Healthcare") {
				serviceImpact += 10.0;  //example increase for essential services
			} else if (service == "Education") {
				serviceImpact += 5.0;
			} else {
				serviceImpact += 2.0;  //lesser impact for other services
			}
		}


        //adjust satisfaction based on tax rate
        float taxImpact = services->getTaxrate() * 2.0;  //decrease satisfaction by tax rate factor

        //adjust satisfaction based on policies
        if (currentPolicy == "Economic Reform") {
            serviceImpact += 3.0;
        } else if (currentPolicy == "Environmental Policy") {
            serviceImpact -= 1.0;
        }

        //update citizen satisfaction and display updated information
        satisfaction += serviceImpact - taxImpact;
        std::cout << "Citizen " << name << "'s satisfaction updated to: " << satisfaction << "\n";
    }
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
