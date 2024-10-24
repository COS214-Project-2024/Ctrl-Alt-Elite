#ifndef ADAPTER_H
#define ADAPTER_H

class Adapter : CompositeBuilding, BuidlingTarget {

public:
	CompositeBuilding* adaptee;

	Adapter(CompositeBuilding* cb);

	void addResidentialUnit(int units);

	void addCommercialUnits(int units);

	void addIndustrial(int units);

	void displayCityStatus();
};

#endif
