#include "Government.h"
#include "TaxationDepartment.h"
#include"BudgetDepartment.h"
#include "PoliciesDepartment.h"
#include "PublicServicesDepartment.h"
#include "Education.h"
#include "LawEnforcment.h"
#include "HealthCare.h"
#include "City.h"
void testChain();
void testTemplate();

int main(){
    testTemplate();
    testChain();
}

void testTemplate(){
    City *city= new City();
    PoliciesDepartment* pol = new PoliciesDepartment(city);
    pol->implementPolicy("Smack bad people");
    pol->Report();

    TaxationDepartment* tax =new TaxationDepartment(city);
    tax->updateTaxes(20);
    tax->Report();
}

void testChain(){
    City *city= new City();
    PublicServicesDepartment* publicServe = new PublicServicesDepartment(city);
    PublicServicesDepartment* health = new HealthCare(city);
    PublicServicesDepartment* law = new LawEnforcment(city);
    PublicServicesDepartment* education = new Education(city);
    law->setNextHandler(education);
    health->setNextHandler(law);
    publicServe->setNextHandler(health);
    publicServe->handleRequest(1);
}