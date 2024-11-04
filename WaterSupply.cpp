#include "WaterSupply.h"
#include "Water.h"
#include "Budget.h"

WaterSupply::WaterSupply(Building *bld, ResourceFactory *rf, float cost, int capacity)
    : Utilities(bld, rf, cost), waterCapacity(capacity), waterConsumed(10)
{

    //resource = nullptr; // Default to nullptr until successful construction

    if (rf)
    {
        Budget *budgetResource = dynamic_cast<Budget *>(rf->getResource("Budget"));
        Resource *materialsResource = rf->getResource("Materials");

        float materialCostFactor = 5.0f; // Cost factor for materials
        float materialRequirement = cost / materialCostFactor;

        if (budgetResource && materialsResource)
        {
            // Check if sufficient budget and materials exist
            if (budgetResource->getCapacity() >= cost && materialsResource->getCapacity() >= materialRequirement)
            {
                budgetResource->consume(cost);                   // Deduct from budget
                materialsResource->consume(materialRequirement); // Deduct materials based on requirement
                resource = rf->getResource("Water");             // Only assign resource if deductions are successful
                std::cout << "WaterSupply constructed using $" << cost << " from budget and "
                          << materialRequirement << " units of Materials." << std::endl;
            }
            else
            {
                std::cout << "Insufficient Budget or Materials to construct WaterSupply." << std::endl;
            }
        }
        else
        {
            std::cout << "Budget or Materials resource is missing from factory." << std::endl;
        }
    }
}

void WaterSupply::applyUtility(Building *building)
{
    if (checkWaterSupply())
    {
        Water *waterResource = dynamic_cast<Water *>(resource);

        if (waterResource && waterResource->getCapacity() >= waterConsumed)
        {
            waterResource->consume(waterConsumed);
            building->setHasWaterSupply(true);
            std::cout << "WaterSupply: Successfully supplied " << waterConsumed
                      << " units of water to the building." << std::endl;
        }
        else
        {
            building->setHasWaterSupply(false);
            std::cout << "WaterSupply: Insufficient water available. Only "
                      << (waterResource ? waterResource->getCapacity() : 0)
                      << " units remain, but " << waterConsumed
                      << " units are required." << std::endl;
        }
    }
    else
    {
        building->setHasWaterSupply(false);
        std::cout << "WaterSupply: Unable to provide water due to insufficient supply." << std::endl;
    }
}

bool WaterSupply::checkWaterSupply() const
{
    return dynamic_cast<Water *>(resource)->getCapacity() >= waterConsumed;
}

void WaterSupply::updateWaterConsumption(int newUsage)
{
    waterConsumed = newUsage;
}
