#ifndef BUDGETDEPARTMENT_H
#define BUDGETDEPARTMENT_H
#include"Government.h"
#include"City.h"

class BudgetDepartment : Government {


public:
	BudgetDepartment(City* city);

	void mangeCity();

	void executeCommands();
};

#endif
