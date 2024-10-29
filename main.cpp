// main.cpp
#include "City.h"
#include "TaxationDepartment.h"
#include "BudgetDepartment.h"
#include "PoliciesDepartment.h"
#include "PublicServicesDepartment.h"
#include "tax_command.h"
#include "allocate_budget_command.h"
#include "policy_command.h"
#include "public_services_command.h"
#include <iostream>
#include <vector>

int main() {
    // Create City instance
    City city;

    // Create government department instances
    TaxationDepartment taxDept(&city);
    BudgetDepartment budgetDept(&city);
    PoliciesDepartment policyDept(&city);
    PublicServicesDepartment publicServiceDept(&city);

    // Set initial commands and test basic functionality
    std::cout << "===== Initial Commands Test =====" << std::endl;

    // Test TaxCommand
    TaxCommand taxCommand(&taxDept, 20.0); // Set tax rate to 20%
    taxCommand.execute();

    // Test AllocateBudgetCommand
    AllocateBudgetCommand budgetCommand(&budgetDept, 50000); // Allocate $50,000 to the budget
    budgetCommand.execute();

    // Test PolicyCommand
    PolicyCommand policyCommand(&policyDept, "Environmental Protection"); // Set policy to Environmental Protection
    policyCommand.execute();

    // Test PublicServicesCommand
    std::vector<std::string> services = {"Healthcare", "Education", "Law Enforcement"};
    PublicServicesCommand publicServiceCommand(&publicServiceDept, services);
    publicServiceCommand.execute();

    // Generate Government Report
    std::cout << "\n===== Government Report =====" << std::endl;
    policyDept.Report();

    return 0;
}
