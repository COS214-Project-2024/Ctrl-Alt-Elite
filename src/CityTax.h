#ifndef CITYTAX_H
#define CITYTAX_H

class CityTax : TaxationStrategy {

public:
	float propertyTaxRate;

	void collectTax(Building* building);
};

#endif
