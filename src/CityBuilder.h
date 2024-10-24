#ifndef CITYBUILDER_H
#define CITYBUILDER_H

class CityBuilder : Builder {

public:
	CompositeBuilding* buildingComposite;

	CityBuilder();

	CompositeBuilding* getBuildingComposite();

	void buildPopulationGrowth();

	void buildHousingExpansion();

	void buildEconomicDevelopment();

	void buildInfrastructureExpansion();

	CompositeBuilding* clone();
};

#endif
