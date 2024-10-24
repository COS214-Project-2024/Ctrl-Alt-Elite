#ifndef CITIZENTAX_H
#define CITIZENTAX_H

class CitizenTax : TaxationStrategy {

public:
	float incomeTaxRate;

	void collectTax(Citizen* citizen);
};

#endif
