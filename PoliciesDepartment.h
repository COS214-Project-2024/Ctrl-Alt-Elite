#ifndef POLICIESDEPARTMENT_H
#define POLICIESDEPARTMENT_H

class PoliciesDepartment : Government {


public:
	PoliciesDepartment(City* city);

	void mangeCity();

	void implementPolicy(string policy);
};

#endif
