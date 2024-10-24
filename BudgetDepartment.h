#ifndef BUDGETDEPARTMENT_H
#define BUDGETDEPARTMENT_H

class BudgetDepartment : Government {


public:
	BudgetDepartment(City* city);

	void mangeCity();

	void executeCommands();
};

#endif
