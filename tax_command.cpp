// tax_command.cpp
#include "tax_command.h"

TaxCommand::TaxCommand(TaxationDepartment* dept, float rate)
        : taxationDepartment(dept), newTaxRate(rate) {}

void TaxCommand::execute() {
    taxationDepartment->updateTaxes(newTaxRate);
    taxationDepartment->manageCity();
}

float TaxCommand::getTaxRate(){
    return newTaxRate;
}
