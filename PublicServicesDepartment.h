// PublicServicesDepartment.h
#ifndef PUBLICSERVICESDEPARTMENT_H
#define PUBLICSERVICESDEPARTMENT_H
#include <sstream>
#include "Government.h"

class PublicServicesDepartment : public Government {
private:
    PublicServicesDepartment* handler;

public:
    PublicServicesDepartment(City* city);

    void manageCity() override;
    void updatePublicServices(const std::vector<std::string>& services) override;

    void setNextHandler(PublicServicesDepartment* handler);
    virtual void handleRequest(int requestType);

    // Implementations for unused Government methods
    void updateTaxes(float newTaxRate) override;
    void implementPolicy(const std::string& policy) override {}
    void allocateBudget(float budget) override {}
};

#endif // PUBLICSERVICESDEPARTMENT_H
