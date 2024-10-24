#ifndef TAXATIONDEPARTMENT_H
#define TAXATIONDEPARTMENT_H

class TaxationDepartment : Government {


public:
	TaxationDepartment(City* city);

	void manageCity();

	void updateTaxes(float newTaxRate);
};

#endif
