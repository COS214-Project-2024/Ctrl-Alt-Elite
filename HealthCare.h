#ifndef HEALTHCARE_H
#define HEALTHCARE_H
#include "PublicServicesDepartment.h"

class HealthCare : PublicServicesDepartment {


public:
	void handleRequest(int requestType);
};

#endif
