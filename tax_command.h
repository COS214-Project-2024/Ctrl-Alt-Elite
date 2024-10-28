// tax_command.h
#ifndef TAX_COMMAND_H
#define TAX_COMMAND_H

#include "command.h"
#include "city.h"

class TaxCommand : public Command {
private:
    City& city;

public:
    explicit TaxCommand(City& c);
    void execute() override;
};

#endif // TAX_COMMAND_H
