// BudgetDepartment.h
#ifndef BUDGETDEPARTMENT_H
#define BUDGETDEPARTMENT_H

#include "Government.h"

class BudgetDepartment : public Government {
public:
    BudgetDepartment(City* city);

    void manageCity() override;
    void allocateBudget(float budget);

    // Implementations for unused Government methods
    void updateTaxes(float newTaxRate) ;
    void implementPolicy(const std::string& policy) {}
    void updatePublicServices(const std::vector<std::string>& services) {}
};

#endif // BUDGETDEPARTMENT_H
