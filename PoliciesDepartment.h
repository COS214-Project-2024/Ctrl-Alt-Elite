// PoliciesDepartment.h
#ifndef POLICIESDEPARTMENT_H
#define POLICIESDEPARTMENT_H

#include "Government.h"

class PoliciesDepartment : public Government {
public:
    PoliciesDepartment(City* city);

    void manageCity() override;
    void implementPolicy(const std::string& policy) override;

    // Implementations for unused Government methods
    void updateTaxes(float newTaxRate) override;
    void updatePublicServices(const std::vector<std::string>& services) override {}
    void allocateBudget(float budget) override {}
};

#endif // POLICIESDEPARTMENT_H
