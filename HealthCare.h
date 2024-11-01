#ifndef HEALTHCARE_H
#define HEALTHCARE_H
#include "PublicServicesDepartment.h"

class HealthCare :public PublicServicesDepartment {


public:
	HealthCare(City* city);
	virtual void handleRequest(int requestType) override;
};

#endif

