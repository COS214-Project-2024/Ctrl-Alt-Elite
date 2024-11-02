// tax_command.h
#ifndef TAX_COMMAND_H
#define TAX_COMMAND_H

#include "command.h"
#include "City.h"
#include "TaxationDepartment.h"

class TaxCommand : public Command {
private:
    TaxationDepartment* taxationDepartment;
    float newTaxRate;

public:
    TaxCommand(TaxationDepartment* dept, float rate);
    void execute() override;
};

#endif // TAX_COMMAND_H
