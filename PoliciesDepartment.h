#ifndef POLICIESDEPARTMENT_H
#define POLICIESDEPARTMENT_H
#include"Government.h"

class PoliciesDepartment :public Government {

public:
	PoliciesDepartment(City* city);

	void manageCity() override;

	void implementPolicy(std::string policy);

	float getTaxrate();
};

#endif
