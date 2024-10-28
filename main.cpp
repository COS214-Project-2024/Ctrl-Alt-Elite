// main.cpp
#include "government.h"
#include "city.h"
#include "tax_command.h"
#include "allocate_budget_command.h"
#include "policy_command.h"
#include "public_services_command.h"

int main() {
    City city;

    // Create commands
    auto taxCommand = std::make_unique<TaxCommand>(city);
    auto budgetCommand = std::make_unique<AllocateBudgetCommand>(city, "Education Department", 100000);
    auto policyCommand = std::make_unique<PolicyCommand>(city, "Environmental Protection");
    auto publicServiceCommand = std::make_unique<PublicServicesCommand>(city, "Healthcare");

    // Government as the Invoker
    Government government;
    government.setCommand(std::move(taxCommand));
    government.setCommand(std::move(budgetCommand));
    government.setCommand(std::move(policyCommand));
    government.setCommand(std::move(publicServiceCommand));

    // Execute all commands
    government.executeCommands();

    return 0;
}
