#ifndef TAX_COMMAND_H
#define TAX_COMMAND_H

#include "command.h"
#include "City.h"
#include "TaxationDepartment.h"

/**
 * @class TaxCommand
 * @brief Command class to handle tax updates in the city.
 * 
 * This class encapsulates the command to update the tax rate within
 * the TaxationDepartment. It allows for the execution of tax-related
 * operations in the city management system.
 */
class TaxCommand : public Command {
private:
    TaxationDepartment* taxationDepartment; ///< Pointer to the TaxationDepartment managing taxes.
    float newTaxRate; ///< The new tax rate to be applied.

public:
    /**
     * @brief Constructs a TaxCommand with a specified TaxationDepartment and tax rate.
     * 
     * @param dept Pointer to the TaxationDepartment that this command will operate on.
     * @param rate The new tax rate to be set.
     */
    TaxCommand(TaxationDepartment* dept, float rate);

    /**
     * @brief Executes the tax update command.
     * 
     * This method updates the tax rate in the TaxationDepartment and manages the city
     * according to the new tax settings.
     */
    void execute() override;
};

#endif // TAX_COMMAND_H
