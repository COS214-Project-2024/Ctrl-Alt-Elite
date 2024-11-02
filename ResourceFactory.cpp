#include "ResourceFactory.h"
#include "Energy.h"
#include "Water.h"
#include "Materials.h"
#include "Budget.h"
#include <string>

ResourceFactory::ResourceFactory(float energyAmount, float waterAmount, float materialsAmount, float budgetAmount) {
    // Initialize the resource pool with specified amounts
    resourcePool["Energy"] = new Energy(energyAmount);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Energy resource initialized with capacity: " << energyAmount << "KW" << std::endl;

    resourcePool["Water"] = new Water(waterAmount);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Water resource initialized with capacity: " << waterAmount << "KL" << std::endl;

    resourcePool["Materials"] = new Materials(materialsAmount);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Materials resource initialized with capacity: " << materialsAmount << "tons" << std::endl;

    resourcePool["Budget"] = new Budget(budgetAmount);
    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Budget resource initialized with capacity: R" << budgetAmount << std::endl;
}


ResourceFactory::~ResourceFactory()
{
    for (auto &entry : resourcePool)
    {
        delete entry.second;
    }
}

Resource *ResourceFactory::getResource(const std::string &resourceType)
{
    if (resourcePool.find(resourceType) == resourcePool.end())
    {
        Resource *newResource = nullptr;

        // Create resource based on type
        if (resourceType == "Energy")
        {
            newResource = new Energy(1000000);
        }
        else if (resourceType == "Water")
        {
            newResource = new Water(5000000);
        }
        else if (resourceType == "Materials")
        {
            newResource = new Materials(200000);
        }

        if (newResource)
        {
            float resourceCost = newResource->getCost();

            // Check if the budget resource exists and has enough funds
            if (resourcePool.find("Budget") != resourcePool.end())
            {
                Budget *budgetResource = dynamic_cast<Budget *>(resourcePool["Budget"]);
                if (budgetResource && budgetResource->getCapacity() >= resourceCost)
                {
                    budgetResource->consume(resourceCost);    // Deduct the cost from the budget
                    resourcePool[resourceType] = newResource; // Store the new resource
                }
                else
                {
                    std::cout << "Insufficient budget for " << resourceType << " resource." << std::endl;
                    delete newResource; // Clean up if budget is insufficient
                    return nullptr;
                }
            }
        }
    }
    return resourcePool[resourceType];
}
#include <iostream>
#include <iomanip>

void ResourceFactory::displayResourceStatus() {
    std::cout << std::fixed << std::setprecision(0); // Ensure no scientific notation and no decimal points
    if (resourcePool.find("Energy") != resourcePool.end()) {
        std::cout << "Energy capacity: " << resourcePool.at("Energy")->getCapacity() << "KW" << std::endl;
    }
    if (resourcePool.find("Water") != resourcePool.end()) {
        std::cout << "Water capacity: " << resourcePool.at("Water")->getCapacity() << "KL" << std::endl;
    }
    if (resourcePool.find("Materials") != resourcePool.end()) {
        std::cout << "Materials capacity: " << resourcePool.at("Materials")->getCapacity() << " tons" <<std::endl;
    }
    if (resourcePool.find("Budget") != resourcePool.end()) {
        std::cout << "Budget capacity: R" << resourcePool.at("Budget")->getCapacity() << std::endl;
    }
}

void ResourceFactory::replenishResource(const std::string &resourceType, int amount)
{
    if (resourcePool.find(resourceType) != resourcePool.end())
    {
        // Define the cost factor for each resource type
        float costFactor = 0.0;
        if (resourceType == "Water")
        {
            costFactor = 15.5f;
        }
        else if (resourceType == "Energy")
        {
            costFactor = 20.0f;
        }
        else if (resourceType == "Materials")
        {
            costFactor = 5.0f;
        }

        // Calculate the cost and deduct it from the budget if a cost factor is set
        float replenishCost = amount * costFactor;
        if (costFactor > 0 && resourcePool.find("Budget") != resourcePool.end())
        {
            Budget *budgetResource = dynamic_cast<Budget *>(resourcePool["Budget"]);
            if (budgetResource && budgetResource->getCapacity() >= replenishCost)
            {
                budgetResource->consume(replenishCost);        // Deduct cost from budget
                resourcePool[resourceType]->replenish(amount); // Replenish the resource
                std::cout << "Replenished " << amount << " units of " << resourceType
                          << " at a cost of R" << replenishCost << " from budget." << std::endl;
            }
            else
            {
                std::cout << "Insufficient budget to replenish " << resourceType << "." << std::endl;
            }
        }
        else
        {
            resourcePool[resourceType]->replenish(amount); // Replenish without budget deduction for resources with no cost
            std::cout << "Replenished " << amount << " units of " << resourceType << "." << std::endl;
        }
    }
    else
    {
        std::cout << resourceType << " resource does not exist." << std::endl;
    }
}
