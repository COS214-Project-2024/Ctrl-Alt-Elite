// BudgetDepartment.h
#ifndef BUDGETDEPARTMENT_H
#define BUDGETDEPARTMENT_H

#include "Government.h"

class BudgetDepartment : public Government {
public:
    BudgetDepartment(City* city);

    void manageCity() override;
    void allocateBudget(float budget) override;

    // Implementations for unused Government methods
    void updateTaxes(float newTaxRate) override;
    void implementPolicy(const std::string& policy) override {}
    void updatePublicServices(const std::vector<std::string>& services) override {}
};

#endif // BUDGETDEPARTMENT_H
