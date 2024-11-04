#ifndef CITYBUILDER_H
#define CITYBUILDER_H

#include "Builder.h"
#include "CompositeBuilding.h"

/**
 * @class CityBuilder
 * @brief Implements the Builder interface to construct complex city buildings for population, economic, and infrastructure expansion.
 * 
 * CityBuilder provides specific methods to support different aspects of city development, including population growth,
 * job growth, housing expansion, economic development, and infrastructure expansion.
 */
class CityBuilder : public Builder {
private:
    CompositeBuilding* buildingComposite; ///< Composite structure to hold various building types.

public:
    /**
     * @brief Constructs a CityBuilder object and initializes an empty CompositeBuilding.
     */
    CityBuilder();

    /**
     * @brief Destructor for CityBuilder, responsible for cleaning up the allocated CompositeBuilding.
     */
    ~CityBuilder();

    /**
     * @brief Builds residential structures to support population growth in the city.
     * @param amount The target number of residents to accommodate.
     */
    void buildPopulationGrowth(int amount) override;

    /**
     * @brief Adds structures or modifies existing ones to create job opportunities.
     * @param amount The number of jobs to generate.
     */
    void buildJobGrowth(int amount) override;

    /**
     * @brief Expands housing by adding diverse residential buildings such as estates and townhouses.
     */
    void buildHousingExpansion() override;

    /**
     * @brief Develops commercial areas to boost economic growth and increase city revenue.
     */
    void buildEconomicDevelopment() override;

    /**
     * @brief Expands infrastructure by constructing industrial buildings that support city utilities and employment.
     */
    void buildInfrastructureExpansion() override;

    /**
     * @brief Retrieves the composite building structure containing all the constructed components.
     * @return Pointer to the composite building structure.
     */
    CompositeBuilding* getCompositeBuilding() override;
};

#endif // CITYBUILDER_H
