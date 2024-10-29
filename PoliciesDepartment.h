#ifndef POLICIESDEPARTMENT_H
#define POLICIESDEPARTMENT_H
#include"Government.h"

class PoliciesDepartment : Government {

public:
	PoliciesDepartment(City* city);

	void mangeCity();

	void implementPolicy(std::string policy);
};

#endif
