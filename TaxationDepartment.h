#ifndef TAXATIONDEPARTMENT_H
#define TAXATIONDEPARTMENT_H
#include"Government.h"
#include"City.h"
class TaxationDepartment :public Government {


public:
	TaxationDepartment(City* city);

	void manageCity();

	void updateTaxes(float newTaxRate);
};

#endif
