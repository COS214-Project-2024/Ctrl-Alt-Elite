#include "Citizen.h"
#include <memory>
#include <iostream>
#include <random>

Citizen::Citizen(const std::string &citizenName, std::shared_ptr<TransportationState> state, std::shared_ptr<PublicServicesDepartment> services) :  name(citizenName), satisfaction(100.0f), commuteTime(0.0f), currentState(state)
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
	float distance;
	std::string mode;
    std::cout << "Enter the distance to travel (in kilometers): ";
    std::cin >> distance;
	
	std::cout << "Enter mode of transport (e.g., \"walk\", \"bike\", \"car\", \"plane\", \"bus\", \"taxi\", \"train\"): ";
    std::cin >> mode;

	for (int i = 0; i < 3; ++i) {
		if (preferredModes[i] && preferredModes[i]->isAvailable()) {
			preferredModes[i]->travel();
			commuteTime = preferredModes[i]->calculateCommuteTime(distance, -1, mode);
			satisfaction -= commuteTime / 10.0f;  // Reduce satisfaction based on commute time
			std::cout << "Citizen " << name << " traveled with satisfaction level: " << satisfaction << "\n";
			return;
		}
	}
	std::cout << "No available transport mode for " << name << " to travel.\n";

	// for (int i = 0; i < 3; ++i) {
    //     if (preferredModes[i] && preferredModes[i]->isAvailable()) {
    //         std::cout << "Attempting travel with preferred mode " << i << "...\n";
    //         preferredModes[i]->travel();  // Travel with the available mode
    //         commuteTime = preferredModes[i]->calculateCommuteTime();
    //         satisfaction -= commuteTime / 10.0f;  // Update satisfaction based on commute time
    //         std::cout << "Citizen " << name << " traveled with satisfaction level: " << satisfaction << "\n";
    //         return;  // Exit once travel is completed successfully
    //     } else if (preferredModes[i]) {
    //         std::cout << "Preferred mode " << i << " is not available, trying next mode.\n";
    //     }
    // }
    // // If no mode is available, output message
    // std::cout << "No available transport mode for " << name << " to travel.\n";
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
	 if (services) {
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<int> distribution(1, 10);
        float serviceImpact = 0.0;
        const auto& availableServices = services->getAvailableServices();
        for (const auto& service : availableServices) {
            if (service == "HealthCare") {
                serviceImpact += distribution(generator);
            } else if (service == "Education") {
                serviceImpact += distribution(generator);
            } else {
                serviceImpact += distribution(generator);
            }
        }
        float taxImpact = services->getTaxrate() + 0.04f;
        if (currentPolicy == "Environmental Protection") {
            serviceImpact += distribution(generator);
        } else if (currentPolicy == "Smack bad people") {
            serviceImpact -= distribution(generator);
        }
		else if(currentPolicy == "Be kind to one another"){
			serviceImpact += distribution(generator);
		}
        satisfaction += serviceImpact - taxImpact;
        //std::cout << name << "'s satisfaction updated to: " << satisfaction << "\n";
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
