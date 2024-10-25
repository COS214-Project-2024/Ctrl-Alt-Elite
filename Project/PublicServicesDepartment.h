#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H

class PublicServicesDepartment : Government {


public:
	PublicServicesDepartment(City* city);

	void manageCity();

	void updatePublicServices(vector<string> services);

public:
	PublicServicesDepartment();

	void setNextHandler(PublicServiceDepartment* handler);

	void handleRequest(int requestType);
};

#endif
