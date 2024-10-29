#ifndef LAWENFORCMENT_H
#define LAWENFORCMENT_H
#include"PublicServicesDepartment.h"

class LawEnforcment : public PublicServicesDepartment {


public:
	void handleRequest(int requestType);
};

#endif
