#ifndef EDUCATION_H
#define EDUCATION_H
#include "PublicServicesDepartment.h"

class Education : public PublicServicesDepartment {


public:
	Education(City* city);
	virtual void handleRequest(int requestType) override;
};

#endif
