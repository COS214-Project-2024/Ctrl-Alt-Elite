#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H
#include"Government.h"
#include"City.h"

class PublicServicesDepartment : Government {
private:
	PublicServicesDepartment* successor;


public:
	PublicServicesDepartment(City* city);

	void manageCity();

	void updatePublicServices(std::vector<std::string> services);

	PublicServicesDepartment();

	void setNextHandler(PublicServicesDepartment* handler);

	void handleRequest(int requestType);
};

#endif
