#ifndef BUILDER_H
#define BUILDER_H

class Builder {


private:
	Builder();

public:
	void buildPopluationGrowth();

	void buildHousingExpansion();

	void buildEconomicDevelopment();

	void buildInfrastructureExpansion();

	CompositeBuilding* clone();
};

#endif
