// TaxationDepartment.h
#ifndef TAXATIONDEPARTMENT_H
#define TAXATIONDEPARTMENT_H

#include "Government.h"

class TaxationDepartment : public Government {
public:
    TaxationDepartment(City* city);

    void manageCity() override;
    void updateTaxes(float newTaxRate) override;

    // Implementations for unused Government methods
    void implementPolicy(const std::string& policy) override {}
    void updatePublicServices(const std::vector<std::string>& services) override {}
    void allocateBudget(float budget) override {}
};

#endif // TAXATIONDEPARTMENT_H
