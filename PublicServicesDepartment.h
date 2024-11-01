#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H

#include <vector>
#include <string>
#include <algorithm> 
#include <iostream>
#include "Government.h"
class City;
class Citizen;
class PublicServicesDepartment : public Government
{

protected:
	PublicServicesDepartment* handler;

public:
	PublicServicesDepartment(City* city);

	void manageCity();

	void updatePublicServices(std::vector<std::string> services);

	PublicServicesDepartment();

	void setNextHandler(PublicServicesDepartment* handler);

	virtual void handleRequest(int requestType);

	float getTaxrate();
};

#endif
