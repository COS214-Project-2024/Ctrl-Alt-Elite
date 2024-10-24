#ifndef BUIDLINGTARGET_H
#define BUIDLINGTARGET_H

class BuidlingTarget {


private:
	void BuildingTarget();

public:
	virtual void addResidentialUnits(int units) = 0;

	virtual void addCommercialUnits(int units) = 0;

	virtual void addIndustrialUnits(int units) = 0;

	virtual void displayCityStatus() = 0;
};

#endif
