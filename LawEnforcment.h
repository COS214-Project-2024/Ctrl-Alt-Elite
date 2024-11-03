#ifndef LAWENFORCMENT_H
#define LAWENFORCMENT_H
#include"PublicServicesDepartment.h"

class LawEnforcment : public PublicServicesDepartment {


public:
	LawEnforcment(City* city);
	virtual void handleRequest(int requestType) override;
};

#endif
