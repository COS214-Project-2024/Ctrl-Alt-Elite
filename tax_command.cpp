// tax_command.cpp
#include "tax_command.h"

TaxCommand::TaxCommand(City& c) : city(c) {}

void TaxCommand::execute() {
    city.collectTaxes();
}
