#ifndef TAXATIONSTRATEGY_H
#define TAXATIONSTRATEGY_H

class TaxationStrategy {


public:
	void collectTax(Citizen* citizen);

	void collectTax(Building* building);
};

#endif
