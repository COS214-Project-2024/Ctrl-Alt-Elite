#ifndef CITIZEN_H
#define CITIZEN_H

class Citizen {

private:
	TransportStrategy* preferredModes;
	string name;
	float commuteTime;
	string employmentStatus;
	string currentEducation;
	string healthcareAccess;
	float satisfaction;
	float taxRate;
	string currentPolicy;
	strng issueType;
	PublicServiceDepartment* handler;
	int requestType;

public:
	void setTransportStrategy(TransportStrategy* strategy);

	bool canTravel();

	void travel();

	void update();

	void respondToGovernmentChanges();

	void raiseIssue();

	void payIncomeTax(float amount);

	void adjustSatisfaction(float taxImpact);

	void makeRequest();

	int getRequestType();
};

#endif
