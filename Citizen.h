#ifndef CITIZEN_H
#define CITIZEN_H
#include <iostream>
#include <string>
#include "TransportStrategy.h"
#include "PublicServicesDepartment.h"
#include "TransportationState.h"
#include <memory>

class Citizen {

private:
	std::shared_ptr<TransportStrategy> preferredModes[3];
	std::shared_ptr<TransportationState> currentState;
	PublicServicesDepartment *services;
	std::string name;
	float satisfaction;
	float commuteTime;

	// TransportStrategy* preferredModes;
	// std::string name;
	// float commuteTime;
	std::string employmentStatus;
	std::string currentEducation;
	std::string healthcareAccess;
	// float satisfaction;
	float taxRate;
	std::string currentPolicy;
	std::string issueType;
	// PublicServicesDepartment* handler;
	int requestType;

public:

	Citizen(const std::string& citizenName, std::shared_ptr<TransportationState> state, PublicServicesDepartment* services);

	void setTransportStrategy(std::shared_ptr<TransportStrategy> strategy, int index);

	bool canTravel();

	void travel();

	void displayInfo();

	void updateSatisfaction(float value);

	void setState(std::shared_ptr<TransportationState> state);

	std::shared_ptr<TransportationState> getState();



	void update();

	void respondToGovernmentChanges();

	void raiseIssue();

	void payIncomeTax(float amount);

	void adjustSatisfaction(float taxImpact);

	void makeRequest();

	int getRequestType();
};

#endif
