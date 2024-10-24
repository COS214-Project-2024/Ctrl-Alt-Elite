#ifndef TAXCOMMAND_H
#define TAXCOMMAND_H

class TaxCommand : Command {

private:
	float newTaxRate;
	taxStrategy* TaxStrategy;
	vector<Citizen*> citizen;
	Building* building;

public:
	void execute();

	void setTaxStrategy(TaxStratgey* strategy);
};

#endif
