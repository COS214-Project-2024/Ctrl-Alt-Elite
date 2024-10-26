#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H
#include"Government.h"
#include"City.h"

class PublicServicesDepartment : Government {


public:
	PublicServicesDepartment(City* city);

	void manageCity();

	void updatePublicServices(std::vector<std::string> services);

public:
	PublicServicesDepartment();

	void setNextHandler(PublicServiceDepartment* handler);

	void handleRequest(int requestType);
};

#endif
